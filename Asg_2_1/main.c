#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char op;
    int x;
    int c;

     printf("First nu\n");
     scanf("%d",&i);

     printf("Oprotor\n");
     scanf(" %c",&op); //يجب وضع مسافه قبل علا العمليه

     printf("Secand nu\n");
     scanf("%d",&x);

        switch (op){
        case '+': c=i+x;
         printf(" %d = %d + %d\n",c ,x ,i);
        break;

        case '-': c=i-x;
         printf(" %d = %d - %d\n",c ,x ,i);
        break;

        case '*': c=i*x;
         printf(" %d = %d * %d\n",c ,x ,i);
        break;

        case '/': c=i/x;
         printf(" %d = %d / %d\n",c ,x ,i);

        break;
        }



    return 0;
}
