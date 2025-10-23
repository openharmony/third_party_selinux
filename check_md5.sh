#! /bin/bash

output_file=$1
input_file=$2
md5sum_file=$3

if [ ! -f ${input_file} ] || [ ! -f ${output_file} ];then
    echo "some files doesn't exit."
    exit
fi

if [ -f ${md5sum_file} ];then
    last_md5=$(cat ${md5sum_file})
    this_md5=$(md5sum ${input_file} | awk '{print $1}')
    if [ $last_md5 != $this_md5 ];then
        # update md5 file
        md5sum ${input_file} | awk '{print $1}' > ${md5sum_file}
        echo "update md5sum file"
        exit       
    fi
else
    md5sum ${input_file} | awk '{print $1}' > ${md5sum_file}
    echo "md5sum file doesn't exit."
    exit
fi
