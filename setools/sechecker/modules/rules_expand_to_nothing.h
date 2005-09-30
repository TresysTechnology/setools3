/* Copyright (C) 2005 Tresys Technology, LLC
 * see file 'COPYING' for use and warranty information */
 
/* 
 * Author: jmowery@tresys.com
 *
 */

#include "sechecker.h"
#include "policy.h"

/* The rules_expand_to_nothing_data structure is used to hold the check specific
 *  private data of a module. */
typedef struct rules_expand_to_nothing_data {
	int num_allow;
	int num_neverallow;
	int num_auditallow;
	int num_dontaudit;
	int num_typetrans;
	int num_typechange;
	int num_typemember;
	int num_roletrans;
	int num_rangetrans;
} rules_expand_to_nothing_data_t;

/* Module functions: */
int rules_expand_to_nothing_register(sechk_lib_t *lib);
int rules_expand_to_nothing_init(sechk_module_t *mod, policy_t *policy);
int rules_expand_to_nothing_run(sechk_module_t *mod, policy_t *policy);
void rules_expand_to_nothing_free(sechk_module_t *mod);
int rules_expand_to_nothing_print_output(sechk_module_t *mod, policy_t *policy);
sechk_result_t *rules_expand_to_nothing_get_result(sechk_module_t *mod);

/* The following function is used to allocate and initialize
 * the private data storage structure for this module */
rules_expand_to_nothing_data_t *rules_expand_to_nothing_data_new(void);

