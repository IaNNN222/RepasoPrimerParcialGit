#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private: 
    string nombre;
    int hp;
    int defensa;
    int ataque;
    int velocidad; 
public: 
    Pokemon(string _nombre, int _hp, int _defensa, int _ataque, int _velocidad) {
        nombre = _nombre;
        hp = _hp;
        defensa = _defensa; 
        ataque = _ataque;
        velocidad = _velocidad;
    }

    void evolucion() {
        cout << nombre << " Ha evolucionado correctamente" << endl;
    }

};

class Agua : public Pokemon {
private:
    string ataqueA;
public: 
    Agua(string _nombre, int _hp, int _defensa, int _ataque, int _velocidad, string _ataqueA) : Pokemon(_nombre,_hp,_defensa,_ataque,_velocidad), ataqueA(_ataqueA) {
        ataqueA = _ataqueA;
    }

    void movimientoA() {
        cout << "Ha realizado: " << ataqueA << endl;
    }

};

class Fuego : public Pokemon {
private: 
    string ataqueF;
public:
    Fuego(string _nombre, int _hp, int _defensa, int _ataque, int _velocidad, string _ataqueF) : Pokemon(_nombre, _hp, _defensa, _ataque, _velocidad), ataqueF(_ataqueF) {
        ataqueF = _ataqueF;
    }

    void movimientoF() {
        cout << "Ha realizado: " << ataqueF << endl;
    }

};

class Electrico : public Pokemon {
private: 
    string ataqueE;
public: 
    Electrico(string _nombre, int _hp, int _defensa, int _ataque, int _velocidad, string _ataqueE) : Pokemon(_nombre, _hp, _defensa, _ataque, _velocidad), ataqueE(_ataqueE) {
        ataqueE = _ataqueE;
    }

    void movimientoE() {
        cout << "Ha realizado: " << ataqueE << endl;
    }

};

int main()
{
    Electrico e1("Pikachu", 25, 10, 20, 30, "Impactrueno");
    Fuego f1("Ponyta", 28, 15, 25, 12, "Llamarada");
    Agua a1("Lapras", 40, 35, 10, 10, "Hidrobomba");

    cout << "Tu pokemon: " << endl;
    e1.movimientoE();
    cout << "Tu pokemon ha: " << endl;
    e1.evolucion();

    cout << "Tu pokemon: " << endl;
    a1.movimientoA();
    cout << "Tu pokemon ha: " << endl;

    cout << "Tu pokemon: " << endl;
    f1.movimientoF();
    cout << "Tu pokemon ha: " << endl;

}
