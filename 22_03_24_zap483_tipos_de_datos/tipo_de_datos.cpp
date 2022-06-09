//24-03-22 Fortino Ruben Arias Lordmendez

#include <iostream>
using namespace std;
#include<windows.h>


int main()
{

	int numeros = 0;
	float decimal = 0;
	char caracteres = 0;
	double karl = 0;
	std::string fral;

	Sleep(1000);
	cout << "ingresaras una serie de datos\n";
	
	Sleep(1000);
	std::cout << "ingresa un numero" << std::endl;
	std::cin >> numeros;
	Sleep(1500);
	std::cout << "su numero ingresado es:" << numeros << std::endl;

	Sleep(1000);
	std::cout << "ingresa un numero decimal" << std::endl;
	std::cin >> decimal;
	Sleep(1500);
	std::cout << "su decimal es: " << decimal << std::endl;

	Sleep(1000);
	std::cout << "ingresa un caracter" << std::endl;
	std::cin >> caracteres;
	Sleep(1500);
	std::cout << "su caracter es:" << caracteres << std::endl;

	Sleep(1000);
	std::cout << "ingresa un numero mas grande con decimal: " << std::endl;
	std::cin >> karl;
	Sleep(1500);
	std::cout << "su numero superior es:" << karl << std::endl;

	Sleep(1000);
	std::cout << "ingresa una palabra aleatoria: " << std::endl;
	std::cin >> fral;
	Sleep(1500);
	std::cout << "su palabra aleatoria es: " << fral << std::endl;

	scanf_s("%d", &numeros);
	printf("numeros es: %d\n", numeros);

	scanf_s("%f", &decimal);
	printf("decimal es: %f\n", decimal);

	scanf_s("%20s", &caracteres);
	printf("caracteres es: %s\n", caracteres);

	scanf_s("%if", &karl);
	printf("numero mas grande: %if\n", karl);



}