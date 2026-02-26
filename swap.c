//swapping without using third variable
#include<stdio.h>
int main(){
int a,b,temp;
printf("enter the number A:");
scanf("%d",&a);
printf("enter the number B:");
scanf("%d",&b);
a=a+b;
b=a+b;
a=b-a;
printf("%d",a);
return 0;



}
