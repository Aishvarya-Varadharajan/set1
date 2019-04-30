#include<stdio.h>
int main()
{
  int n,diff,temp;
  scanf("%d",&n);
  int arr[n],i,j;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
      if(arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
   }
  }
  diff=arr[n-1]-arr[0];
  printf("%d",diff);
  return 0;
}
