#include<stdio.h>
#include<string.h>
 main()
{	char str[100],s[100],c;
	int i=0,j=0;
	gets(str);
	c=getchar();
	while(str[i]!='\0')
	{	if(str[i]!=c)
		{	s[j]=str[i];
			j++; 
		}
			i++;
	}
	s[j]='\0';
	puts(s);	 
}
