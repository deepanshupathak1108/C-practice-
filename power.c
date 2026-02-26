#include<stdio.h>
int main(){
    int num, power, result = 1;
    int i;
    printf("Enter the base number: ");
    scanf("%d", &num);

    printf("Enter the power: ");
    scanf("%d", &power);

    for(int i = 1; i <= power; i++){
        result = result * num;
    }

    printf("%d to the power of %d is %d", num, power, result);

    return 0;
}








