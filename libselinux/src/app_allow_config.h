
#ifndef _APP_ALLOW_CONFIG_H_
#define _APP_ALLOW_CONFIG_H_


static bool insert_line_to_app_allow_config(const char *line);
void load_app_allow_config();
bool is_in_app_allow_config(const char *pathname);

#endif // _APP_ALLOW_CONFIG_H_