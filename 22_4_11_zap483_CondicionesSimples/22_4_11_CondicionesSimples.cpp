// Fortino Ruben Arias Lordmendez
// 22_4_11_CondicionesSimples.cpp

#include <iostream>
using namespace std;
#include <cctype>


int main()
{
    bool repetir = true;
    string Nombre, ciudad;
    int Edad, CP;
    float peso;
    double altura;
   
    cout << "Estas en un consultorio medico\n";
    do
    {
        cout << "Ingresa tu nombre\n";
        cin >> Nombre;
        if (Nombre == "Ruben")
        {
            cout << "nombre correcto\n";
        }
        else
        {
            cout << "el dato no es correcto, escribelo de nuevo\n";
        }
    }
    while (Nombre != "Ruben");
    
    do
    {
        cout << "Ingresa tu ciudad\n";
        cin >> ciudad;
        if (ciudad == "Coatzacoalcos")
        {
            cout << "ciudad correcto\n";
        }
        else
        {
            cout << "el dato no es correcto, escribelo de nuevo\n";
        }
    } 
    while (ciudad != "Coatzacoalcos");

    do
    {
        cout << "Ingresa tu edad\n";
        cin >> Edad;
        if (Edad == 20)
        {
            cout << "edad correcta\n";
        }
        else
        {
            cout << "el dato no es correcto, escribelo de nuevo\n";
        }
    }
    while (Edad != 20);

    do
    {
        cout << "Ingresa tu codigo postal\n";
        cin >> CP;
        if (CP == 46538)
        {
            cout << "codigo postal correcto\n";
        }
        else
        {
            cout << "el dato no es correcto, escribelo de nuevo\n";
        }
    }
    while (CP != 46538);

    do
    {
        cout << "Ingresa tu peso\n";
        cin >> peso;
        if (peso == 80)
        {
            cout << "edad correcta\n";
        }
        else
        {
            cout << "el dato no es correcto, escribelo de nuevo\n";
        }
    } 
    while (peso != 80);

    do
    {
        cout << "Ingresa tu altura\n";
        cin >> altura;
        if (altura == 1.70)
        {
            cout << "altura correcta\n";
        }
        else
        {
            cout << "el dato no es correcto, escribelo de nuevo\n";
        }
    } 
    while (altura != 1.70);

     cout << "quisiera salir del programa o quedarse?\n";
     cout << "si desea quedarse escriba 1, si desea salir escriba 0\n";
     cin >> repetir;
     (repetir == true);
     return 0;
}


