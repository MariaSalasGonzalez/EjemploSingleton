#include"Singleton.h"

int main() {

	cout << endl << endl;
	cout << "..................Patron Singleton.................." << endl;
	cout << "...................................................." << endl;
	cout << endl << endl;
	cout << "................Creando al Singleton 1.............." << endl;
	Singleton* singleton1 = Singleton::getInstancia();
	//Se crea el singleto, se lo asigno a singleton1
	cout << "...................................................." << endl;
	cout << "La informacion que tiene la instancia es:\t" << singleton1->getValor();
	cout << endl << endl;
	cout << "....Se puede setear al Singleton en 10 su valor...." << endl;
	singleton1->setValor(10);
	cout << "La nueva informacion que tiene la instancia es:\t " << singleton1->getValor() << endl;
	cout << endl << endl;
	cout << ".....Tratar de hacer otro Singleton...singleton2...." << endl;
	Singleton* singleton2 = Singleton::getInstancia();//ERROR porque devuelve el mismo objeto 
	cout << "..........Ver el contenido de Singleton2.........." << singleton2->getValor() << endl;
	cout << endl << endl;
	cout << "....Seteando a singleton2 con valor igual a 20....." << endl;
	singleton2->setValor(20);
	cout << "Si singleton1 y singleton2 son el mismo, deben tener " << endl
		<< "lo mismo internamente." << endl;
	cout << "La informacion que tiene singleton1 es...\t" << singleton1->getValor() << endl;
	cout << "La informacion que tiene singleton2 es...\t" << singleton2->getValor() << endl;
	cout << endl << endl;
	cout << "...............Destruir el Singleton..............." << endl;
	singleton1->destroySingleton();
	/*singleton2->destroySingleton();*////excepcion  porque no existe el 1 ele
	cout << endl << endl;

	system("pause");
	return 0;

}