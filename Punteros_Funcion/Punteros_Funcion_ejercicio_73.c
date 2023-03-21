#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define TAM 5

/*

int menu();
void cargarTabla(int* tabla, int length);
void goToXY(int x, int y);
void ordenarTabla(int* tabla, int length);
void mostrarTabla(int* tabla,int length);

int main() {
	setlocale(LC_ALL, "");

	int tabla[TAM];
	void (*funciones[])(int* t,int n) = {cargarTabla,ordenarTabla,mostrarTabla};
	int op = menu();
	goToXY(18,6);
	while (op != 4) {
		(*funciones[op - 1])(tabla, TAM);
		op = menu();
	}

	return 0;
}


int menu() {
	int op;
	do {
		printf("\n1. Cargar Tabla.\n2. Clasificar tabla.\n3. Listar tabla.\n4. Salir.\nIntroduce una opción: ");

		scanf("%d", &op);
	}while(op<1 || op > 4);
	return op;
}


void cargarTabla(int* tabla, int length) {
	for (int i = 0; i < length; i++)
	{
		printf("\ntabla[%d]: ", i);
		scanf("%d", &tabla[i]);
	}
}

void goToXY(int x, int y) {
	COORD pos;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(h, pos);

}

void ordenarTabla(int* tabla, int length) {
	int aux;
	for (int i = 0; i < length-1; i++)
	{
		for (int j = length-1; i < j; j--)
		{
			if (tabla[j-1] > tabla[j]) {
				aux = tabla[j-1];
				tabla[j-1] = tabla[j];
				tabla[j] = aux;
			}
		}
	}
}

void mostrarTabla(int* tabla,int length) {
	printf("\n%8s %9s\n", "POSICIÓN", "CONTENIDO");
	for (int i = 0; i < length; i++)
	{
		printf("\n%8d %9d",i ,tabla[i]);
	}
	printf("\n");
}
*/