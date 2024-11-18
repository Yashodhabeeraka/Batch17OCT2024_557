#include <stdio.h>

int main()
{
	int i;
	float f;
	char ch;
	char str1[20];
	double d;

	printf("\nEnter the proper value\n");
	printf("\nEnter the interger value: \n");	
	scanf("%3d", &i);

	printf("\nEnter Float value: ");
	scanf("%f", &f);

	printf("\nEnter Double value: ");
	scanf("%lf", &d);
	
	printf("\nEnter String value: ");
	scanf("%s", &str1);
	
	printf("\nEnter single character value: ");
	scanf("%c", &ch);
	
	printf("\nInterger value: %05d\n", i);
	printf("\nFloat value: %f\n", f);
	printf("\nDouble value: %lf\n", d);
	printf("\nString value: %s\n", str1);
	printf("\nString Character value: %c\n", ch);

	return 0;
}

