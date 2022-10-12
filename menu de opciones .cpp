//menu de opciones
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	
	while(1==1){
		int numero1,numero2, a, cubo;
		cout<<"Bienvenido Que quieres hacer"<<endl;
		cout<<"\n1-Encontrar el Cubo de un numero"<<endl;
		cout<<"2-Descubre si un Numero es par o impar"<<endl;
		cout<<"3-Salir\n"<<endl;
		cin>>a;
		switch (a)
		{
			case 1:
				cout<<"Ingresa un Numero"<<endl;
				cin>>numero1;
				cubo=numero1*numero1*numero1;
				cout<<"El cubo de su numero es: " <<cubo;
				break;
			case 2:
				cout<<"ingresa un Numero"<<endl;
				cin>>numero2;
				if(numero2%2 == 0){
					cout<<"Es par"<<endl;
				}else{
					cout<<"Es Impar"<<endl;
				}
				break;
			case 3:
				cout<<"Hasta luego";
				exit(EXIT_SUCCESS);
				break;
			default:
				cout<<" La opcion no es valida"<<endl;
				break;
		}
	}
	return 0;
}

