#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_str(va_list args);
int handle_percent();


#endif /* MAIN_H */
