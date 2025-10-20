#! /bin/bash

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
