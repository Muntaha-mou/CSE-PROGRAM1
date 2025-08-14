#include<stdio.h>
int main()
{
    double a,b,result;
    printf("Enter two value: ");
    scanf("%lf%lf",&a,&b);
    char op;
    getchar();
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c",&op);
    switch(op)
    {
    case('+'):
    result=a+b;
    printf("%.2lf+%.2lf=%.2lf\n",a,b,result);
    case('-'):
    result=a-b;
    printf("%.2lf-%.2lf=%.2lf\n",a,b,result);
    case('*'):
    result=a*b;
    printf("%.2lf*%.2lf=%.2lf\n",a,b,result);
    case('/'):
    if(b!=0)
    {
    result=a/b;
    printf("%.2lf/%.2lf=%.2lf\n",a,b,result);
    } else
    {
        printf("Error:Division by zero is not allowed\n");
    }
    break;
    default:
    printf("Error:Invalid operator.\n");
    }
    return 0;
}

