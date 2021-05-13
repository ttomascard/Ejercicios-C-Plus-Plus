#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	
	short talla, stipo;
	float costo, precio, cantidad, costototal, preciototal, utilidad, utilidadtotal, putilidad;
	char descripcion [120];
	char disponibilidad;
	char referencia [80];
	const char *tipo;
	
	
	
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
	

	
	
	
	system("cls");
	 
	
	cout <<"Los datos registrados son los siguientes\n"<<endl;
	
	cout <<"Referencia: "<< referencia << endl;
	
	if (costo <= 30000){
        stipo = 1;
    }
    else if (costo>30000 && costo<= 60000){
        stipo = 2;
    }
    else{
        stipo = 3;
    }

    switch(stipo){
        case 1:
            tipo = "A";
            putilidad = 50;
            break;
        case 2:
            tipo = "B";
            putilidad = 40;
            break;
        default:
            tipo = "C";
            putilidad = 30;
            break;

    }
	
		costototal= costo*cantidad;
	utilidad=costo*(putilidad/100);
	utilidadtotal=utilidad*cantidad;
	precio=costo+utilidad;
	preciototal=precio*cantidad;
	
	cout<<"Descripcion: "<< descripcion << endl;
	
	cout<<"Talla: "<< talla << endl;
	
	cout<<"Disponibilidad: "<< disponibilidad<< endl;
	
	cout<<"El tipo es: "<<tipo<<endl;
	
	cout<<"Costo: $"<< costo<< endl;
	
	cout<<"El costo total es de: $"<< costototal<<endl;
	
	cout<<"Precio: $"<< precio << endl;
	
	cout<<"El precio total de "<< cantidad << " unidades es de: $"<< preciototal<<endl;
	
	cout<<"utilidad por unidad: $"<< utilidad<<endl;
	
	cout<<"utilidad total: $"<<utilidadtotal<<endl;
	
	cout<<"porcentaje de utilidad: "<< putilidad <<"%"<< endl;
	
	cout<<endl<<"Gracias por digitar la informacion"<<endl;
	
	cout<<endl<<endl<<"Hecho por Tomas Cardona Montoya"<<endl;
	
	
	
	
	//El return EXIT_SUCCESS no me funciona
	//Hecho por Tomas Cardona Montoya
	
	
	system("pause");
	
	
	

}
