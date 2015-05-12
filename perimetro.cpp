/*TP #5 - Perimetro de Rectangulo - El usuario ingrese la base y la altura de un rectángulo y el programa después de validar los datos calcula el perímetro de dicho rectángulo
  Biondi, Rolando Ezequiel
  12/05/215
*/

#include <iostream>

using namespace std;

double getNumPositivo();
double getPerimetro(double b, double h);

int main (){
	double h, b;
	cout<<"Ingrese la base del rectangulo: ";
	b = getNumPositivo();
	cout<<"\nIngrese la altura del rectangulo: ";
	h = getNumPositivo();
	cout<<"\nEl perimetro del rectangulo es "<<getPerimetro(h,b);
}

double getNumPositivo(){
    double lado;
    do{
        cin>>lado;
        if(lado>0){
            return lado;
        }
        else{
            cout<<"Ingrese un numero mayor a 0: ";
        }
    }while(lado<=0);
}

double getPerimetro(double b, double h) {
    return 2*(b+h);
}
