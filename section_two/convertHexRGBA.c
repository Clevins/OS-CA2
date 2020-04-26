#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char str[200];
	fgets(str, 200, stdin);

	char * pch;
	pch = strtok (str," ");

	while (pch != NULL)
	{

		int size = strlen(pch);

		char red[3];
		strncpy(red, pch, 2);
		red[2] = '\0';
		int red_dec = (int) strtol(red, NULL, 16);

		char green[3];
		strncpy(green, pch+2, 2);
		green[2] = '\0';
		int green_dec = (int) strtol(green, NULL, 16);

		char blue[3];
		strncpy(blue, pch+4, 2);
		blue[2] = '\0';
		int blue_dec = (int) strtol(blue, NULL, 16);

		char alpha[3];
		int alpha_rgba;
		float alpha_dec;

		if(size == 8) {
			strncpy(alpha, pch+6, 2);
			alpha[2] = '\0';
			alpha_rgba = (int) strtol(alpha, NULL, 16);
			alpha_dec = ( (float) alpha_rgba / 2.55 )/100;
		} else {
			alpha_dec = 1.0;
		}

		printf("rgba( %d , %d , %d , %.2f )\n", red_dec, green_dec, blue_dec, alpha_dec);
		pch = strtok (NULL, " ");
	}

	return 0;
}
