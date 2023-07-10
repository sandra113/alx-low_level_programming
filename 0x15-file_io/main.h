#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void print_err(const char *message);

void err_exit(int code, const char *message);

int copy_file(const char *file_from, const char *file_to);

#endif
