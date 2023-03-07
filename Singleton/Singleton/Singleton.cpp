#include"Singleton.h"

//inicializar siempre las variables static
Singleton* Singleton::instancia = NULL;
//Que la flecha "vea" a NULL ==>Inicializacion

Singleton::~Singleton()
{
	cout << "Singleton eliminado." << endl;
	const int x = atexit(destroySingleton);
}

void Singleton::setValor(int valor) {
	this->valor = valor;
}

int Singleton::getValor() {
	return valor;
}

//Darle valor a la misma instancia del singleton
//Este método revisa sí la instancia está hecha o no, sino se 
//crea y se retorna

//cuando es creado, poner la funcion atexit, llama a la direccion del metodo
//para destruiir el singleton

Singleton* Singleton::getInstancia() {//Este metodo devuelve el singleton
	if (instancia == NULL)
	{
		instancia = new Singleton;

		//int x atexit(destroySingleton);
	}
	return instancia;
}

//DESTRUCTOR POR HACER!
//Atexit recibe un puntero a una funcion sin parametros
//que no devuelve nada
//Esta funcion se encarga de llamar a la funcion que se le pasa como parametro,
//si no se quiere usar atexit, simplemente se llama al metododestroySingleton()
//al final de programa
//void  Singleton::destroySingleton() {
//	if (Singleton::getInstancia()!= NULL)
//		delete Singleton::instancia;
//	cout << "................Singleton Destruido................" << endl;
//}

void destroySingleton()
{
	if (Singleton::getInstancia() != NULL)
		delete Singleton::instancia;
	cout << "................Singleton Destruido................" << endl;
}
