#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>

/*
#define MESES 12
#define VENDEDORES 5

void inicializarTabla(float(*tabla)[VENDEDORES],int vendedores,int meses);
void introducirDatos(float(*tabla)[MESES]);
void mostrarVendedores(float(*tabla)[VENDEDORES], int vendedores, int meses);
void goToXY(int x, int y);
int getVendedor();
int getMes();
int menu();

int main() {
	setlocale(LC_ALL, "");
	void (*funciones[])(int(* t)[MESES]) = {inicializarTabla,introducirDatos,mostrarVendedores};

	float ventas[VENDEDORES][MESES], venta;
	int op = menu();
	goToXY(22,5);
	while (op != 4) {
		(*funciones[op - 1])(ventas,VENDEDORES,MESES);
		op = menu();
	}
	return 0;
}

int menu() {
	int op;
	do {
		printf("\n1. Inicializar tabla.\n2. Introducir datos tabla.\n3. Listado por nº vendedor y meses.\n4. Salir.\nIntroduce una opción: ");

		scanf("%d", &op);
	} while (op < 1 || op > 4);
	return op;
}

void introducirDatos(float(*tabla)[MESES]) {
	int i, j;
	i = getVendedor();
	while (i != 0) {
		j = getMes();
		printf("\nVenta: ");
		scanf("%f", &tabla[i-1][j]);
		i = getVendedor();
	}
}

void goToXY(int x, int y) {
	COORD pos;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(h,pos);
}
void inicializarTabla(float(* tabla)[MESES],int vendedores,int meses) {
	for (int i = 0; i < vendedores; i++)
	{
		for (int j = 0; j < meses; j++)
		{
			tabla[i][j] = 0;
		}
	}
}

int getVendedor() {
	int vendedor;
	printf("\nVendedor: ");
	scanf("%d", &vendedor);
	return vendedor;
}

int getMes(){
	int mes;
	printf("\nMes: ");
	scanf("%d", &mes);
	return mes;
}

void mostrarVendedores(float (* tabla)[MESES], int vendedores, int meses) {
	char* arrMeses[] = { "Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre" };

	for (int i = 0; i < vendedores; i++)
	{
		system("cls");
		printf("\nNº Vendedor: %d", i + 1);
		printf("\n%8s %12s", "Mes", "Venta en €uros");
		for (int j = 0; j < meses; j++)
		{
			printf("\n%8s %12s", arrMeses[j], tabla[i][j]);
		}
		printf("\nPulsa una tecla para continuar");
		_getch();
	}
}
*/