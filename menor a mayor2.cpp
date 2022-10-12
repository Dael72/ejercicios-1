#include <iostream>
using namespace std;
int main()
{
	int n1, n2 ,n3;
	cout<<"\n Introduzca el primer numero: ";
	cin>>n1;
	cout<<"\n Introduzca el segundo numero: ";
	cin>>n2;
	cout<<"\n Introduzca el tercer numero: ";
	cin>>n3;
	
	if((n1<n2) && (n1<3)){
		if(n2<n3){
		cout<<"\nLos numeros ya estan en orden";
		return 0;
		}
		else		
			cout<<"\n"<<n1;
			cout<<"\n"<<n3;
			cout<<"\n"<<n2;	
	}
	if ((n2<n1) && (n2<n3)){
			if(n3<n1){
					cout<<"\n"<<n2;
					cout<<"\n"<<n3;
					cout<<"\n"<<n1;
					return 0;	
		}
				else 
					cout<<"\n"<<n2;
					cout<<"\n"<<n1;
					cout<<"\n"<<n3;				
	}
	
	if ((n3<n1) && (n3<n2)){
		if( n1<n2){
					cout<<"\n"<<n3;
					cout<<"\n"<<n1;
					cout<<"\n"<<n2;
					return 0;
		}
		else
					cout<<"\n"<<n3;
					cout<<"\n"<<n2;
					cout<<"\n"<<n1;
					
}
return 0;

}
