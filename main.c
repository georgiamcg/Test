language = "c"
run = "clang-7 -pthread -lm -o main main.c; ./main"
#include <stdio.h>

int main(void) {

// variables
int a = 10, b = 15, c;

// calculation
c = a + b;
printf("the value of c is %d\n", c);

return 0;
}