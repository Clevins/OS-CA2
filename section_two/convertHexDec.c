#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char str[200];
	fgets(str, 200, stdin);


	char * pch;
	pch = strtok (str," ");
	while (pch != NULL)
	{
		int num = (int) strtol(pch, NULL, 16);
		printf("%d\n",num);
	  pch = strtok (NULL, " ");
	}

	return 0;

}
