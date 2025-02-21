#include <iostream>

using namespace std;


class Emperador 
{
private: 
	string nombre;
	int edad;

public:
	Emperador(string nom, int ed): nombre(nom), edad(ed){}

	void MostrarInfo()
	{
		cout << "Nombre:" << nombre << "edad:" <<  edad << endl;
	}

};

class Legion : public Emperador
{
protected: 
	string primarca;
	string lealtad;

public: 
	Legion(string nom, int ed, string prim, string leal) : Emperador(nom, ed), primarca(prim), lealtad(leal) {}

	void Mostrarlegion()
	{
		cout << "Primarca:" << primarca << "\nLealtad:" << lealtad << endl;

	}

};

class Loyalista : public Legion {
public:
	Loyalista(string primarca)
		: Legion("Legion Loyalista", 10000, primarca, "Imperio") {
	}
};

class Hereje : public Legion {
public:
	Hereje(string primarca)
		: Legion("Legion Hereje", 10000, primarca, "Caos") {
	}
};

class Traidor : public Legion{
public:
	Traidor(string primarca)
		: Legion("Legion Traidora", 10000, primarca, "Caos") {
}
};

class Exiliado : public Legion {
public:
	Exiliado(string primarca)
		: Legion("Legion Exiliada", 10000, primarca, "Ninguna") {
	}
};


class Renegado : public Legion {
public:
	Renegado(string primarca)
		: Legion("Legion Renegada", 10000, primarca, "Independiente") {
	}
};


class PrimarcaPerdido : public Legion {
public:
	PrimarcaPerdido()
		: Legion("Legion Desconocida", 10000, "Desconocido", "Ninguna") {
	}
};


class Desconocido : public Legion {
public:
	Desconocido()
		: Legion("Legion Misteriosa", 10000, "Desconocido", "Desconocido") {
	}
};

int main()
{

	Loyalista ultramarines("Roboute Guilliman");	
	Hereje traidores("Horus Lupercal");
	Traidor traidor("Fulgrim");	
	Exiliado exiliado("Lion El'Jonson");
	Renegado renegado("Huron Blackheart");	
	PrimarcaPerdido perdido;	
	Desconocido desconocido;	

	cout << "=== Lealistas ===" << endl;
	ultramarines.Mostrarlegion();

	cout << "\n=== Herejes ===" << endl;
	traidores.Mostrarlegion();	

	cout << "\n=== Traidor ===" << endl;
	traidor.Mostrarlegion();

	cout << "\n=== Exiliado ===" << endl;
	exiliado.Mostrarlegion();

	cout << "\n=== Renegado ===" << endl;
	renegado.Mostrarlegion();

	cout << "\n=== Primarca Perdido ===" << endl;
	perdido.Mostrarlegion();	

	cout << "\n=== Desconocido ===" << endl;
	desconocido.Mostrarlegion();	

	return 0;
}