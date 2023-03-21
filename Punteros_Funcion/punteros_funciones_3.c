#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define TAM 10

/*
typedef struct {
	char nombre[10];
	int horas;
}EMPLEADO;

void cargar(EMPLEADO* tabla);
void calcular(EMPLEADO* tabla, int* total, int* max, int* min);
void mostrarTabla(EMPLEADO* tabla, int total, int max, int min);

int main() {
	setlocale(LC_ALL, "");
	
	EMPLEADO empleados[TAM];
	int total, max, min;
	cargar(empleados);
	calcular(empleados, &total, &max, &min);
	mostrarTabla(empleados, total, max, min);
	_getch();
	return 0;
}

void cargar(EMPLEADO* tabla) {
	for (int i = 0; i < TAM; i++)
	{
		printf("\nNombre: ");
		gets(tabla[i].nombre);
		printf("\nHoras: ");
		scanf("%d", &tabla[i].horas);
		rewind(stdin);
	}
}

void calcular(EMPLEADO* tabla, int* total, int* max, int* min) {

	*total=*min = *max = 0;
	for (int i = 0; i < TAM; i++)
	{
		if (tabla[*min].horas > tabla[i].horas) {
			*min = i;
		}else if (tabla[*max].horas < tabla[i].horas) {
			*max = i;
		}
		*total += tabla[i].horas;
	}
}

void mostrarTabla(EMPLEADO* tabla, int total,int max,int min) {
	system("cls");
	printf("\n% 6s % 6s % 5s\n","Indice","Nombre","Horas");
	for (int i = 0; i < TAM; i++)
	{
		printf("\n%6d %6s %5d", i, tabla[i].nombre, tabla[i].horas);

	}
	printf("\n");
	printf("\nTotal horas: %d h", total);
	printf("\nEmpleado que más ha trabajado: %d", max);
	printf("\nEmpleado que menos ha trabajado: %d", min);
}

*/