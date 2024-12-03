#include "header.h"

int main()
{
	int msgid;
	msgid = msgget((key_t)12,IPC_CREAT|0644);
	printf("\n message queue created with %d id \n", msgid);
	printf("\n\n");
	return 0;
}

