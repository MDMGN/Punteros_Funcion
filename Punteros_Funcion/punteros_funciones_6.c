#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#define TAM 100

/*
typedef struct {
	char origen[20];
	char destino[20];
	int mes;
}VIAJE;

int menu();
void nuevoViaje(VIAJE* viajes);
void ConsultarMes(VIAJE* t);
int funcionConsultar(VIAJE t[], int len, int mes, char* primerorigen, int* cuantos);
int count = 0;
int main() {
	setlocale(LC_ALL, "");
	void (*function[])(VIAJE t[]) = {nuevoViaje,ConsultarMes};
	VIAJE viajes[TAM];
	int opc = menu();

	while (opc!=3) {
		(*function[opc - 1])(viajes);
		opc = menu();
	}
	return 0;
}


int menu() {
	int opc;
	do {
		printf("\n1.Nuevo viaje.\n2.Consultar mes.\n3.Salir.");
		printf("\nIntroducir opción: ");
		scanf("%d", &opc);
		rewind(stdin);
	} while (opc < 1 || opc > 3);
	return opc;
}

void nuevoViaje(VIAJE *viajes) {
		printf("\nOrigen: ");
		gets(viajes[count].origen);
		printf("\nDestino: ");
		gets(viajes[count].destino);

		do {

			printf("\nMes: ");
			scanf("%d",&viajes[count].mes);
			rewind(stdin);
		} while (viajes[count].mes < 1 || viajes[count].mes > 12);

		count++;
}

void ConsultarMes(VIAJE* t) {
	int mes,cuantos;
	char primerorigen[20];
	do{

			printf("\nMes: ");
			scanf("%d",&mes);
			rewind(stdin);
	} while (mes < 1 || mes > 12);


	if(funcionConsultar(t, count, mes, primerorigen, &cuantos)) {
		printf("\nNúmero de viajes: %d.\nPrimer origen: %s.\n",cuantos,primerorigen);
	}
	else {
		printf("\nNo se econtro viajes para dicho mes.\n");
	}
}

int funcionConsultar(VIAJE t[], int len, int mes, char* primerorigen, int* cuantos) {
	int encontrado;
	encontrado=*cuantos = 0;
	for (int i = 0; i < len; i++)
	{
		if (t[i].mes == mes) {
			if (!encontrado) {
				encontrado = 1;
				strcpy(primerorigen, t[i].origen);
			}
			(*cuantos)++;
		}
	}
	return encontrado;
}

*/