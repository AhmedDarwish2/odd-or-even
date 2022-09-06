#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nm;
    printf("Enter your number ");
    scanf("%d", &nm);
    float n = 2;
    float t = nm / n;
    int d = nm / n;




    if (t == d ){
         printf("The number is odd  = 0\n ");
         printf("The number is even = 1\n ");
    }else{
         printf("The number is odd  = 1\n ");
         printf("The number is even = 0\n ");
    }
    return 0;
}
