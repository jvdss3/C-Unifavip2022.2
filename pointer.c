//In this course we'll be learning how to use pointers in C

#include <stdio.h>
#include <string.h>

int main()
{
    //first we create the variables and give them values
    int i = 1;
    float f = 3.44;
    char c = 'a';
    //then we create pointers to receive the values of the variables
    int *ptr_i = &i;
    float *ptr_f = &f;
    char *ptr_c = &c;
    //now we print the variables to see their values
    printf ("Int %d\n",i);
    printf ("Float %f\n",f);
    printf ("Char %c\n -------------\n",c);
    //here we change only the values of the pointers, now they don't need the values of the variables
    *ptr_i = 2;
    *ptr_f = 2.15;
    *ptr_c = 'b';
    //now we print the pointers with the new values
    printf ("Int %d\n",*ptr_i);
    printf ("Float %f\n",*ptr_f);
    printf ("Char %c\n\n\n",*ptr_c);
    
    //here we create a new variable and pointer
    int x = 5, *px = &x;
    //here we print the variable and it's alocated space in the memory
    printf("%d %ld\n",x, (long) px);
    printf("%d %ld\n\n\n",x+1, (long) (px+1));
    
    //here we create a vector and some pointers
    double v[3]={1.1,2.2,3.3}, *pv=v,*pv2;
    printf("The pointed value by *pv is %f\n",*pv);
    //here we increment the value of pv2 by 2 positions and print the third element
    pv2=pv+2;
    printf("The pointed value by *pv2 is %f\n",*pv2);
    //here we decrement the value of pv2 by 1 position and print the second element
    pv2--;
    printf("The pointed value by *pv2 is %f\n\n\n",*pv2);
    
    //here we create a string and a pointer to point to it's first value
    //Keep in mind that strings are vectors of characters
    char s[10], *ptr = s;
    int result;
    //here we add the value of the string, Example
    strcpy(s, "Example");
    //here we create a while function to run through the string until it ends in \0
    while(*ptr != '\0'){
        ptr++;
    }
    //here we convert the position into an int and print the number 7, the last position in the string
    result = (int) (ptr - s);
    printf("Result: %i\n\n\n",result);
    
    //consider we have the following string
    char z[9] = "OlaOleOli", *point = z;
    //to print the character 'a' we can use the following functions, remember that vectors start with position [0]
    //here we point exactly to the position [2] of the string or pointer
    printf("%c\n",z[2]);
    printf("%c\n",point[2]);
    //here we add 2 positions to the string or pointer
    printf("%c\n",*(point+2));
    printf("%c\n\n\n",*(z+2));
    
    //we can also create a pointer of a pointer
    int n = 5;
    int *ptr_n;
    ptr_n = &n;
    int **ptr_ptr_n;
    ptr_ptr_n = &ptr_n;
    
    return 0;
}