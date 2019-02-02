#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int validate(char c[])
{
	int n=0,f,i=0;
       while(c[i]!='\0')
	{
		if(isdigit(c[i]))
		n=n*10+(c[i])-48;
		else
		 if(c[i]!=10)
			f=1;
		 i++;
	}
	if(f==1)
 	  return 0;
 	return n;
}

