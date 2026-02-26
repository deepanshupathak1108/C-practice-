#include <stdio.h>
int main(){
   float radius;
    float h;
    float celsius; 
    float p ; 
    int r , t ;
    float si ;
   printf("enter the radius of the circle :");
    scanf("%f",&radius);
    printf("enter the height of the cylinder :");
    scanf("%f",&h);
    printf("enter the temperature in celsius :");
    scanf("%f",&celsius); 
    printf("enter the principal amount :");
    scanf("%f",&p);
    printf("enter the rate of interest :");
    scanf("%d",&r);
    printf("enter the time in years :");
    scanf("%d",&t);
    float area = 3.14 * radius * radius;
    printf("the area of the circle is: % f \n", area);
    printf("the volume of the cylinder with radius  %f and height %f is %f\n ", radius, h ,3.14 * radius *radius*h);
    printf("the temperature in fahrenheit is: %f\n",celsius *9/5 +32); 
    printf("the simple interest  is %f ", (p*r*t)/100.0);
    return 0;
}