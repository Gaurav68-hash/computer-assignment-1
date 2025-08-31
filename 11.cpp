#include<stdio.h>
int main(){
    int grams, kilograms;
    printf("Enter grams");
    scanf("%d",&grams);
    kilograms = grams / 1000 ;
    printf("%d grams = %d kilograms\n",grams,kilograms);
}