#ifndef VARIABLE_H
#define VARIABLE_H

#include "externals.h"

struct timeval ts_begin;
struct timeval ts_end;

FILE *dsaaa_report;
const char *blank = 
"                                                           \
                                                            \
                                                            ";

char strinfo_buf[STRINFO_BUF_SIZE];

static HOMEWORK homework[] = {
#if 1
  &data_structure_verify,
  &chapt_1_1,
  &chapt_1_4,
  &chapt_2_7,
  &chapt_2_11,
  &chapt_2_12,
  &chapt_2_13,
  &chapt_2_16,
  &chapt_2_19,
  &chapt_3_1,
  &chapt_3_2,
  &chapt_3_6,
  &chapt_3_9,
  &chapt_3_10,
  &chapt_3_16,
#else
  &chapt_3_6,
#endif
};


#endif
