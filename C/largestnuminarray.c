#include<stdio.h>
int main(){
    int a[10],i,j,k,l=0;
    printf("\n Enter an array :");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for ( i = 0; i < 5; i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    printf("\n largest num : %d",l);
    return 0;
    
    
}