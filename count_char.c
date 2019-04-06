#include<stdio.h>
#include<string.h>
int main()
{
  char input[50],character=0,i;
  gets(input);
  for(i=0;input[i] !='\0' ;i++)
  {
  	if(input[i] == ' ')
  	{
  		continue;
  	}
  	else
  	{
  	 character++;
  	}
   

  }
   printf("%d",character);
   return 0;
 }
