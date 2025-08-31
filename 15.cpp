#include<stdio.h>
int main(){
    float c,f;
    printf("Enter Fahrenheit");
    scanf("%f",&f);
    c = (5.0/9) * (f - 32);
    printf("Celsius %f\n",c);


}