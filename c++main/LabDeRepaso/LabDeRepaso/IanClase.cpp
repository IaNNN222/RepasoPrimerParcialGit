//Hola esta es una prueba
#include <iostream>
#include <string>
using namespace std;

// Clase padre: Emperador
class Emperador {
protected:
    string nombre;
    int edad;

public:
    Emperador(string nombre, int edad) : nombre(nombre), edad(edad) {}

    void mostrarInfo() {
        cout << "Nombre: " << nombre << "\nEdad: " << edad << endl;
    }
};

// Clase hija: Legion
class Legion : public Emperador {
protected:
    string primarca;
    string lealtad;

public:
    Legion(string nombre, int edad, string primarca, string lealtad)
        : Emperador(nombre, edad), primarca(primarca), lealtad(lealtad) {
    }

    void mostrarLegion() {
        mostrarInfo();
        cout << "Primarca: " << primarca << "\nLealtad: " << lealtad << endl;
    }
};

// Clase derivada: Loyalista
class Loyalista : public Legion {
public:
    Loyalista(string primarca)
        : Legion("Legion Loyalista", 10000, primarca, "Imperio") {
    }
};

// Clase derivada: Hereje
class Hereje : public Legion {
public:
    Hereje(string primarca)
        : Legion("Legion Hereje", 10000, primarca, "Caos") {
    }
};

int main() {
    Loyalista ultramarines("Roboute Guilliman");
    Hereje traidores("Horus Lupercal");

    cout << "=== Lealistas ===" << endl;
    ultramarines.mostrarLegion();

    cout << "\n=== Herejes ===" << endl;
    traidores.mostrarLegion();

    return 0;
}
