<<<<<<< HEAD
#include<stdio.h>
int main(){
int year;
printf("enter the year:");
scanf("%d",&year);
if (year%4==0){
if ( year % 400 == 0 || year % 100 != 0)
    printf( "%d is a leap year",year );

else
    printf("%d is not a leap year",year);
}
else{
        printf("%d is not a leap year",year);
}

return 0;
}
=======
#include<stdio.h>
int main(){
int year;
printf("enter the year:");
scanf("%d",&year);
if (year%4==0){
if ( year % 400 == 0 || year % 100 != 0)
    printf( "%d is a leap year",year );

else
    printf("%d is not a leap year",year);
}
else{
        printf("%d is not a leap year",year);
}

return 0;
}
>>>>>>> a9d5c964e135e9e04b89ec9859559b4faff5e0a3
