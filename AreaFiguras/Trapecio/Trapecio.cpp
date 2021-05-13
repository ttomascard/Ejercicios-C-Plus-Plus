#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float basemayor, basemenor, altura, resultado;
	cout<<"Calcule el area de un trapecio"<<endl;
	cout<<endl<<"Ingrese la longitud de la base mayor del trapecio"<<endl;
	cin>>basemayor;
	
	cout<<"Ingrese la longitud de la base menor del trapecio"<<endl;
	cin>>basemenor;
	
	cout<<"Ingrese la longitud de la altura del trapecio"<<endl;
	cin>>altura;
	
	system("cls");
	resultado= (basemayor+basemenor)/2*4;
	cout<<"El area del trapecio es: "<<resultado<<endl;
	cout<<endl<<"Hecho por Tomas Cardona Montoya"<<endl;
	//Hecho por Tomas Cardona Montoya
	system("pause");
	
	
	
}
