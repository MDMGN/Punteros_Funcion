#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define TAM 10

/*
typedef struct {
	char nombre[25];
	int horas;
	float precioHoras;
}Maquina;
void inicializarTabla(Maquina* tabla);
void alquilarMaquina(Maquina* tabla);
void consultarTabla(Maquina* tabla);
int buscarMaquina(Maquina* tabla, char* maquina, int* horas, float* precioHoras);
int menu();

int main() {
	setlocale(LC_ALL, "");
	Maquina maquinas[TAM];
	void (*funciones[])(Maquina *t)={inicializarTabla,alquilarMaquina,consultarTabla};
	int opc = menu();
	while (opc!=0)
	{
		(*funciones[opc - 1])(maquinas);
		opc = menu();
	}
	return 0;
}


void inicializarTabla(Maquina* tabla) {
	for (int i = 0; i < TAM; i++)
	{
		printf("\nNombre: ");
		gets(tabla[i].nombre);
		printf("\nPrecio de horas: ");
		scanf("%f", &tabla[i].precioHoras);
		rewind(stdin);
		tabla[i].horas = 0;
	}
}
void alquilarMaquina(Maquina* tabla) {
	int pos;
	do {
		printf("\nNúmero de la maquina a alquilar: ");
		scanf("%d", &pos);
		if (pos < 0 || pos >= TAM) {
			printf("\nEl número de maquina no existe.");
		}
	} while (pos < 0 || pos >= TAM);
	printf("\nNúmero de horas a alquilar: ");
	scanf("%d", &tabla[pos].horas);
}
void consultarTabla(Maquina* tabla) {
	char nombre[100];
	int horas;
	float precioHoras;
	system("cls");
	printf("\nNombre: ");
	gets(nombre);
	int resp = buscarMaquina(tabla,nombre,&horas,&precioHoras);
	if (resp) {
		printf("\nNombre: %s", nombre);
		printf("\nHoras: %d.", horas);
		printf("\nPrecio en horas: %.2f.", precioHoras);
		printf("\nTotal: %.2f", horas * precioHoras);
		_getch();
	}
	else {
		printf("\nNo se encontro la maquina...");
		_getch();
	}
}

int buscarMaquina(Maquina* tabla,char* maquina, int* horas,float* precioHoras) {
	for (int i = 0; i < TAM; i++) {
		if (!strcmp(tabla[i].nombre, maquina)) {
			*horas = tabla[i].horas;
			*precioHoras = tabla[i].precioHoras;
			return 1;
		}
	}
	return 0;
}

int menu() {
	int opc;
	system("cls");
	do {
		printf("\n0.Salir.\n1.Inicializar.\n2.Alquiler máquina.\n3.Consultar.");
		printf("\nIntroduzca una opcíón: ");
		scanf("%d", &opc);
		rewind(stdin);
	} while (opc < 0 || opc > 3);
	return opc;
}

*/