#include <stdio.h>
#include<conio.h>
int main() 
{
	char a[100];
	int n,i,num,count=0;
  clrscr();
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	  if(a[i]=='0'||a[i]=='1')
	  {   
	    count++;
	  }
	  else
	  {
	    printf("no..");
	    break;
	  }
	}
	if(n==count)
	{
	 printf("yes");
	}
	return 0;
}
