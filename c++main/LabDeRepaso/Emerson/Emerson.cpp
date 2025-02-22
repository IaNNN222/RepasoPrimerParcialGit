// Emerson.cpp
//

#include <iostream>
#include <string>
using namespace std;

class EquipoFutbol {
private:
	string nombre;
	string ciudad;
	string estadio;
	string colores;

public:
	EquipoFutbol(string nombre, string ciudad, string estadio, string colores) {
		this->nombre = nombre;
		this->ciudad = ciudad;
		this->estadio = estadio;
		this->colores = colores;
	}
	void mostrarDatos() {
		cout << "Nombre: " << nombre << endl;
		cout << "Ciudad: " << ciudad << endl;
		cout << "Estadio: " << estadio << endl;
		cout << "Colores: " << colores << endl;
	}
};

class Jugador : public EquipoFutbol {
private:
	string nombre;
	string apellido;
	int edad;
	string posicion;
	int numero;

public:
	Jugador(string equipoNombre, string equipoCiudad, string equipoEstadio, string equipoColores, string nombre, string apellido, int edad, string posicion, int numero)
		: EquipoFutbol(equipoNombre, equipoCiudad, equipoEstadio, equipoColores), nombre(nombre), apellido(apellido), edad(edad), posicion(posicion), numero(numero) {
	}

	void mostrarDatosJugador() {
		mostrarDatos();
		cout << "Nombre del Jugador: " << nombre << endl;
		cout << "Apellido: " << apellido << endl;
		cout << "Edad: " << edad << endl;
		cout << "Posicion: " << posicion << endl;
		cout << "Numero: " << numero << endl;
	}
};

int main() {

	EquipoFutbol equipo("Barcelona", "Barcelona", "Camp Nou", "Azul y Grana");
	cout << "Datos del equipo:" << endl;
	equipo.mostrarDatos();

	cout << "\n---\n" << endl;

	
	Jugador jugador("Barcelona", "Barcelona", "Camp Nou", "Azul y Grana",
		"Lionel", "Messi", 34, "Delantero", 10);
	cout << "Datos del jugador:" << endl;
	jugador.mostrarDatosJugador();

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
