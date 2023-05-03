#ifndef HEADER_FILE
#define HEADER_FILE

void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif