#ifndef SINGLETON_H
#define SINGLETON_H
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
using namespace std;


class Singleton {
private:
	int valor;//lo que guarda el singleton
	static Singleton* instancia;//se crea un atributo de la misma clase

	Singleton(int  val = 0) {//constructor privado
		valor = val;
	}
public:
	virtual ~Singleton();
	void setValor(int valor);
	int getValor();
	static Singleton* getInstancia();
	friend void destroySingleton(); 
	 //static void destroySingleton();//se genera una excepcion

};
#endif // !SINGLETON_H

