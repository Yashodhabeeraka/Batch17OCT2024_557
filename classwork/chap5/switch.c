/* Switch case condition 
Switch(cond)
{
	case 1:
		---
		break;
	case 2:
		---
		break;
	default:
		---
		break:
}
*/
#include<stdio.h>

int main()
{
	char clrcode;

	clrcode = getc(stdin);

	//switch(getc(stdin))
	switch(clrcode)
	{
		default:
			printf("\n Enter the correct code\n");
			break;

		case 'O':
			printf("Orange");
			break;
		case 'B':
			printf("Black");
			break;
		case 'N':
			printf("Brown");
			break;
		/*default:
			printf("\nEnter the correct code\n");
			break;
		*/
	}

	printf("\n Program Ended\n");

	return 0;
}
