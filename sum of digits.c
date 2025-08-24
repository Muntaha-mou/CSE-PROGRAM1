#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter value: ");
    scanf("%d",&x);
    while(x!=0)
    {

        i=x%10;
        sum+=i;
        x=x/10;
    }
    printf("sum=%d",sum);
    return 0;

}
