#include<stdio.h>
int main()
{
    int num1,num2,i,sum=0;
    printf("Enter value: ");
    scanf("%d %d",&num1,&num2);
    printf("Sum: ");
    for(i=num1;i<=num2;i++)
    {
        sum+=i;
        if(i<num2)
            printf("%d+",i);
        else
            printf("%d",i);
    }
    printf("=%d",sum);
    return 0;
}
