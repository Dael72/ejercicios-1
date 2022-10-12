//Diseña un programa que solicite el radio r de una circunferencia y muestre por pantalla su
//perímetro y su área
#include<iostream>
using namespace std;

int main()
{
double r, a, p, pi;
	pi=3.14;
    cout<<"ingrese el radio: \n";
    cin>>r;
	p=2*pi*r;
    a=(r*r)*pi;
    cout<< "El area del circulo es: "<<a;
 	cout<<"\n El perimetro es: " <<p;
    return 0;
}

