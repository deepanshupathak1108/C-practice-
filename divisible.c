#include<stdio.h>
int main()
{
int num1,num2;
printf("enter any two positive integer");
scanf("%d %d",&num1,&num2);


if (num1 % num2 == 0){
printf("%d divisible by %d",num1 ,num2);
}
else if
(num2 % num1 == 0){
printf("%d is divisible by %d", num2 ,num1);
}
else{
printf("%d %d  are not divisible each other",num1,num2);
}
return 0;
}
