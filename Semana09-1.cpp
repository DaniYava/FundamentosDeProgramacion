//libreria iostream
#include <iostream>//
//libreria conio
#include <conio.h>
//espacio de trabajo estandar
using namespace std;
void Restar();
int Suma(int,int);


//Estructura de una funcion
int Suma(int a,int b){
 return a+b;
}
//char=oct
//char=s

int main(){
	string clave;
	for(int i=0;i<10;i++){
		char c=getch();
		if(c==13){
			cout<<"Ha introducido un caracter no permitido";
			break;
		}
		clave+=c;
		
	}
	
	cout<<clave;
	return 0;//finalizacion
}
