#include<stdio.h>
int main(){
    int a = 10 ;
    int * b =&a;
    int *ptr = NULL;
    printf("the value of a is %d\n",*b);
    printf("this points to the address of a which is stored in b %p\n",b);
    printf("this points to the address of b %p\n",&b);
    printf("this points to the address of a  %p\n",&a);
    printf("the value of null pointer is %p\n",ptr);

}