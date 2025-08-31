#include<stdio.h>
int main(){

    float p, r, n, i;
    printf("Enter the principal, Rate, time");
    scanf("%f %f %f",&p, &r ,&n);
    i = (p * r * n )/100;
    printf("intrest %f\n",i);
}