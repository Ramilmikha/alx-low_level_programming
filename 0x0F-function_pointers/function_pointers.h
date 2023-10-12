#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
* struct op - Struct op
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int (*get_op_func(char *s))(int, int);
#endif /* FUNCTION_POINTERS_H */
unsigned char *main_opcodes(int num_bytes);
