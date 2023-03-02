#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n Enter 9 element in first array :");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter 9 numbers in second array");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nb[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Addition of first and second matrices:");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\nc[i][j]=",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}