/**
 * This is a program for main.h.
 */

#ifndef FILE_HOLBERTON
#define FILE_HOLBERTON

/**
 * This is the prototypes for main.h.
 */

int _putchar(char c);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

#endif
