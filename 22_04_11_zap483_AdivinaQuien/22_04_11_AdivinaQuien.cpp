// Fortino Ruben Arias Lordmendez
// 22_04_11_AdivinaQuien.cpp

#include <iostream>
#include<Windows.h>

int main()
{
	int respuesta, continuar;
	Sleep(1000);
	std::cout << "Tratare de adivinar el deporte que estas pensando" << std::endl;
	Sleep(1000);
	std::cout << "responde 0 si es no, responde 1 si es si" << std::endl;
	Sleep(1000);
	std::cout << "es por tiempo o rondas?" << std::endl;
	std::cin >> respuesta;
	if (respuesta == 1)
	{

		std::cout << "es en equipo?" << std::endl;
		std::cin >> respuesta;
		if (respuesta == 1)
		{

			std::cout << "se usan las manos?" << std::endl;
			std::cin >> respuesta;
			if (respuesta == 1)
			{

				std::cout << "corres, patinas o te mueves?" << std::endl;
				std::cin >> respuesta;
				if (respuesta == 1)
				{

					std::cout << "se usa pelota?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{

						std::cout << "se usan herramientas o cosas de apoyo?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{

							std::cout << "hay contacto fisico?" << std::endl;
							std::cin >> respuesta;
							if (respuesta == 1)
							{

								std::cout << "LaCrosse" << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "Beisbol" << std::endl;
							}
						}
						else
						{

							std::cout << "hay contacto fisico?" << std::endl;
							std::cin >> respuesta;
							if (respuesta == 1)
							{
								std::cout << "Futbol Americano" << std::endl;
							}


							else
							{


								std::cout << "Basquetball" << std::endl;
							}
						}
					}

					else
					{
						std::cout << "se usan herramientas o cosas de apoyo?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{

							std::cout << "hay contacto fisico?" << std::endl;
							std::cin >> respuesta;
							if (respuesta == 1)
							{

								std::cout << "Hockey" << std::endl;
							}
							else
							{
								std::cout << "Gimnasia" << std::endl;
							}
						}
					}
				}
				else
				{

					std::cout << "se usa pelota?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{

						std::cout << "se usa una red o porteria?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{
							std::cout << "Volleyball" << std::endl;
						}
						else
						{
							std::cout << "Quemados" << std::endl;
						}
					}
				}
			}
			else

				std::cout << "corres, patinas o te mueves?" << std::endl;
			std::cin >> respuesta;
			if (respuesta == 1)
			{

				std::cout << "se usa pelota?" << std::endl;
				std::cin >> respuesta;
				if (respuesta == 1)
				{

					std::cout << "se usa una red o porteria?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{
						std::cout << "Futbol" << std::endl;
					}
					else
					{
						std::cout << "Softbol" << std::endl;
					}
				}
			}
			else
			{

				std::cout << "se necesita de algo externo?" << std::endl;
				std::cin >> respuesta;
				if (respuesta == 1)
				{
					std::cout << "tiene hielo?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{
						std::cout << "Bobsleigh" << std::endl;
					}
					else
					{
						std::cout << "se usa el agua?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{
							std::cout << "es en una alberca?" << std::endl;
							std::cin >> respuesta;
							if (respuesta == 1)
							{
								std::cout << "Natacion" << std::endl;
							}
							else
							{
								std::cout << "Natacion en aguas abiertas" << std::endl;
							}
						}
					}
				}
			}


			std::cout << "se usan las manos?" << std::endl;
			std::cin >> respuesta;
			if (respuesta == 1)
			{


				std::cout << "se usan herramientas o cosas de apoyo?" << std::endl;
				std::cin >> respuesta;
				if (respuesta == 1)
				{
					{

						std::cout << "se usa pelota?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{

							std::cout << "Golf" << std::endl;
						}
						else
						{
							std::cout << "Salto de Altura" << std::endl;
						}
					}

				}
				else
				{

					std::cout << "hay contacto fisico?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{
						std::cout << "se usa proteccion y espada?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{

							std::cout << "Esgrima" << std::endl;
						}
						else
						{
							std::cout << "Boxeo" << std::endl;
						}
					}
				}

			}
		}
		std::cout << "se usan las manos?" << std::endl;
		std::cin >> respuesta;
		if (respuesta == 1)
		{

			std::cout << "es en un lugar cerrado?" << std::endl;
			std::cin >> respuesta;
			if (respuesta == 1)
			{	

				std::cout << "necesitas equipo o aparatos?" << std::endl;
				std::cin >> respuesta;
				if (respuesta == 1)
				{

					std::cout << "lo haces todo por ti solo?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{

						std::cout << "Gimnasio" << std::endl;
						std::cin >> continuar;
					}
					else
					{
						std::cout << "Crossfit" << std::endl;
					}

				}

				else
				{
					std::cout << "es en un ring?" << std::endl;
					std::cin >> respuesta;
					if (respuesta == 1)
					{

						std::cout << "usas las piernas?" << std::endl;
						std::cin >> respuesta;
						if (respuesta == 1)
						{

							std::cout << "usas todo tu cuerpo" << std::endl;
							std::cin >> respuesta;
							if (respuesta == 1)
							{

								std::cout << "MMA" << std::endl;
								std::cin >> continuar;
							}
							else
							{
								std::cout << "Taekwondo" << std::endl;
							}
						}
					}
				}
			}
		}
	}
}
