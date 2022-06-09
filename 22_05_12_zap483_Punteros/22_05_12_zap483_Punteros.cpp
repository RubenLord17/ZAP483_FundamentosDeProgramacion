// 22_05_12_zap483_Punteros.cpp 
// Fortino Ruben Arias Lordmendez
//

#include <iostream>
#include <Windows.h>
#include <locale>
#include<string>
using namespace std;


int main()
{
    /*
    string nombres [50];
    string* nomApuntador = nombres;

    std::cout << nombres << std::endl;
    */
    /*
    int nlibros = 0;
    cout << "cuantos libros";
    cin >> nlibros;
    string titulos[nlibros];
    */

    setlocale(LC_ALL, "spanish");
    std::string* libros = NULL;
    int tamanio = 0;
    std::cout << "cuantos libros quieres almacenar? \n";
    std::cin >> tamanio;
    libros = new std::string[tamanio];
    //Rellenar
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "ingresa el titulo del libro #" << i + 1 << std::endl;
        
    if (i == 0)
      {
        std::cin.ignore();
      }
       
        getline(std::cin, libros[i]);
        system("CLS");
    }
    //Mostrar
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "el titulo del libro #" << i + 1 << " es: " << std::endl;
        std::cout << libros[i]<<std::endl;
    }
    delete[] libros;
    libros = NULL;
}
    
 




   



/*
    //Funciones de control...
    system("pause"); //Pausa el sistema hasta que se presione una tecla
    system("CLS"); //Limpia la impresion
    Sleep(100); //Detiene la ejecucion pór un tiempo


    //Puntero
    int variable = 0; //Variable entera normal aburrida
    int* apuntador = &variable; //Puntero que no entiendo e intentare usar

    std::cout << variable << std::endl; //el numero aburrido de la variable
    *apuntador = 20;
    std::cout << variable << std::endl; //numero aburrido cambiado de la variable
    std::cout << apuntador << std::endl;
    std::cout << *apuntador << std::endl;
    std::cout << &variable << std::endl;
    system("pause");

    //Borrar o liberar la memoria
    apuntador = NULL;
    */