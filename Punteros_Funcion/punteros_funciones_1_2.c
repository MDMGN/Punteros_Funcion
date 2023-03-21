#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define TAM 10
/*
typedef struct
{
	char palabra[256];
	char car;
	int primera;
	int ultima;
	int veces;
}PALABRA;
void Funcion(char* pal, char car, int* primera, int* ultima, int* veces);
void CargarTabla(PALABRA* tabla, int n);
void MostrarInforme(PALABRA* tabla, int n);
void TratarInforme(PALABRA* tabla, int n, int num);
int Menu();
main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//programar a partir de aquí
	void (*funciones[2])(PALABRA * tabla, int n) = { CargarTabla,MostrarInforme };
	PALABRA tabla[TAM];
	int opc;
	opc = Menu();
	while (opc != 3)
	{
		(*funciones[opc - 1])(tabla, TAM);
		opc = Menu();
	}
}
void Funcion(char* pal, char car, int* primera, int* ultima, int* veces)
{
	*veces = 0;
	*primera = *ultima = -1;
	for (int i = 0; pal[i] != '\0'; i++)
	{
		if (pal[i] == car)
		{
			if (*veces == 0)
			{
				*primera = i;
			}
			*ultima = i;
			(*veces)++;
		}
	}
}
void CargarTabla(PALABRA* tabla, int n)
{
	for (int i = 0; i < n; i++)
	{
		system("cls");
		rewind(stdin);
		printf("Palabra: ");
		gets(tabla[i].palabra);
		printf("Letra: ");
		tabla[i].car = getche();
		Funcion(tabla[i].palabra, tabla[i].car, &tabla[i].primera, &tabla[i].ultima, &tabla[i].veces);
		printf("Primera Vez: %d\n", tabla[i].primera);
		printf("Últim Vez: %d\n", tabla[i].ultima);
		printf("Veces: %d\n", tabla[i].veces);
		getch();
	}
}
void MostrarInforme(PALABRA* tabla, int n)
{
	int num;
	system("cls");
	printf("Número: ");
	scanf("%d", &num);
	while (num != 0)
	{
		TratarInforme(tabla, n, num);
		system("cls");
		printf("Número: ");
		scanf("%d", &num);
	}
}
void TratarInforme(PALABRA* tabla, int n, int num)
{
	printf("%25s   %5s   %11s  %10s\n", "Palabra", "Veces", "Primera Vez", "Última Vez");
	for (int i = 0; i < n; i++)
	{
		if (tabla[i].veces > num)
		{
			printf("%25s   %5d   %11d  %10\n", tabla[i].palabra, tabla[i].veces, tabla[i].primera, tabla[i].ultima);
		}
	}
	getch();
}
int Menu()
{
	int opc;
	do
	{
		system("cls");
		printf("1.Cargar Tabla\n2.Mostrar Informe\n3.Salir\nIntroduce Opción: ");
		scanf("%d", &opc);
	} while (opc < 1 || opc>3);
	return opc;
}
*/