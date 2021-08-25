1. 同步 OpenHarmony 代码

https://gitee.com/openharmony/docs/blob/master/zh-cn/device-dev/quick-start/quickstart-standard-package-environment.md


2. 下载本仓库

https://gitee.com/openharmony-sig/third_party_selinux.git -> third_party/selinux


3. 同步其他仓库

productdefine/common/     <- https://gitee.com/hu-huifeng/productdefine_common.git
third_party/toybox/       <- https://gitee.com/hu-huifeng/third_party_toybox.git
base/security/permission/ <- https://gitee.com/hu-huifeng/security_permission.git


3. 编译 SELinux

./build.sh --product-name Hi3516DV300 --build-target selinux
./third_party/selinux/demo/build_policy.sh

拷贝以下文件到同一个文件夹：

1) ./out/ohos-arm-release/security/selinux/*
2) ./third_party/selinux/demo/config
3) ./third_party/selinux/demo/precompiled_sepolicy
4) ./third_party/selinux/demo/file_contexts
5) ./third_party/selinux/demo/rmabcd.sh
6) ./third_party/selinux/demo/push*.sh
7) ./developtools/hdc_standard/prebuilt/windows/hdc_std.exe
8) ./third_party/selinux/demo/rmabcd.sh


4. 编译 Toybox

./build.sh --product-name Hi3516DV300 --build-target toybox

拷贝以下文件到同一个文件夹（跟 SELinux 的输出拷贝的文件夹相同）：

1) ./out/ohos-arm-release/startup/init/toybox


5. 推到单板

双击打开刚才拷贝文件的目标文件夹：

1) 双击 push.bat 把 SELinux 推到单板
2) 双击 push_toybox.bat 把 Toybox 推到单板
3) 双击 push_demo.bat 把测试程序 demoloop 推到单板


6. 运行验证

加载标签：

1) load_policy      -> 加载是否成功
2) restorecon -R /  -> 看是否成功
3) ls -lZ /         -> 看标签是否成功
4) ps -eZ           -> 看标签是否成功

测试（可能会随着代码提交变得无法通过）：

板子中运行 demoloop 命令，然后双击 push_demo_abcd.bat，然后看串口是否有 avc denied, avc grant 日志。

