#include<stdio.h>
int main(){
    float l, b, area,peri;
    printf("Enter leangth and breath");
    scanf("%f %f",&l,&b);
    area = l * b;
    peri = 2 * (l + b);
    printf("area %f\n perimeter%f\n",area,peri);

}