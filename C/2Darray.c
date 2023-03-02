//Basic 2 D array 
#include<stdio.h>
int main(){
    int a[3][3],j,i;
    printf("\n Enter 9 element :");
    for(i=0;i<3;i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n Array element are \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}