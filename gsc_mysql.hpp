#ifndef _GSC_MYSQL_HPP_
#define _GSC_MYSQL_HPP_

#ifdef __cplusplus
extern "C" {
#endif

/* default stuff */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* gsc functions */
#include "gsc.hpp"

/* offsetof */
#include <stddef.h>

void gsc_mysql_initialize();
void gsc_mysql_close();
void gsc_mysql_query();
void gsc_mysql_errno();
void gsc_mysql_error();
void gsc_mysql_affected_rows();
void gsc_mysql_store_result();
void gsc_mysql_num_rows();
void gsc_mysql_num_fields();
void gsc_mysql_field_seek();
void gsc_mysql_fetch_field();
void gsc_mysql_fetch_row();
void gsc_mysql_free_result();
void gsc_mysql_real_escape_string();

#ifdef __cplusplus
}
#endif

#endif