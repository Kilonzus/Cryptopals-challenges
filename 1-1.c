#include <stdio.h>
#include <stdlib.h>


char* itoa(int num, char *str) {
	if (str == NULL) {
		return NULL;
	}
	sprintf(str, "%d", num);
	return str;
}

char* binRep(int val) {
	while (val != 0) {
		int binVal = val % 2;
		char *binChar = malloc(1);
		itoa(binVal, binChar);
		printf("%s\n", binChar);
		val /= 2;

	}
}
/*
char* hexToBin(char* arr) {
	const char alpha[] = "0123456789ABCDEF";

	return res;
}
*/

int main() {
	const char base64[64]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','/'};


	//printf("%c\n", base64[5]);
	binRep(15);
	return 0;
}