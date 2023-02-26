#include<stdio.h>
int main()
{
    int a[5],i,x,sum;
    for( i=0;i<5;i++)
    {
        printf("Enter element :");
        scanf("%d",&a[i]);
    }
    //reverse indexing
    for(i=4;i>=0;i--)
    {
      printf("%d  ",a[i]);
    }
    printf("\n");
    //prime number
    printf("Even numbers : ");
    for(i=0;i<5;i++)
    {
      if(a[i]%2==0)
      printf("%d  ",a[i]);
    }
    printf("\nOdd numbers : ");
    for(i=0;i<5;i++)
    {
      if(a[i]%2!=0)
      printf("%d  ",a[i]);
    }
    for(i=0;i<5;i++)
    {
      sum = sum + a[i];
    }
      printf("\nsum of all number is %d  ",sum);
    return 0;
}