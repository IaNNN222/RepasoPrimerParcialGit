// gersonv.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iostream>
using namespace std;

class SuperHeroe
{

private:
	string nombre;
	string poder;
	int edad;

public:
	SuperHeroe(string n, string p, int e) {
		nombre = n;
		poder = p;
		edad = e;
	
		void mostrarDatos() {
			cout << "Nombre: " << nombre << endl;
			cout << "Poder: " << poder << endl;
			cout << "Edad: " << edad << endl;
		}

		void usarPoder() {
			cout << "Usando poder: " << poder << endl;
		}
};



int main()
{
	SuperHeroe heroe1("Superman", "Volar", 30);

	SuperHeroe heroe2("Batman", "Dinero", 35);

	heroe1.usarpoer();
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
