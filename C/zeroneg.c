#include<stdio.h>
int main(){
    int i,a[10],neg=0,z=0;
    //scanning element in array 
    printf("Enter numbers in array :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    //checking 
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]<0)
        {
            neg++;
        }
    }
    //printing 
    printf("\n Given array has %d zeros and %d negative numbers ",z,neg);
    return 0;
}