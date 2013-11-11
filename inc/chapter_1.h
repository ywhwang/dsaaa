#ifndef CHAPTER11_H
#define CHAPTER11_H


extern FILE *hwork_rept;
extern const char *blank;

static char *include_path[] = {
  "./",
  "./inc/",
  "./src/",
  "/usr/include/",
  "/usr/include/x86_64-linux-gnu/",
};
static int depth = -1;

#ifdef STD_HEAD_FILE
static char *std_head[] = {
  "assert.h",
  "stdio.h",
  "stdlib.h",
  "string.h",
  "stddef.h",
  "stdarg.h",
  "errno.h",
  "limits.h",
  "time.h",
  "ctype.h",
  "math.h",

  #ifdef __linux__
  "sys/types.h",
  "sys/stat.h",
  "sys/wait.h",
  "sys/time.h",
  "sys/mman.h",
  "unistd.h",
  "fcntl.h",
  "netinet/in.h",
  "sys/socket.h",
  "arpa/inet.h",
  "pthread.h",
  #endif
};
#endif

#ifdef NO_STD_HEAD_FILE
static int exstack_top = 0;
static char expand_stack[EXPAND_DEPTH][FILENAME_LENGTH];
static void
pop_expand_stack(void);
#endif

extern void
error_handle(const char *);
extern void
timing_start(void);
extern void
timing_end(unsigned *);
extern void
exchange(int *, int *);
extern void
leave(void);
extern void
enter(const char *);
extern void
print_report_header(FILE *, const char *, int, int);


void
chapt_1_1(void);
void
chapt_1_4(void);


static int *
data_prepare(int);
static int
selection_problem(int *, int, int);
static int
split_data(int *, int, int);
static int
result_validate(int *, int, int);
static void
report_data(struct rept_entry *);
static void
dochapter1_1(int);
static void
dochapter1_4(void);
static void
expand_file(char *);
static char *
isinclude(char*);
static void
include_name(char *, char *);
static FILE *
find_quoted_file(const char *);
static int
keyword_valid(char *);
static int
isvalid_headfile(const char *);
static void
print_result(char *fmt, ...);
static void
print_algo_info(FILE *);


#endif
