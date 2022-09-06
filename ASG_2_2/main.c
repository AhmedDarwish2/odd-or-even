#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nm;

    int n1,n2,n3,n4,n5;
    printf("Enter your number ");
    scanf("%d", &nm);

    n1 = nm % 10;
    n2 = nm / 10;
    n3 = n2 % 10;
    n4 = n2 / 10;

    n1 = pow(n1,3);
    n3 = pow(n3,3);// الاس
    n4 = pow(n4,3);

    n5 = n1+n3+n4;


   // printf(" \n %d ",n1);
 //   printf(" \n %d ",n3);
   // printf(" \n %d ",n4);


    if (nm == n5 ){
      printf("is an Armstrong Number \n ");
    }else {
    printf("not Armstrong Number \n ");
    }




    return 0;
}
