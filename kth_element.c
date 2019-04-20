#include<stdio.h>
int main()
{
  int N,K,i;
  scanf("%d %d",&N,&K);
  int arr[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<N;i++)
  {
    printf("%d",arr[K-1]);
  }
  
  return 0;
}
