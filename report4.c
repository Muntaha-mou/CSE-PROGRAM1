#include<stdio.h>
int main()
{

float cm,meters,km;
printf("Enter length in centimeters: ");
scanf("%f",&cm);
meters=cm/100;
km=cm/100000;
printf("Meters:%.2f\n",meters);
printf("Kilometers:%.5f\n",km);
return 0;

}

