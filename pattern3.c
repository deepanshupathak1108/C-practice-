#include<stdio.h>
int main(){
int n;
printf("enter a number ");
scanf("%d",&n);

for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

        if(i>=j)
            printf("");
        else
            printf(" %d",i);
    }
    printf("\n");

}
    return 0;






}
