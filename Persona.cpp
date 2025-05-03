#include<stdio.h>
#include<iostream>

class Persona{
	public:
	void imprimir();
	void imprimir(int num){
		printf("Con numero");
	}
};

void Persona::imprimir(){
	printf("Hola");
}
int main(){
	Persona p1=Persona();
	p1.imprimir();
	p1.imprimir(4);
	return 0;
}
