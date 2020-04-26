#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	printf("gen report!\n");
	char str[2000];
	fgets(str, 2000, stdin);
	
	char * pch;
	pch = strtok (str, " ");
	while(pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ");
	}
	return 0;
}
