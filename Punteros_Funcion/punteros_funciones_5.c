#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define ALUMNOS 10
#define ASIGNATURAS 5

/*

typedef struct{
	char nombre[15];
	char apellido[15];
	float nota_media;
}Alumnos;

void calcular(int tablaNotas[][ASIGNATURAS], int i, float* nota);
void introduciralumnos(Alumnos* tablaAlumnos, int tablaNotas[][ASIGNATURAS]);
void mostrarNotas(Alumnos* tabla);
void introducirNotas(int TablaNotas[][ASIGNATURAS]);
int menu();

int main() {
	setlocale(LC_ALL, "");
	void (*function[])(Alumnos *t, int tablaNotas[][ASIGNATURAS]) = {introducirNotas,mostrarNotas,introduciralumnos,calcular,mostrarNotas};
	int opc = menu();
	Alumnos alumnos[ALUMNOS];
	int tablaNotas[ALUMNOS][ASIGNATURAS];
	while (opc != 0) {
		(*function[opc - 1])(alumnos,tablaNotas[ALUMNOS][ASIGNATURAS]);
		opc = menu();
	}
	return 0;
}

void calcular(int tablaNotas[][ASIGNATURAS], int i, float* nota) {

	int sum = 0;
	for (int j = 0; j < ASIGNATURAS; j++)
	{
			sum+=tablaNotas[i][j];
	}
	*nota = sum/(float)ASIGNATURAS;
}

void introducirNotas(int tablaNotas[][ASIGNATURAS]) {
	for (int i = 0; i < ALUMNOS; i++)
	{
		for (int j = 0; j < ASIGNATURAS; j++)
		{
			printf("\nAlumno[%d]", i);
			do {
				printf("\nAsignatura[%d] y su nota: ", j);
				scanf("%d", &tablaNotas[i][j]);
				rewind(stdin);
			} while (tablaNotas[i][j] < 0 || tablaNotas[i][j] > 10);
		}
	}
}
void introduciralumnos(Alumnos* tablaAlumnos, int tablaNotas[][ASIGNATURAS]) {
	float nota;
	for (int i = 0; i < ALUMNOS; i++)
	{
		printf("\nNombre: ");
		gets(tablaAlumnos[i].nombre);
		printf("\nApellido: ");
		gets(tablaAlumnos[i].apellido);
		calcular(tablaNotas[ALUMNOS][ASIGNATURAS], i, &nota);
		tablaAlumnos[i].nota_media = nota ;
	}
}

void mostrarNotas(Alumnos* tabla) {
	printf("\n%6s %8s %10s %12s\n", "NOMBRE", "APELLIDO", "Nota media", "Calificación");
	char nota[10];
	int count=0;
	for (int i = 0; i < ALUMNOS; i++){
		count = 0;
		if (tabla[i].nota_media >= 9) {
			strcpy(nota, "Sobresaliente");
		}else if(tabla[i].nota_media > 7 && tabla[i].nota_media < 9) {
			strcpy(nota, "Notable");
		}else {
			strcpy(nota, "Suspenso");
		}

		if (tabla[i].nota_media >= 5) {
			count++;
		}
		printf("\n%6s %8s %10.2f %12s", tabla[i].nombre, tabla[i].apellido, tabla[i].nota_media, nota);
	}
	printf("Total aprobados: %d", count);
}

int menu() {
	int opc;
	system("cls");
	do {
	printf("\n0.Salir.\n1.Introducir alumnos.\n2.Introducir notas.\n3.Calcular.\n4.Mostrar Notas.");
	printf("\nIntroduzca una opcíón: ");
	scanf("%d", &opc);
	rewind(stdin);
	} while (opc < 0 || opc > 4);
	return opc;
}

*/