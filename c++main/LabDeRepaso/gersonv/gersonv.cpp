// gersonv.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class SuperHeroe {
private:
    string nombre;
    string poder;
    int edad;

public:
    SuperHeroe(string n, string p, int e) : nombre(n), poder(p), edad(e) {}

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Poder: " << poder << endl;
        cout << "Edad: " << edad << endl;
    }

    void usarPoder() {
        cout << nombre << " está usando su poder: " << poder << "!" << endl;
    }
};

// Subclase Héroe Clásico
class HeroeClasico : public SuperHeroe {
public:
    HeroeClasico(string n, string p, int e) : SuperHeroe(n, p, e) {}

    void lucharPorJusticia() {
        cout << "¡" << "Luchando por la justicia!" << endl;
    }
};

// Subclase Villano
class Villano : public SuperHeroe {
public:
    Villano(string n, string p, int e) : SuperHeroe(n, p, e) {}

    void hacerMaldades() {
        cout << "¡" << "Tramando un plan maligno!" << endl;
    }
};

// Subclase Anti-Héroe
class AntiHeroe : public SuperHeroe {
public:
    AntiHeroe(string n, string p, int e) : SuperHeroe(n, p, e) {}

    void actuarPorCuentaPropia() {
        cout << "¡" << "Haciendo justicia a su manera!" << endl;
    }
};

int main() {
    HeroeClasico heroe1("Superman", "Volar", 30);
    Villano villano1("Joker", "Manipulación", 40);
    AntiHeroe antiheroe1("Deadpool", "Regeneración", 35);

    // Mostrando datos y acciones
    heroe1.mostrarDatos();
    heroe1.usarPoder();
    heroe1.lucharPorJusticia();

    cout << endl;

    villano1.mostrarDatos();
    villano1.usarPoder();
    villano1.hacerMaldades();

    cout << endl;

    antiheroe1.mostrarDatos();
    antiheroe1.usarPoder();
    antiheroe1.actuarPorCuentaPropia();

    return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
