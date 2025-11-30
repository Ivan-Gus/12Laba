#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE

int main() {
	setlocale(LC_CTYPE, "RUS");
	unsigned char *p = 0;
	unsigned char array[2];
	unsigned char* p1 = &array[0];
	unsigned char* p2 = &array[1];
	int rez = p2 - p1;
	printf("Размер unsigned char: %d байт\n", rez);

	return 0;
}