/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*-------------------------------------------------------------------------
 *
 * cdbanalyze.h
 *	  Provides routines for performing distributed analyze cdb
 *
 *-------------------------------------------------------------------------
 */

#ifndef CDBANALYZE_H
#define CDBANALYZE_H

#include "commands/vacuum.h"
#include "cdb/cdbdispatchresult.h" /* CdbDispatchResults */

extern const int gp_external_table_default_number_of_pages;
extern const int gp_external_table_default_number_of_tuples;

void gp_statistics_estimate_reltuples_relpages_external_pxf(Relation rel,
															StringInfo location,
															float4 *reltuples,
															float4 *relpages,
															StringInfo err_msg);

#endif   /* CDBANALYZE_H */
