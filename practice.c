#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first integer a:");
    scanf("%d",&a);
    printf("Enter second integer b:");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    //Swap
    temp=a;
    a=b;
    b=temp;
     printf("After swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;

}
