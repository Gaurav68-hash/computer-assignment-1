#include<stdio.h>
int main(){
    int grams, kilograms;
    printf("Enter kilograms");
    scanf("%d",&kilograms);
    grams = kilograms * 1000;
    printf("%d grams = %d kilograms",grams, kilograms);
}