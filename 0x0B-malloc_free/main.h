#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
<<<<<<< HEAD
=======
char **strtow(char *str);
>>>>>>> 7771c2765d824e373414f78765b2db4183c48fd6

#endif
