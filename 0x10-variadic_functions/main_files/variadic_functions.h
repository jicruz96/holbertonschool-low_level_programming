#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_str(va_list list);
void print_int(va_list list);
void print_float(va_list list);
typedef struct printer_pick
{
	char format_type;
	void (*printer)(va_list);
} printer_pick;

#endif
