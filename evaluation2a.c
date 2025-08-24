#include<stdio.h>
int main()
{
    int x,y,sum=1;
    printf("Enter value: ");
    scanf("%d%d",&x,&y);
    for(int i=0;i<y;i++)
    {
     sum*=x;
    }

    printf("%d*%d=%d\n",x,y,sum);


    return 0;

}
