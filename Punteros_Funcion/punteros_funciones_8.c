#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define TAM 10

typedef struct {
	char nombre[25];
	float importe;
}VENTAS;

void cargarTabla(VENTAS* tabla);
void consultarVendedor(VENTAS* tabla);
void funcionConsultaVendedor(VENTAS* tabla, char* nombre, int* registros, float* total);
int menu();

int main() {
	setlocale(LC_ALL, "");
	VENTAS tabla[TAM];
	int opc;
	void (*function[])(VENTAS*) = { cargarTabla, consultarVendedor };

	do {
		opc = menu();
		(*function[opc - 1])(tabla);
	} while (opc != 3);

	return 0;
}

int menu() {
	int opc;
	do {
		printf("\n1. Cargar tabla.\n2. Consultar vendedor.\n3. Salir.\n");
		printf("Introducir opción: ");
		scanf("%d", &opc);
		rewind(stdin);
	} while (opc < 1 || opc > 3);

	return opc;
}

void cargarTabla(VENTAS* tabla) {
	for (int i = 0; i < TAM; i++) {
		printf("\nIntroducir nombre del vendedor %d: ", i + 1);
		gets(tabla[i].nombre);
		printf("\nIntroducir importe vendido por %s: ", tabla[i].nombre);
		scanf("%f", &tabla[i].importe);
		rewind(stdin);
	}
}

void consultarVendedor(VENTAS* tabla) {
	char nombre[25];
	int registros = 0;
	float total = 0;
	float media = 0;
	printf("Introducir nombre del vendedor: ");
	gets(nombre);

	funcionConsultaVendedor(tabla, nombre, &registros, &total);

	if (registros > 0) {
		media = total / registros;
		printf("El vendedor %s ha vendido %d productos por un total de %.2f euros.\n", nombre, registros, total);
		printf("La media por venta es de %.2f euros.\n", media);
	}
	else {
		printf("No se han encontrado ventas para el vendedor %s.\n", nombre);
	}
	printf("Introducir nombre del vendedor: ");
	gets(nombre);

	funcionConsultaVendedor(tabla, nombre, &registros, &total);

	if (registros > 0) {
		media = total / registros;
		printf("El vendedor %s ha vendido %d productos por un total de %.2f euros.\n", nombre, registros, total);
		printf("La media por venta es de %.2f euros.\n", media);
	}
	else {
		printf("No se han encontrado ventas para el vendedor %s.\n", nombre);
	}
}

void funcionConsultaVendedor(VENTAS* tabla, char* nombre, int* registros, float* total) {
	for (int i = 0; i < TAM; i++) {
		if (strcmp(tabla[i].nombre, nombre) == 0) {
			(*registros)++;
			(*total) += tabla[i].importe;
		}
	}
}