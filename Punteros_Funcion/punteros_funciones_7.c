#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define TAM 1

/*
typedef struct{
	char nombre[25];
	int nAccidentes;
	int bonus;
}CLIENTE;
void inicializar(CLIENTE* t);
void consultar(CLIENTE* t);
void darParte(CLIENTE* t);

int main() {
	setlocale(LC_ALL, "");
	CLIENTE clientes[TAM];
	void (*function[])(CLIENTE * t) = {inicializar,darParte,consultar};
	int opc = menu();

	while (opc != 0) {
		(*function[opc - 1])(clientes);
		opc = menu();
	}

	return 0;
}

int menu() {
	int opc;
	do {
		printf("\n0.Salir.\n1.Inicializar.\n2.Dar parte.\n3.Consultar.\n");
		printf("\nIntroduzca una opción: ");
		scanf("%d", &opc);
		rewind(stdin);
	} while (opc < 0 || opc > 3);
	return opc;
}

void inicializar(CLIENTE* t) {
	for (int i = 0; i < TAM; i++)
	{
		printf("\nNombre: ");
		gets(t[i].nombre);
		t[i].nAccidentes = 0;
		t[i].bonus = 10;
	}
}

void darParte(CLIENTE* t) {
	int grv,pos;
	printf("\nPosición: ");
	scanf("%d", &pos);
	rewind(stdin);
	t[pos].nAccidentes += 1;
	do {
		printf("\nGravedad (1-10): ");
		scanf("%d", &grv);
	} while (grv < 1 || grv > 10);
	t[pos].bonus = (t[pos].bonus > grv) ? t[pos].bonus - grv : 0;

}

int buscarCliente(CLIENTE* t, char* nombre, int *nAccidentes,int* bonus) {
	int econtrado = 0;
	for (int i = 0; i < TAM && !econtrado; i++)
	{
		if (!strcmp(t[i].nombre, nombre)) {
			*nAccidentes = t[i].nAccidentes;
			*bonus = t[i].bonus;
			econtrado = 1;
		}
	}
	return econtrado;
}

void consultar(CLIENTE* t) {
	int nAccidentes, bonus;
	char nombre[25];
	printf("\nNombre: ");
	gets(nombre);
	if (buscarCliente(t, nombre, &nAccidentes, &bonus)) {
		printf("\nNombre: %s.\nnAccidentes: %d.\nBonus: %d.\n",nombre,nAccidentes,bonus);
	}
	else {
		printf("\nCliente no encontrado...");
	}
}

*/