#include<stdio.h>
int main()

{
    int i;

    int a[5];
    printf("Enter 5 values");
    for( i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("\noriginal array:");
    for( i=0;i<5;i++)
        printf("%d",a[1]);
         for( i=0;i<4;i++)
            for(int j=i+1;j<5;j++)
            if(a[i] > a[j])
         {
             int t = a[i];
             a[i] = a[j];
             a[j] =t;
         }

        printf("\nsorted array:");
    for( i=0;i<5;i++)
    printf("%d",a[1]);



        printf("%d %d %d\n",a[3],a[6],a[8]);
    return 0;
}
