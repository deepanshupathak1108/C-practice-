#include<stdio.h>
int main(){
    int x = 10;
    int * p = &x;
    printf("the value of x is %d\n", *p);
    printf("the address of the variable x is %p\n", &x);
    printf("the address of the pointer p is %p\n",&p);
    printf("the value of the pointer p is %p\n",p);
    printf("all done ");
}
