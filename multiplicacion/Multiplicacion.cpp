#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	int contador_tablas = 0 , factor = 1 , tabla, resultado;
	
	cout <<"TABLAS DE MULTIPLICAR"<<endl;
	
	while(contador_tablas<=10){
	
		cout<<"Tabla del: "<<contador_tablas<<endl;
		contador_tablas++;
		
		
		
	}

	cout<<"Ingrese tabla de multiplicacion"<<endl;
	cin>>tabla;

	if(tabla<=10)
	{
		int i;
		for(i=1;i<=9;i++)
			{
				resultado=tabla*i;
				cout<<tabla<<"*"<<i<<"= "<<resultado<<endl;
				
			}
	}
	else
	{
		cout<<"Numero erroneo"<<endl;
	}
	cout<<"Hecho por Tomas Cardona Montoya"<<endl;
	system("pause");
	}
	
	
	
	
	
	
	
	
	
	

