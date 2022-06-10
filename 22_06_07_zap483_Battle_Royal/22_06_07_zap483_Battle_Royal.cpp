// 22_06_07_zap483_Battle_Royal.cpp 
// Fortino Ruben Arias Lordmendez
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <random>
using namespace std;


struct player
{
	std::string nombre;
	int vida;
	int ataque;
	int fuerza;
	int velocidad;
	
	
}n[8];

void atributos()
{
	srand(time(NULL));
	
	n[0].nombre = "Cris ";
	


	
	n[1].nombre = "Ivan el oaxaco";
	


	
	n[2].nombre = "Ruben el crustaceo";
	


	
	n[3].nombre = "El Presi";
	


	
	n[4].nombre = "Manuel el sinaloense";
	


	
	n[5].nombre = "El primo del sinaloense";
	


	
	n[6].nombre = "Mau el tapatio";
	


	
	n[7].nombre = "El Alex";
	

	for (int i = 0; i <= 7; i++)
	{
		n[i].vida = rand() % 10;
		n[i].ataque = rand() % 10;
		n[i].fuerza = rand() % 10;
		n[i].velocidad = rand() % 10;
	}
	
	for (int i = 0; i <= 7; i++)
	{
		cout << "---------------------------------------------------" << endl;
		cout << " Su Nombre: " << n[i].nombre << endl;
		cout << " Su Vida: " << n[i].vida << endl;
		cout << " Su Ataque: " << n[i].ataque << endl;
		cout << " Su Fuerza: " << n[i].fuerza << endl;
		cout << " Su Velocidad: " << n[i].velocidad << endl;
	}


}

void ganadores(int vidam, int vidag, int vidaMin, int vidaP, int ataquem, int ataqueg, int ataqueMin, int ataqueP, int fuerzam, int fuerzag, int fuerzaMin, int fuerzaP, int velocidadm, int velocidadg, int velocidadMin, int velocidadP)
{
	for (int i = 0; i < 8; i++)
	{
		if (n[i].vida > vidam)
		{
			vidam = n[i].vida;
			vidag = i;
		}

		if (n[i].ataque > ataquem)
		{
			ataquem = n[i].ataque;
			ataqueg = i;
		}

		if (n[i].fuerza > fuerzam)
		{
			fuerzam = n[i].fuerza;
			fuerzag = i;
		}

		if (n[i].velocidad > velocidadm)
		{
			velocidadm = n[i].velocidad;
			velocidadg = i;
		}
	}

	std::cout << "\n----- los mejores son: -----\n";
	std::cout << "El jugador con mayor vida es: " << n[vidag].nombre << " con " << n[vidag].vida << " vida\n";
	std::cout << "El jugador con mayor ataque es: " << n[ataqueg].nombre << " con " << n[ataqueg].ataque << " ataque\n";
	std::cout << "El jugador con mayor fuerza es: " << n[fuerzag].nombre << " con " << n[fuerzag].fuerza << " fuerza\n";
	std::cout << "El jugador con mayor velocidad es: " << n[velocidadg].nombre << " con " << n[velocidadg].velocidad << " velocidad\n";

	
	for (int i = 0; i < 8; i++)
	{
		if (n[i].vida < vidaMin)
		{
			vidaMin = n[i].vida;
			vidaP = i;
		}

		if (n[i].ataque < ataqueMin)
		{
			ataqueMin = n[i].ataque;
			ataqueP = i;
		}

		if (n[i].fuerza < fuerzaMin)
		{
			fuerzaMin = n[i].fuerza;
			fuerzaP = i;
		}

		if (n[i].velocidad < velocidadMin)
		{
			velocidadMin = n[i].velocidad;
			velocidadP = i;
		}
	}

	std::cout << "\n----- los peores son: -----\n";
	std::cout << "El jugador con menor vida es: " << n[vidaP].nombre << " con " << n[vidaP].vida << " vida\n";
	std::cout << "El jugador con menor ataque es: " << n[ataqueP].nombre << " con " << n[ataqueP].ataque << " ataque\n";
	std::cout << "El jugador con menor fuerza es: " << n[fuerzaP].nombre << " con " << n[fuerzaP].fuerza << " fuerza\n";
	std::cout << "El jugador con menor velocidad es: " << n[velocidadP].nombre << " con " << n[velocidadP].velocidad << " velocidad\n";
}

int main()
{
	int vidam = 0, ataquem = 0, fuerzam = 0, velocidadm = 0, vida = 0, ataque = 0, fuerza = 0, velocidad = 0;
	int vidaMin = 10, ataqueMin = 10, fuerzaMin = 10, velocidadMin = 10, vidaP = 0, ataqueP = 0, fuerzaP = 0, velocidadP = 0;
	srand(time(NULL));
	player();
	std::cout << "Los jugadores con sus atributos son: \n\n";
	atributos();
	system("pause");
	ganadores (vidam, ataquem, fuerzam, velocidadm, vida, ataque, fuerza, velocidad, vidaMin, ataqueMin, fuerzaMin, velocidadMin, vidaP, ataqueP, fuerzaP, velocidadP);
}

/*
void main()
{
	atributos();

}
*/

