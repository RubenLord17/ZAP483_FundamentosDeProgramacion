// Fortino Ruben Arias Lordmendez 
// 22_04_26_Arrays_Arreglos_oVectores.cpp 
// Practica de libros 

#include <iostream>
using namespace std;
#include <string>
#include <locale>


bool ReadInt(int& valor)
{
    bool ok = std::cin.good();

    if (!ok) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return ok;
}
int main()
{
    setlocale(LC_ALL, "spanish");
    string titulos[6];
    string autores[6];
    int anios[6];
    int contador = 1;
    /*
    char autor[5]; //esto es un arreglo- Varios caracteres. 
    char autor2[5]:
    */
    for (int aux = 1; aux <= 5; aux++)
    {
    cout << "ingresa el titulo del libro # " << aux << std::endl;
    cin.ignore();
    getline (cin, titulos[aux]);
    cout << "ingresa el autor del libro # " << aux << std::endl;
    getline (cin, autores[aux]);
    cout << "ingresa el año del libro # " << aux << std::endl;
    cin >> anios[aux];
    while (true)
    {
        if (!ReadInt(anios[aux])) 
        {
            std::cout << "Ingrese un numero porfavor\n";
            std::cin >> anios[aux];
        }
        else
            break;
    }
    }

    for (int aux1 = 1; aux1 <= 5; aux1++)
    {
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "el titulo del libro " << aux1<< " es: " << titulos[aux1] << std::endl;
    std::cout << "el anio de publicacion del libro " << aux1<< " es: " << anios[aux1] << std::endl;
    std::cout << "el autor del libro " <<  aux1 << " es: " << autores[aux1] << std::endl;
    }
}





