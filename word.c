#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if((n >= 1) && (n <= 10))
  {
    if(n == 1)
    {
      printf("One");
    }
     else if(n == 2)
    {
      printf("Two");
    }
     else if(n == 3)
    {
      printf("Three");
    }
     else if(n == 4)
    {
      printf("four");
    }
     else if(n == 5)
    {
      printf("Five");
    }
     else if(n == 6)
    {
      printf("six");
    }
     else if(n == 7)
    {
      printf("Seven");
    }
     else if(n == 8)
    {
      printf("Eight");
    }
     else if(n == 9)
    {
      printf("Nine");
    }
    else
    {
      printf("Ten");
    }
  }
  return 0;
}
