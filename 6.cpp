#include<stdio.h>

int main(){

    int hours,miniutes;
    printf("Enter hours");
    scanf("%d",&hours);
    miniutes = hours*60;
    printf("%d hours = %d miniutes\n",hours,miniutes);
}