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

class Agua : Pokemon {
private:
    string debilidad;
    string fortaleza;
public: 
    Agua(string _nombre, int _hp, int _defensa, int _ataque, int _velocidad, string _debilidad, string _fortaleza) : Pokemon(_nombre,_hp,_defensa,_ataque,_velocidad), debilidad(_debilidad), fortaleza(_fortaleza) {
        debilidad = _debilidad;
        fortaleza = _fortaleza;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
