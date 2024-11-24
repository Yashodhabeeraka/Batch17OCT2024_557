/*
Desp: Type casting and Conversions Assignment

1. Refer the code snippet below perform the operations marked 
in TBD section, display the results using appropriate format 
specifier, display results.

#include <stdbool.h>
int main()
{
int i = 123;
short s = 98;
bool b = true;
char c = 'Y';
float d = 235.789;
//TBD – perform operations below and display result 
using appropriate format specifier
b+c
s * i
c * d
c = c+b
d = d+c
b = -d
return 0;
}
Author: Yashodha_Beeraka_557
Date of creation or Date of modification:28th-oct-2024
Version: 0.1v
*/
#include<stdbool.h>
#include<stdio.h>

int main()
{
	int i=987;
	short s=12;
	bool b=true;
	char c='Y';
	float d=27.98;

	printf("\n bool(b)+char(c)=%c",b+c);
	printf("\n short(s)*int(i)=%d",s*i);
	printf("\n char(c)*float(d)=%f",c*d);
	printf("\n char(c)= char(c)+ bool(b)=%c",c+b);
	printf("\n float(d) = float(d)+char(c)=%.2f",d+c);
	printf("\n bool(b)= - float(d) =%.2f",b-d);

	printf("\n\n");

	return 0;
}


	
