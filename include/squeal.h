#ifndef HAVE_SQUEAL_H
#define HAVE_SQUEAL_H

#include <stdarg.h>
#include <ctype.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <squeal_log.h>
#include <squeal_types.h>
#include <squeal_sval.h>
#include <squeal_string.h>
#include <squeal_config.h>
#include <squeal_stats.h>

#define SUCCESS 0
#define FAILURE -1

#ifndef MIN
#   define MIN(a,b) (((a)<(b))?(a):(b))
#endif

#ifndef MAX
#   define MAX(a,b) (((a)>(b))?(a):(b))
#endif

/* SELECT statement */
Select *sql_select_init();
void sql_select_free(Select *select);

/* SQL statement */
SqlStatement *sql_statement_init();
void sql_statement_free(SqlStatement *statement);

Table *sql_table_init();
void sql_table_free(Table *table);

/* ORDER BY */
OrderBy *sql_order_by_init();
void sql_order_by_free(OrderBy *order);

/* GROUP BY */
GroupBy *sql_group_by_init();
void sql_group_by_free(GroupBy *group);

/* columns */
Column *sql_column_init();
void sql_column_free(Column *column);

/* WHERE clause */
Where *sql_where_init();
void sql_where_free(Where *where);

#endif
