# third_party_selinux

## 目标

此项目旨在将 SELinux 引入 OpenHarmony，

## 仓库

目前涉及到的仓库有以下几个。

| 仓库 | 源码目录 | 说明 |
| --- | --- | --- |
| [third_party/selinux/](https://gitee.com/openharmony-sig/third_party_selinux.git) | `third_party/selinux/` | SELinux 的主仓库 |
| [productdefine/common/](https://gitee.com/hu-huifeng/productdefine_common.git) | `productdefine/common/` | 添加 SELinux 组件定义 |
| [third_party/toybox/](https://gitee.com/hu-huifeng/third_party_toybox.git) | `third_party/toybox/` | 完善了 `ls` 的 SELinux 支持 |
| [base/security/permission/](https://gitee.com/hu-huifeng/security_permission.git) | `base/security/permission/` | 编译时的入口 |
| [base/startup/init_lite/](https://gitee.com/shell_way/startup_init_lite.git) | `base/startup/init_lite/` | 系统启动加载策略并分化服务的标签 |

> 当前未合入主线，其中链接了一些个人仓库。

## 架构

![整体架构](images/整体架构.png)

引入了以下组件以支持 SELinux。

| 组件 | 来源 | 作用 | 形式 |
| --- | --- | --- | --- |
| `checkpolicy/` | [selinux/checkpolicy](https://github.com/SELinuxProject/selinux/tree/cf853c1a0c2328ad6c62fb2b2cc55d4926301d6b/checkpolicy) | `checkpolicy` | 可执行文件 |
| `libselinux/` | [selinux/libselinux](https://github.com/SELinuxProject/selinux/tree/cf853c1a0c2328ad6c62fb2b2cc55d4926301d6b/libselinux) | `libselinux.so`、`getenforce`、`setenforce` | 动态库 |
| `libsepol/` | [selinux/libsepol](https://github.com/SELinuxProject/selinux/tree/cf853c1a0c2328ad6c62fb2b2cc55d4926301d6b/libsepol) | 提供内部使用的 API | 动态库 |
| `policycoreutils/` | 自研 | `libload_policy.so`、`librestorecon.so`、`load_policy`、`restorecon` | 动态库、可执行文件 |
| `seclic/` | [selinux/seclic](https://github.com/SELinuxProject/selinux/tree/cf853c1a0c2328ad6c62fb2b2cc55d4926301d6b/secilc) | `seclic` | 可执行文件 |
| `depends/fts/` | [openbsd](https://github.com/openbsd/src/tree/e8835b178a3e9df00c1c1fe0b9875fc5ef5a7854) | 提供内部使用的 API | 静态链接 |
| `depends/pcre/pcre2/` | [pcre2](https://github.com/PhilipHazel/pcre2/tree/2ae7c30b95d63ecbaff6727eaff7c3a6a3969d56) | `libpcre2.so` | 动态库 |


