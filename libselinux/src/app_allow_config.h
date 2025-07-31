/*
* Copyright (c) 2025 Huawei Device Co., Ltd.
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef _APP_ALLOW_CONFIG_H_
#define _APP_ALLOW_CONFIG_H_


static bool insert_line_to_app_allow_config(const char *line);
void load_app_allow_config();
bool is_in_app_allow_config(const char *pathname);

#endif // _APP_ALLOW_CONFIG_H_