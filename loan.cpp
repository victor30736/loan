#include <stdio.h>
int main()
{
int age;
float income;

printf("enter your age:\t");
scanf("%d",& age);

printf("enter your income:\t");
scanf("%f",&income);

if(age>=21 &&income>=21000){
printf("congratulation you qualify for aloan");
}
else if(age<21&& income<2121000){
printf("unfortunately we are unable to offer loan right now");
}
}