#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	printf("gen report!\n");
	char str[2000];
	fgets(str, 2000, stdin);
	int count = 0;
	int index = -1;
	char * pch;
	pch = strtok (str, " ");
	while(pch != NULL)
	{
		if(strcmp(pch, "200")==0){

//			printf("%d,%s\n", count, pch);
			pch = strtok(NULL, " ");
			index = count;
		}

		if(count == index){
			printf("proc time:%s\n", pch);
		}
		pch = strtok(NULL, " ");
		count++;
	}
	return 0;
}



