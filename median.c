include<stdio.h>
int main()
{
  int i,n,temp,median;
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
     if(n%2==0)
     {
      median=(n/2)+(n+1)/2;
     }
     else
     {
      median=(n+1)/2;
     }
     printf("%d",arr[median]);
     
   }
  return 0;
}
