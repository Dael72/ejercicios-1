//�Una compa��a de autom�viles vende tres tipos de autos (A, B y C), y cada uno 
//tiene un precio de venta y un porcentaje de comisi�n por venta diferentes. 
//Elabore un programa que calcule el valor de las comisiones que se deben pagar a determinado
// vendedor despu�s de haber recibido la cantidad y el tipo de autos que vendi�.
//Tenga en cuenta que:
//Comisi�n por auto tipo A: $24
//Comisi�n por auto tipo B: $33
//Comisi�n por auto tipo C: $38
#include <iostream>
using namespace std; 
int main()
{
int a=24,b=33, c=38;
int autosa, autosb, autosc, comision;
cout<< "ingrese la cantidad de autos tipo a vendidos"<<endl;
cin>>autosa;
cout<< "ingrese la cantidad de autos tipo b vendidos"<<endl;
cin>>autosb;
cout<< "ingrese la cantidad de autos tipo c vendidos"<<endl;
cin>>autosc;
comision= autosa * a + autosb * b + autosc * c;
cout<<"\n La comision es "<<comision; 
}

