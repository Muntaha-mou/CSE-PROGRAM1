#include<stdio.h>
int main()
{
    float P,T,R,SI;
    printf("Enter principle amount: ");
    scanf("%f",&P);
    printf("Enter time(in years): ");
    scanf("%f",&T);
    printf("Enter rate of interest: ");
    scanf("%f",&R);
    SI=(P*T*R)/100;
    printf("Simple interest=%.3f",SI);
    return 0;
}
