#include<stdio.h>
int main(){
    float c , f;
    printf("Enter celsius");
    scanf("%f",&c);
    f = ((9.0/5) * c) + 32;
    printf("fahrenheit %f\n",f);
}