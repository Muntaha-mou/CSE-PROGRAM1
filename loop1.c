#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    printf("Multiplication table:\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}
