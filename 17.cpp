#include <stdio.h>
int main(){
    float l, area, peri;
    printf("Entyer side length");
    scanf("%f",&l);
    area = l * l;
    peri = 4 * l;
    printf("area%f\nperimeter%f",area,peri);
    
}