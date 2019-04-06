#include<stdio.h>
int main()
{
  int i,n,temp;
  scanf("%d",&n);
  int arr[n];
  if(n <= 100000)
  {
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
      if(arr[i] > arr[i+1])
      {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
     }
     for(i=0;i<n;i++)
     {
      printf("%d",arr[i]);
     }
   }
  return 0;
}
