#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _strlen(char *string);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void cant_read(char *filename);
void cant_write(char *filename);
void cant_close(int fd);
#endif
