/*
 * This code is written and maintained by Zhenrong WANG
 * mailto: zhenrongwang@live.com (*preferred*) | wangzhenrong@hpc-now.com
 * The founder of Shanghai HPC-NOW Technologies Co., Ltd (website: https://www.hpc-now.com)
 * This code is distributed under the license: GNU Public License - v2.0
 * Bug report: info@hpc-now.com
 */

#ifndef CLUSTER_OPERATIONS_H
#define CLUSTER_OPERATIONS_H

int exit_current_cluster(void);
int switch_to_cluster(char* target_cluster_name);
int add_to_cluster_registry(char* new_cluster_name);
int delete_from_cluster_registry(char* deleted_cluster_name);
int list_all_cluster_names(int header_flag);
int glance_clusters(char* target_cluster_name, char* crypto_keyfile);
int remove_cluster(char* target_cluster_name, char*crypto_keyfile, char* force_flag);
int refresh_cluster(char* target_cluster_name, char* crypto_keyfile, char* force_flag);
int create_new_cluster(char* crypto_keyfile, char* cluster_name, char* cloud_ak, char* cloud_sk, char* echo_flag);
int rotate_new_keypair(char* workdir, char* cloud_ak, char* cloud_sk, char* crypto_keyfile, char* echo_flag);
int cluster_destroy(char* workdir, char* crypto_keyfile, char* force_flag);
int delete_compute_node(char* workdir, char* crypto_keyfile, char* param);
int add_compute_node(char* workdir, char* crypto_keyfile, char* add_number_string);
int shutdown_compute_nodes(char* workdir, char* crypto_keyfile, char* param);
int turn_on_compute_nodes(char* workdir, char* crypto_keyfile, char* param);
int check_reconfigure_list(char* workdir);
int reconfigure_compute_node(char* workdir, char* crypto_keyfile, char* new_config, char* htflag);
int reconfigure_master_node(char* workdir, char* crypto_keyfile, char* new_config);
int cluster_sleep(char* workdir, char* crypto_keyfile);
int cluster_wakeup(char* workdir, char* crypto_keyfile, char* option);
int get_default_conf(char* workdir, char* crypto_keyfile, int edit_flag);
int edit_configuration_file(char* workdir, char* crypto_keyfile);
int rebuild_nodes(char* workdir, char* crypto_keyfile, char* option);
int view_run_log(char* workdir, char* stream, char* run_option, char* view_option);

#endif