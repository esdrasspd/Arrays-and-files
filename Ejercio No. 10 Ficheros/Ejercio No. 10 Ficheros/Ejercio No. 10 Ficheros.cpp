//Esdras Abel Sapon Diaz
//Carné: 3090-21-2890
//Tercer Semestre Ingenieria en Sistemas "B"


#include<iostream>
#include<fstream>

using namespace std;

struct Producto
{
	string n_p;
	float valor;
	int existencia;
};

int main() {
	int opcion = 0;

	do
	{
		cout << "Menu: " << endl;
		cout << "1. Crear un producto nuevo" << endl;
		cout << "2. Buscar un producto por su nombre" << endl;
		cout << "3. Modificar el stock y precio de un producto dado" << endl;
		cout << "0. Salir" << endl;

		cin >> opcion;

		switch (opcion)
		{
		case 1:
		{
			ofstream archivo;

			archivo.open("productos.txt", ios::app);

			if (archivo.is_open())
			{
				Producto producto;
				cout << "Nombre del producto: ";
				cin >> producto.n_p;
				cout << "Precio del producto: ";
				cin >> producto.valor;
				cout << "Cantidad en stock: ";
				cin >> producto.existencia;

				archivo << endl << producto.n_p << " " << producto.valor << " " << producto.existencia;

				archivo.close();
			}
			break;
		}
		case 2:
		{
			ifstream archivo("productos.txt");

			if (archivo.is_open())
			{
				string busqueda;
				cout << "Que producto desea buscar: ";
				cin >> busqueda;

				while (!archivo.eof())
				{
					Producto producto;
					archivo >> producto.n_p >> producto.valor >> producto.existencia;

					if (producto.n_p == busqueda)
					{
						cout << "Precio: " << producto.valor << endl;
						cout << "Cantidad en stock: " << producto.existencia << endl;
					}
				}

				archivo.close();
			}
			break;
		}
		case 3:
		{
			string busqueda;
			float nuevo_precio;
			int nuevo_stock;

			cout << "Que producto desea modificar: ";
			cin >> busqueda;

			cout << "Cual sera el nuevo precio: ";
			cin >> nuevo_precio;

			cout << "Cual sera el nuevo stock: ";
			cin >> nuevo_stock;

			ifstream archivo_entrada("productos.txt");
			ofstream archivo_salida("temporal.txt");

			if (archivo_entrada.is_open() && archivo_salida.is_open())
			{
				while (!archivo_entrada.eof())
				{
					Producto producto;
					archivo_entrada >> producto.n_p >> producto.valor >> producto.existencia;

					if (producto.n_p == busqueda)
					{
						producto.valor = nuevo_precio;
						producto.existencia = nuevo_stock;
					}

					archivo_salida << endl << producto.n_p << " " << producto.valor << " " << producto.existencia;
				}

				archivo_entrada.close();
				archivo_salida.close();

				remove("productos.txt");
				rename("temporal.txt", "productos.txt");
				break;
			}
		}
		case 0:
		{
			exit(0);
			break;
		}
		default:
			cout << "Opcion no valida" << endl;
			break;
		}
	} while (opcion != 0);

	return 0;
}