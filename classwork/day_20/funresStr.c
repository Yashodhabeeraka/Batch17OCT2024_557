#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int reverseString()
char *reverseString(char *s)
{
	int i;
	int l;
	int n;
	l=strlen(s);
	char temp;
	for(i=0; i<n/2; i++)
	{
		temp=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=temp;
	}
	return 0;
}
char *reverseStringPosition(char *s, int a, int b)
{
	int i;
	char temp;
	a--;
	b--;
	for(i=a; i<=b; i++)
	{
		temp=s[i];
		s[i]=s[b-i];
		s[b-i]=temp;
	}
	return s;
}
char *changeString(char *s, int a, int b, int value)
{
	int i;
	a--;
	b--;
	char c = (char)value;
	for(i=a; i<=b; i++)
	{
		s[i]=c;
	}
	return s;
}
char *swapString(char *s, int a, int b)
{
	char t;
	a--;
	b--;
	t=s[a];
	s[a]=s[b];
	s[b]=t;

	return s;
}

int main()
{
	char s[]="abcde";
	reverseString(s);
	printf("\n%s\n",s);
	changeString(s,1,2,98 );
	printf("\n%s\n",s);
}
