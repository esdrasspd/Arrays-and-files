#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

struct Alumno
{
	string nom;
	float calificacion;
};

int main() {
	int menu = 0;

	do
	{
		cout << "Menu" << endl;
		cout << "1 - Buscar un alumno" << endl;
		cout << "2 - Modificar la nota de un alumno" << endl;
		cout << "3 - Realizar la media de todas las notas" << endl;
		cout << "4 - Realizar la media de las notas menores de 5" << endl;
		cout << "5 - Mostrar el alumno que mejores notas ha sacado" << endl;
		cout << "6 - Mostrar el alumno que peores notas ha sacado" << endl;
		cout << "0 - Salir" << endl;

		cin >> menu;

		switch (menu)
		{
		case 1:
		{
			ifstream archivo("datos.txt");
			Alumno alumnos[20]{};
			int index = 0;
			string busqueda;

			if (archivo.is_open())
			{
				while (!archivo.eof())
				{
					Alumno alumno;
					archivo >> alumno.nom >> alumno.calificacion;
					alumnos[index] = alumno;
					index++;
				}

				archivo.close();

				cout << "A quien esta buscando: ";
				cin >> busqueda;

				for (int i = 0; i < 20; i++)
				{
					if (alumnos[i].nom == busqueda)
					{
						cout << "Nota: " << alumnos[i].calificacion << endl;
					}
				}
			}
			break;
		}
		case 2:
		{
			string busqueda;
			float nueva_nota;
			cout << "A quien desea modificar: ";
			cin >> busqueda;

			cout << "Cual es la nueva nota: ";
			cin >> nueva_nota;

			ifstream archivo_de_entrada("datos.txt");
			ofstream archivo_de_salida("temporal.txt");

			if (archivo_de_entrada.is_open() && archivo_de_salida.is_open())
			{
				while (!archivo_de_entrada.eof())
				{
					Alumno alumno;
					archivo_de_entrada >> alumno.nom >> alumno.calificacion;

					if (alumno.nom == busqueda)
					{
						alumno.calificacion = nueva_nota;
					}

					archivo_de_salida << endl << alumno.nom << " " << alumno.calificacion;
				}

				archivo_de_entrada.close();
				archivo_de_salida.close();

				remove("datos.txt");
				rename("temporal.txt", "datos.txt");
			}

			break;
		}
		case 3:
		{
			ifstream archivo("datos.txt");
			Alumno alumnos[20]{};
			int index = 0;
			float suma = 0;

			if (archivo.is_open())
			{
				// Mientras todavía haya información entonces haz esto...
				// eof = end open file
				while (!archivo.eof())
				{
					Alumno alumno;
					archivo >> alumno.nom >> alumno.calificacion;
					alumnos[index] = alumno;
					index++;
				}

				archivo.close();

				for (int i = 0; i < 20; i++)
				{
					suma += alumnos[i].calificacion;
				}

				cout << "La media es : " << suma / 20 << endl;
			}

			break;
		}
		case 4:
		{
			ifstream archivo("datos.txt");
			vector<Alumno> alumnos{};
			float suma = 0;

			if (archivo.is_open())
			{
				// Mientras todavía haya información entonces haz esto...
				// eof = end open file
				while (!archivo.eof())
				{
					Alumno alumno;
					archivo >> alumno.nom >> alumno.calificacion;
					if (alumno.calificacion <= 50)
					{
						alumnos.push_back(alumno);
					}
				}

				archivo.close();

				for (int i = 0; i < alumnos.size(); i++)
				{
					suma += alumnos[i].calificacion;
				}

				cout << "La media de alumnos con promedio < la mitad es: " << suma / alumnos.size() << endl;
			}

			break;
		}
		case 5:
		{
			ifstream archivo("datos.txt");
			Alumno mejor_alumno;

			if (archivo.is_open())
			{
				while (!archivo.eof())
				{
					Alumno alumno;
					archivo >> alumno.nom >> alumno.calificacion;

					if (alumno.calificacion > mejor_alumno.calificacion)
					{
						mejor_alumno = alumno;
					}
				}

				archivo.close();

				cout << "El mejor alumno es " << mejor_alumno.nom << " con " << mejor_alumno.calificacion << endl;
			}
			break;
		}
		case 6:
		{
			ifstream archivo("datos.txt");
			Alumno alumnos[20]{};
			Alumno* peor_alumno = NULL;
			int index = 0;

			if (archivo.is_open())
			{
				while (!archivo.eof())
				{
					Alumno alumno;
					archivo >> alumno.nom >> alumno.calificacion;
					alumnos[index] = alumno;
					index++;
				}

				archivo.close();

				for (int i = 0; i < 20; i++)
				{
					if (peor_alumno == NULL || alumnos[i].calificacion < peor_alumno->calificacion)
					{
						peor_alumno = &alumnos[i];
					}
				}

				cout << "El peor alumno es " << peor_alumno->nom << " con " << peor_alumno->calificacion << endl;
			}
			break;
		}
		default:
			break;
		}
	} while (menu != 0);

	return 0;
}