// 22_06_07_zap483_Proyecto1_Historia.cpp 
// Fortino Ruben Arias Lordmendez
//

#include <iostream>
using namespace std;
#include <Windows.h>
#include <locale>

/*
bool ReadInt(int& valor)
{
    bool ok = std::cin.good();

    if (!ok) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return ok;
}
*/

int main()
{
    setlocale(LC_ALL, "spanish");
    int respuesta;
    std::cout << "Te voy a contar una historia responde 1 para SI y 0 para NO" << std::endl;
    Sleep(1500);
    std::cout << "Esta es la historia de John Auditore, el crecio como cualquier niño normal, y tuvo una vida maravillosa hasta su adultes" << std::endl;
    Sleep(1500);
    std::cout << "John pudo cumplir con todo lo que queria, se graduo con honores, tuvo beca deportiva, era muy querido entre sus amigos y familiares, tuvo una hermosa novia desde la preparatoria" << std::endl;
    Sleep(1500);
    std::cout << "Al tener a su novia a lado tanto tiempo desde que eran jovenes el no podia estar mas enamorado de ella, tanto asi que un dia llegando de trabajar la invito a cenar donde le propuso matrimonio" << std::endl;
    Sleep(1500);
    std::cout << "Ella por supuesto igual estaba enamorada de el, asi que le dijo que si. Pasaron 5 años y tenian una vida maravillosa donde tuvieron incluso dos hijos" << std::endl;
    Sleep(1500);
    std::cout << "Pasaron otros 5 años, pero todo empezo a caer, empezaron a tener discusiones y peleas, mas que nada por problemas economicos, ya que John se habia quedado sin empleo" << std::endl;
    Sleep(1500);
    std::cout << "Habia una solucion a esto y era que Jhon se enlistara para ir a la guerra, solucionaria sus problemas pero se iria lejos por un tiempo" << std::endl;
    Sleep(2000);
    std::cout << "Quieres que John se enliste para la guerra?" << std::endl;
    std::cin >> respuesta;
    if (respuesta == 1)
    {
        Sleep(1500);
        std::cout << "John se enlista en el ejercito y se va por 3 años, sus problemas economicos desaparecen, pero empieza a extrañar a su familia, sobre todo al amor de su vida" << std::endl;
        Sleep(1500);;
        std::cout << "John va a la guerra, donde son emboscados y tiene dos opciones, salvar a su compañero o salvarse a el" << std::endl;
        Sleep(2000);
        std::cout << "Quieres que se salve?" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 1)
        {
            Sleep(1500);
            std::cout << "John se salva y vuelve a casa, pero el perder a su compañero de guerra lo tiene muy atormentado, y vive sus dias tranquilos, donde se consigue otro trabajo, pero en las noches duerme atormentado por no poder hacer mas" << std::endl;
            Sleep(1500);
            std::cout << "Al final le dio depresion y no pudo masy murio" << std::endl;
        }
        else
        {
            Sleep(1500);
            std::cout << "John logra salvar a su compañero, pero en el proceso, el recipe una bala, que lo perjudicaria mucho, ambos salen de la guerra, pero la bala deja lo deja en coma donde no hay nada para hacer, al final su esposa para no verlo sufrir decide que lo mejor seria desconectarlo" << std::endl;
            Sleep(1500);
            std::cout << "El no pudo tener un final feliz, pero el sacrificio que hizo fue recordado por todo su escuadron y sera un heroe de guerra para ellos" << std::endl;
        }
    }
    else
    {
        Sleep(1500);
        std::cout << "John decide quedarse, ya que prefiere aunque no tener un buen trabajo estar con su familia, asi que no va para poder estar con ellos, aunque las cosas esten mal" << std::endl;
        Sleep(1500);
        std::cout << "John ultimamente se esta deprimiendo de poco en poco, ya que perdio el trabajo de sus sueños y siente que no le puede dar lo mejor a su familia, hasta que un dia un amigo le llega con una propuesta" << std::endl;
        Sleep(1500);
        std::cout << "Le dice que puede volver a trabajar con la empresa, pero tendria que estar viajando mucho. John le dice que lo hablara con su esposa y que le de unos dias para contestarle" << std::endl;
        Sleep(1500);
        std::cout << "Ella le dice que tiene que tomar una decision, que sabe que es el trabajo de sus sueños, asi que John tiene que elegir entre quedarse y buscar un trabajo normal" << std::endl;
        Sleep(1500);
        std::cout << "O poder irse a trabajar donde siempre quiso pero sin ver a su familia" << std::endl;
        Sleep(2000);
        std::cout << "John cumple su sueño?" << std::endl; 
        std::cin >> respuesta;
        if (respuesta == 1)
        {
            Sleep(1500);
            std::cout << "John por fin pudo volver a ser feliz como antes, teniendo su trabajo y aunque no ve  a su familia, y los extraña saben que lo apoyan y cuando esta con ellos hara lo mejor para recompensar" << std::endl;
        }
        else
        {
            Sleep(1500);
            std::cout << "John decide quedarse, por que sabe que la familia es lo mas importante para el y aunque no tenga su trabajo de sueños, es feliz con ellos, ya que sin ellos, no podria hacer nada por que son su inspiracion y por ellos sigue adelante" << std::endl;
        }
    }
    /*
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
    */
}

