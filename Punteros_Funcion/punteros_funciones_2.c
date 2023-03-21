#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define	TAM 10
#define LIM 20
/*
//funciones del menu
void CargarTabla(int* t, int n, int* mediana, int* moda, float* media);
void VerModa(int* t, int n, int* mediana, int* moda, float* media);
void VerMediana(int* t, int n, int* mediana, int* moda, float* media);
void VerMedia(int* t, int n, int* mediana, int* moda, float* media);
//Funciones auxiliares
void InicializarContadores(int* veces, int lim);
void OrdenarTabla(int* t, int n);
int PedirNumero(int i);
int CalcularModa(int* veces, int lim);
int Menu();

main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	//programar a partir de aquí
	int tabla[TAM];
	int moda, mediana, opc;
	float media;
	void (*funciones[])(int* t, int n, int* mediana, int* moda, float* media) = { VerMedia,VerMediana,VerModa,CargarTabla };
	CargarTabla(tabla, TAM, &mediana, &moda, &media);
	opc = Menu();
	while (opc != 0)
	{
		(*funciones[opc - 1])(tabla, TAM, &mediana, &moda, &media);
		opc = Menu();
	}
}
void CargarTabla(int* t, int n, int* mediana, int* moda, float* media)
{
	*media = 0;

	int veces[LIM];
	InicializarContadores(veces, LIM);
	for (int i = 0; i < n; i++)
	{
		t[i] = PedirNumero(i);
		veces[t[i] - 1]++;
		*media += t[i];
	}
	*moda = CalcularModa(veces, LIM);
	*media /= n;
	OrdenarTabla(t, n);
	*mediana = t[(n - 1) / 2];
}
void VerModa(int* t, int n, int* mediana, int* moda, float* media)
{
	system("cls");
	printf("La Moda es %d", *moda);
	getch();
}
void VerMediana(int* t, int n, int* mediana, int* moda, float* media)
{
	system("cls");
	printf("La mediana es %d", *mediana);
	getch();
}
void VerMedia(int* t, int n, int* mediana, int* moda, float* media)
{
	system("cls");
	printf("La Media es %.2f", *media);
	getch();

}
//Funciones auxiliares
void InicializarContadores(int* veces, int lim)
{
	for (int i = 0; i < lim; i++)
		veces[i] = 0;
}
void OrdenarTabla(int* t, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
		{
			if (t[j] < t[j - 1])
			{
				int aux = t[j];
				t[j] = t[j - 1];
				t[j - 1] = aux;
			}

		}
}
int PedirNumero(int i)
{
	int num;
	do
	{
		system("cls");
		printf("Tabla[%d]", i);
		scanf("%d", &num);
	} while (num<1 || num>LIM);
	return num;
}
int CalcularModa(int* veces, int lim)
{
	int max = 0;
	for (int i = 1; i < lim; i++)
	{
		if (veces[i] > veces[max])
		{
			max = i;
		}
	}
	return max + 1;
}
int Menu()
{
	int opc;
	do
	{
		system("cls");
		printf("0.Salir\n1.Ver Media\n2.Ver Mediana\n3.Ver Moda\n4.Cargar Tabla\nIntroduce Opción:");
		scanf("%d", &opc);
	} while (opc < 0 || opc>4);
	return opc;
}
*/