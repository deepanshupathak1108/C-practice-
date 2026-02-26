#include<stdio.h>
int main(){
    int a;
    printf("Enter number to check whether even or odd:\n");
    scanf("%d",&a);
    if(a&1){
        printf("the number is odd");    
    }
    else{
    printf("the number is even");
    }
    return 0;
}