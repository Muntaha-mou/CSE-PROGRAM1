#include<stdio.h>
int main()
{
    int x,i=1,sum=0;
    printf("Enter value: ");
    scanf("%d",&x);
    do
    {
        if(i%2)
            sum+=i;
        i++;

    }
    while(i<=x);
    printf("sum=%d\n",sum);
    return 0;

}
