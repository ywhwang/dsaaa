#ifndef VARIABLE_H
#define VARIABLE_H


extern void
chapt_1_1(void);
extern void
chapt_1_4(void);
extern void
chapt_2_7(void);
extern void
chapt_2_11(void);
extern void
chapt_2_12(void);
extern void
chapt_2_13(void);
extern void
chapt_2_16(void);

struct timeval ts_begin;
struct timeval ts_end;

FILE *hwork_rept;
const char *blank = 
"                                               ";

static HOMEWORK homework[] = {
#if 1
  &chapt_1_1,
  &chapt_1_4,
  &chapt_2_7,
  &chapt_2_11,
  &chapt_2_12,
  &chapt_2_13,
  &chapt_2_16,
#else
  &chapt_2_16,
#endif
};


#endif
