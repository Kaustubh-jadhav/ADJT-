#include<stdio.h>
int main(){
    int i,j,k,sum;
    int a[]={1,2,3,4,6,8,9};
    for(i=0,j=6;i<j;i++,j--)
    {
        sum=a[i]+a[j];
        printf("\t%d",sum);
    }
    return 0;
}