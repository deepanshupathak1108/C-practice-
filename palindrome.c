#include<stdio.h>
int main(){
int num, reverse= 0, original, remainder;
printf("Enter an integer: ");
if (scanf("%d", &num) != 1) return 1;
original = num;
while(num !=0){
    remainder=num %10;
    reverse = (reverse * 10)+ remainder;
    num = num/10;
}

if(original == reverse){
    printf("%d is a palindrome\n",original);
}
else{
    printf("%d is not a palindrome\n",original);
}
return 0;
}