#include<stdio.h>
int main()
{
  char str[20];
  scanf("%s",&str);\
  if(isalnum(str))
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
