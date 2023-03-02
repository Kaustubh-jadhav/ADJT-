#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,6,8,9},i,j,temp;
    for(i=0,j=6;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nswapped array is :");
    for(i = 0; i <= 6; i++)
    {
        printf("\t%d",a[i]);
    }
    
    return 0;
}