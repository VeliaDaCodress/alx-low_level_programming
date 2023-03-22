#ifndef "PTF_H"
#define "PTF_H"

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);

#endif
