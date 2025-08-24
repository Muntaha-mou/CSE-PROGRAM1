#include<stdio.h>
int main ()
{
    int x;
    long f=1;
    printf("Enter value: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
        f*=i;
    printf("Factorial:%ld\n",f);
    return 0;
}
