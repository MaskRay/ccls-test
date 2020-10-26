#include <stdio.h>
static int sum(int a, int b) { return a + b; }
#define MYSUM(a, b) (sum(a, b))
int main() {
char a[2], b[2];
printf("sum = %d", MYSUM(not_a_defined_variable, some_text)); // no warnings in ccls
printf("sum = %d", MYSUM(a, b)); // warning provided by ccls(incompatible pointer to integer conversion passing 'char [2]' to parameter of type )
}
