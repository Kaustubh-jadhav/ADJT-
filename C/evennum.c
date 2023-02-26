// How many even numbers in array 
#include<stdio.h>
int main()
{
    //Enter numbers in array
    int i,a[10],evn=0,odd=0;
    printf("Enter numbers in array :");
    for ( i = 0; i < 10; i++)
    scanf("%d",&a[i]);

    //Check the number is even or not
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            evn++;
        }
        else{
            odd++;
        }
    }

    //Printing output 
    printf("\n Given array have \n %d even \n %d odd   ",evn,odd);
    return 0;
}