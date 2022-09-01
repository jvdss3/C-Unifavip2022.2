#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void)
{
    int i = 1, *ptr_i = &i;

    float f = 3.14, *ptr_f = &f;

    char c = 'a', *ptr_c = &c;

    int x = 5, *px = &x;

    printf("Int %d\n", i);
    printf("Float %f\n", f);
    printf("Char %c\n", c);

    *ptr_i = 2;
    *ptr_f = 2.15;
    *ptr_c = 'b';

    printf("Int %d\n", *ptr_i);
    printf("Float %f\n", *ptr_f);
    printf("Char %c\n", *ptr_c);

    printf("%d %ld\n",x,(long)px);
    printf("%d %ld\n", x+1, (long)(px+1));   
}