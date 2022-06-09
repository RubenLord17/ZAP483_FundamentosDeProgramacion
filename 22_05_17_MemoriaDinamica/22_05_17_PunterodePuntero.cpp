// 22_05_17_PunterodePuntero.cpp 
//Fortinno Ruben Arias Lordmendez

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;


int main()
{
	srand(time(NULL));
	cout << "ingresa filas y columnas \n";
	int fila, columna;
	cin >> fila >> columna;
	int** arreglo = new int* [fila];
	for (int f = 0; f < fila; f++)
	{
		arreglo[f] = new int[columna];
	}
	for (int f = 0; f < fila; f++)
	{
		for (int c = 0; c < columna; c++)
		{
			if (fila && columna > 3)
			{
				arreglo[f][c] = rand() % 10;
				cout << "numero" << "[" << f << "]" << "[" << c << "]:" << arreglo[f][c] << endl;

			}
			else
			{
				cout << "numero" << "[" << f << "]" << "[" << c << "]:";
				cin >> arreglo[f][c];
			}
		}
	}
	cout << "-------------------------------- \n";
	for (int f = 0; f < fila; f++)
	{
		for (int c = 0; c < columna; c++)
		{
			cout << arreglo[f][c];

		}
		cout << endl;
	}
	for (int f = 0; f < fila; f++)
	{
		delete[] arreglo[f];
	}
	delete[]arreglo;
	arreglo = NULL;           
}



