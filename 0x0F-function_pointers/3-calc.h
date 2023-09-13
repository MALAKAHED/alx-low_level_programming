#ifndef CALC_H
#define CALC_H
/**
* struct op - A struct op.
* @op: The operator.
* @f: The associated function.
*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;
int el_add(int a, int b);
int el_sub(int a, int b);
int el_mul(int a, int b);
int el_div(int a, int b);
int el_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
