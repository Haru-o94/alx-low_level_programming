#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *str1, char *str2);
void reverse_array(int *arr, int n);
char *string_toupper(char *ch);
char *cap_string(char *a);
char *leet(char *a);
char *rot13(char *a);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif