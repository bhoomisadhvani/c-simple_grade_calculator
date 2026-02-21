#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf(" \n1 addition");
    printf("\n2 subtraction");
    printf("\n3 multiplication");
    printf("\n4 division");
    printf("\n5 modulo");

    printf("\nchoose a operator:\n");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
      c=a+b;
      printf("addition is %d",c);
        break;

     case 2:
      c=a-b;
      printf("subtraction is %d",c);
        break;

     case 3:
      c=a*b;
      printf("multiplication is %d",c);
        break;  

     case 4:
      c=a/b;
      printf("division is %d",c);
        break;

     case 5:
      c=a%b;
      printf("module is %d",c);
        break; 

     default:
     printf("invalid number");
        break;
    }

    return 0;



  
}