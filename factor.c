#include<stdio.h>
int main(){
    int a ;
     printf("Enter a number A:\n");
     scanf("%d",&a);
    printf("factor of given number %d are:", a);
     for(int i=1;i<=a;i++){

     if (a % i == 0){
       printf("%d",  i);
     }
         
}
printf("\n");
return 0;
}