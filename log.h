#ifndef SRC_LOG_H_
#define  SRC_LOG_H_

#include <stdio.h>
#include <stdarg.h>
#include <time.h>

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

#define TRACE(...) do { \
  fprintf(stderr, COLOR_BLUE"[TRACE %s]%s %s:%d: ", __TIME__, COLOR_RESET, __FILE__, __LINE__); \
  printf(__VA_ARGS__); \
} while(0);
#define DEBUG(...) do { \
  fprintf(stderr, COLOR_CYAN"[DEBUG %s]%s %s:%d: ", __TIME__, COLOR_RESET, __FILE__, __LINE__); \
  printf(__VA_ARGS__); \
} while(0);
#define INFO(...) do { \
  fprintf(stderr, COLOR_GREEN"[INFO %s]%s %s:%d: ", __TIME__, COLOR_RESET, __FILE__, __LINE__); \
  printf(__VA_ARGS__); \
} while(0);
#define WARN(...) do { \
  fprintf(stderr, COLOR_YELLOW"[WARN %s]%s %s:%d: ", __TIME__, COLOR_RESET, __FILE__, __LINE__); \
  printf(__VA_ARGS__); \
} while(0);
#define ERROR(...) do { \
  fprintf(stderr, COLOR_RED"[ERROR %s]%s %s:%d: ", __TIME__, COLOR_RESET, __FILE__, __LINE__); \
  printf(__VA_ARGS__); \
} while(0);
#define FATAL(...) do { \
  fprintf(stderr, COLOR_MAGENTA"[FATAL %s]%s %s:%d: ", __TIME__, COLOR_RESET, __FILE__, __LINE__); \
  printf(__VA_ARGS__); \
} while(0);

#endif // SRC_LOG_H_
