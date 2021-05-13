#include <iostream>

using namespace std;

int main()
{
	short talla;
	int costo, precio;
	char descripcion [120];
	char disponibilidad;
	char referencia [80];
	
	cout <<"Administrar venta de zapatos\n"<< endl;
	cout <<"Digite la referencia del zapato"<< endl;
	cin >>referencia;
	cin.ignore(256, '\n');
	
	cout <<"digite una descripcion del zapato"<<endl;
	cin.getline(descripcion, 120);
	
	cout <<"digite la talla"<<endl;
	cin >>talla;
	
	cout <<"digite la letra si esta disponible para la venta S/N"<<endl;
	cin >>disponibilidad;
	
	cout<<"digite el costo del zapato"<<endl;
	cin>> costo;
	cout<<"digite el precio de venta del zapato"<<endl;
	cin>>precio;
	
	system("cls");
	cout <<"Los datos registrados son los siguientes\n"<<endl;
	
	cout <<"Referencia: "<< referencia << endl;
	cout<<"Descripcion: "<< descripcion << endl;
	cout<<"Talla: "<< talla << endl;
	cout<<"Disponibilidad: "<< disponibilidad<< endl;
	cout<<"Costo: $"<< costo<< endl;
	cout<<"Precio: $"<< precio << "\n"<< endl;
	cout<<"Gracias por digitar la informacion"<<endl;
	cout<<"Hecho por Tomas Cardona Montoya"<<endl;
	
	//El return EXIT_SUCCESS no me funciona
	//Hecho por Tomas Cardona
	
	
	system("pause");
	
	

}
