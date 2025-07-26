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
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "app_allow_config.h"
#include "callbacks.h"
#include "ignore_path.h"


#define SYSTEM_APP_ALLOW_CONFIG_PATH "/system/etc/selinux/app_allow_config"
static char **g_app_allow_config = NULL;
static size_t g_line_count = 0;

static bool insert_line_to_app_allow_config(const char *line)
{
	if (strlen(line) == 0) {
		return false;
	}

	char **new_list = (char **)malloc((g_line_count + 1) * sizeof(char *));
	if (new_list == NULL) {
		selinux_log(SELINUX_ERROR, "Failed to malloc, line: %s\n", line);
		return false;
	}

	if (g_app_allow_config != NULL) {
		for (size_t i = 0; i < g_line_count; i++) {
			new_list[i] = g_app_allow_config[i];
			free(g_app_allow_config[i]);
		}
		free(g_app_allow_config);
	}

	g_app_allow_config = new_list;
	g_app_allow_config[g_line_count] = strdup(line);
	if (g_app_allow_config[g_line_count] == NULL) {
		for (size_t i = 0; i < g_line_count; i++) {
			free(new_list[i]);
		}
		free(new_list);
		selinux_log(SELINUX_ERROR, "Failed to strdup, line: %s\n", line);
		return false;
	}

	return true;
}

void load_app_allow_config()
{
	FILE *file = fopen(SYSTEM_APP_ALLOW_CONFIG_PATH, "r");
	if (file == NULL) {
		selinux_log(SELINUX_ERROR, "Failed to open file, %s\n", SYSTEM_APP_ALLOW_CONFIG_PATH);
		return;
	}

	char *line = NULL;
	size_t len = 0;
	while (getline(&line, &len, file) != -1) {
		len = trim_newline(line);
		if (len > 0 && line[len -1] == '/') {
			line[len - 1] = '\0';
		}

		if (!insert_line_to_app_allow_config(line)) {
			selinux_log(SELINUX_ERROR, "Failed to insert app_allow_config line: %s\n", line);
			continue;
		}
		g_line_count++;
	}

	free(line);
	if (fclose(file) != 0) {
		selinux_log(SELINUX_ERROR, "Failed to close file app_allow_config, err: %s\n", strerror(errno));
	}
}

bool is_in_app_allow_config(const char *pathname)
{
	for (size_t i = 0; i < g_line_count; i++) {
		if (strcmp(g_app_allow_config[i], pathname) == 0 ||
			strstr(pathname, g_app_allow_config[i]) != NULL) {
			return true;
		}
	}

	return false;
}
