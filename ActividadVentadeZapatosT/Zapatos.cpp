#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	
	short talla;
	float costo, cantidad, costototal, preciototal, utilidad, utilidadtotal/*, putilidad*/;
	int precio;
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
	
	cout<<"digite la cantidad de zapatos"<<endl;
	cin >>cantidad;
	
	cout<<"digite el costo del zapato"<<endl;
	cin>> costo;
	
	cout<<"digite el precio de venta del zapato"<<endl;
	cin>>precio;
	
	
	
	system("cls");
	
	costototal= costo*cantidad;
	preciototal= precio*cantidad;
	utilidad=precio-costo;
	utilidadtotal=(precio-costo)*cantidad;
	/*putilidad=utilidadtotal/(costo*cantidad)*100;*/
	 
	
	cout <<"Los datos registrados son los siguientes\n"<<endl;
	
	cout <<"Referencia: "<< referencia << endl;
	
	cout<<"Descripcion: "<< descripcion << endl;
	
	cout<<"Talla: "<< talla << endl;
	
	cout<<"Disponibilidad: "<< disponibilidad<< endl;
	
	cout<<"Costo: $"<< costo<< endl;
	
	cout<<"El costo total es de: $"<< costototal<<endl;
	
	cout<<"Precio: $"<< precio << endl;
	
	cout<<"El precio total de "<< cantidad << " unidades es de: $"<< preciototal<<endl;
	
	cout<<"utilidad por unidad: $"<< utilidad<<endl;
	
	cout<<"utilidad total: $"<<utilidadtotal<<endl;
	
	/*cout<<"porcentaje de utilidad: "<< putilidad <<"%"<< endl;*/
	
	cout<<endl<<"Gracias por digitar la informacion"<<endl;
	
	cout<<endl<<endl<<"Hecho por Tomas Cardona Montoya"<<endl;
	
	//Switch
	
	int porcentajeutilidad;
	
	switch(precio)
	{
				case (precio<=30000);
				putilidad= 50
	}
	
	
	
	
	//El return EXIT_SUCCESS no me funciona
	//Hecho por Tomas Cardona Montoya
	
	
	system("pause");
	return 0;
	
	

}
