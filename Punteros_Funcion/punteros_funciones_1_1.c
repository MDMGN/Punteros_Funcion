#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

#define MAX_LENGTH 256

/*
void funcion(char* cadena, char caracter, int* veces, int* primera, int* ultima);

int main() {
	setlocale(LC_ALL, "");
	int veces=0, primera, ultima;
	char cadena[MAX_LENGTH], caracter;

	printf("\nPalabra: ");
	gets(cadena);
	printf("\nCarácter: ");
	caracter=_getche();
	funcion(cadena, caracter, &veces, &primera, &ultima);
	return 0;
}
void funcion(char* cadena, char caracter, int* veces, int* primera, int* ultima) {
	int i, count=0, first, last;
	first = last = -1;
	for (i = 0; cadena[i] != '\0'; i++) {
		if (cadena[i] == caracter) {
			count++;
			if (first == -1) {
				first = i;
			}
			last = i;
		}
	}
	*veces = count;
	*primera = first;
	*ultima = last;
}

*/