#include <stdio.h>
/*int main() {
  int i, j, k = 9, t = 2;
  for (i = 0; i < 5; i++) {
    k = 9;
    t = 2;
    for (j = 0; j < i; j++) {
      printf("%d", k);
      k = k - t;
      t = t + 1;
    }
    printf("\n");
  }
  return 0;
}*/
/*
9
97
974
9740
*/
#define MAX 5
int main()
{
  int a[MAX],i,j,temp;
  printf("Enter 5 numbers :");
  for(i=0;i<MAX;i++)
    scanf("%d",&a[i]);
  for(i=0;i<MAX;i++)
  {
    for(j=i+1;j<MAX;j++)
    {
      if(a[i]<a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  printf("array in dscending order :");
  for(i=0;i<MAX;i++)
     printf("%3d",a[i]);
  return 0;
}