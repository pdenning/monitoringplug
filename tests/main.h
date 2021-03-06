/***
 * Monitoring Plugin Tests - main.h
 **
 *
 * Copyright (C) 2012 Marius Rieder <marius.rieder@durchmesser.ch>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * $Id$
 */

#ifndef _TESTS_MAIN_H
#define _TESTS_MAIN_H

#include "mp_common.h"

#include <check.h>

struct string_return {
    char    *string;
    double  returning;
};

/* LIB COMMON Suite */
Suite *make_lib_common_suite(void);

/* LIB EOPT Suite */
Suite *make_lib_eopt_suite(void);

/* LIB UTILS Suite */
Suite *make_lib_utils_suite(void);

/* Lib PERFDATA Suite */
Suite *make_lib_perfdata_suite(void);

#endif /* _TESTS_MAIN_H */
