#include <stdio.h>


int main(){
    

    int number, count = 0, result = 0, mul = 0, cnt, rem;
    printf("Digite um número: ");
    scanf("%d", &number);

    int q = number;
    while(q != 0)
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;        
    }
    if (result == number)
    {
        printf("%d é um número de Armstrong", number);
    } else {
        printf("%d não é um número de Armstrong", number);
    }    
    return 0;
}
