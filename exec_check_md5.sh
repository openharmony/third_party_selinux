#! /bin/bash

# Copyright (c) 2025 Huawei Device Co., Ltd.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

selinux_lib_dir=$1
selinux_exec_name=$2
selinux_gen_dir=$3

function exec_check_md5() {
    local output_file="$1"
    local input_file="$2"
    local md5_file="$3"
    local tool="$4"

    echo "exec_check_md5 $output_file $input_file $md5_file using $tool"
    check_config_result=$(bash "$selinux_lib_dir/check_md5.sh" "$output_file" "$input_file" "$md5_file")

    if [[ -n "$check_config_result" ]]; then
        if [[ "$tool" == "flex" ]]; then
            flex -o "$output_file" "$input_file"
        elif [[ "$tool" == "bison" ]]; then
            bison -y -d "$input_file" -o "$output_file"
        fi
    fi
}

libsepol="libsepol"
checkpolicy="checkpolicy"

case "$selinux_exec_name" in
    "$libsepol")
        exec_check_md5 "$selinux_gen_dir/libsepol/cil/src/cil_lexer.c" \
                       "$selinux_lib_dir/libsepol/cil/src/cil_lexer.l" \
                       "$selinux_lib_dir/libsepol/cil/src/cil_lexer.md5" \
                       "flex"
        ;;
    "$checkpolicy")
        exec_check_md5 "$selinux_gen_dir/checkpolicy/y.tab.c" \
                       "$selinux_lib_dir/checkpolicy/policy_parse.y" \
                       "$selinux_lib_dir/checkpolicy/y.tab.md5" \
                       "bison"

        exec_check_md5 "$selinux_gen_dir/checkpolicy/policy_scan.c" \
                       "$selinux_lib_dir/checkpolicy/policy_scan.l" \
                       "$selinux_lib_dir/checkpolicy/policy_scan.md5" \
                       "flex"
        ;;
    *)
        echo "Unknown exec_name: $selinux_exec_name"
        ;;
esac
