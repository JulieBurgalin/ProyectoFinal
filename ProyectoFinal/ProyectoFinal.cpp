#include<iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

struct datos_Cita {
	string nombrepac;//cambio d variable char a string
	string apellipac;
	string hortra;//cambio d int a string
	int numtra;
	string descri;
	float put;
	float ctrat;//cambio d int a float
	float putsi;
	float putci;
	float totci;
	int numcita;
}cita[8];

void Archivo();
int i = 0;
int cont = 0;

int main() {
	int A, opcion, x, B, j;

	int op = 0;
	cout << "\tRegistro de Citas Dentales\n" << endl;
	do
	{
		cout << "1.- Agendar cita" << endl;
		cout << "2.- Modificar cita" << endl;
		cout << "3.- Lista de citas" << endl;
		cout << "4.- Eliminar cita" << endl;
		cout << "5.- Salir" << endl;
		cin >> A;
		switch (A)
		{
		case 1:
		{
			do {
				system("cls");
				cita[i].numcita = i + 1;
				cout << "Su numero de cita es:" << cita[i].numcita << endl;
				while (getchar() != '\n');

				cout << "Nombre:   ";
				cin.ignore();
				getline(cin, cita[i].nombrepac);

				cout << "Apellido:  ";
				cin.ignore();
				getline(cin, cita[i].apellipac);

				cout << "Hora de tratamiento:   ";
				cin >> cita[i].hortra;

				cout << "\n\tLos tratamientos son:";
				cout << "\n1.- Blanqueamiento Dental:" << endl;
				cout << "Eliminar las manchas dentales y haciendola mas blanca y brillante." << endl;

				cout << "\n2.- Carillas Dentales:" << endl;
				cout << "Se enmascararan o tapan problemas dentales." << endl;

				cout << "\n3.- Extraccion de muelas:" << endl;
				cout << "Es un procedimiento para extraer un diente de la encia." << endl;

				cout << "\n4.- Ortodoncia Brackets:" << endl;
				cout << "Se utilizan para corregir la posicion de los dientes." << endl;

				cout << "\n5.- Tratamiento Periodontal:" << endl;
				cout << "Consiste en limpiar de manera profesional los sacos dentales." << endl;

				cout << "Opcion de tratamiento:   ";
				cin >> cita[i].numtra;

				switch (cita[i].numtra) {
				case 1:
					cout << "Cantidad de tratamiento:   ";
					cin >> cita[i].ctrat;

					cout << "Precio Unitario del Tratamiento:  " << cita[i].put << endl;
					cita[i].put = 500;

					cout << "Precio Unitario del Tratamiento sin impuestos:   " << cita[i].putsi << endl;
					cita[i].putsi = cita[i].put * cita[i].ctrat;

					cout << "Total con impuestos:   " << cita[i].putci << endl;
					cita[i].putci = cita[i].putsi * 1.16;
					break;
				case 2:
					cout << "Cantidad de tratamiento:   ";
					cin >> cita[i].ctrat;

					cout << "Precio Unitario del Tratamiento:  " << cita[i].put << endl;
					cita[i].put = 1500;

					cout << "Precio Unitario del Tratamiento sin impuestos:   " << cita[i].putsi << endl;
					cita[i].putsi = cita[i].put * cita[i].ctrat;

					cout << "Total con impuestos:   " << cita[i].putci << endl;
					cita[i].putci = cita[i].putsi * 1.16;
					break;
				case 3:
					cout << "Cantidad de tratamiento:   ";
					cin >> cita[i].ctrat;

					cout << "Precio Unitario del Tratamiento:  " << cita[i].put << endl;
					cita[i].put = 2000;

					cout << "Precio Unitario del Tratamiento sin impuestos:   " << cita[i].putsi << endl;
					cita[i].putsi = cita[i].put * cita[i].ctrat;

					cout << "Total con impuestos:   " << cita[i].putci << endl;
					cita[i].putci = cita[i].putsi * 1.16;
					break;
				case 4:
					cout << "Cantidad de tratamiento:   ";
					cin >> cita[i].ctrat;

					cout << "Precio Unitario del Tratamiento:  " << cita[i].put << endl;
					cita[i].put = 4000;

					cout << "Precio Unitario del Tratamiento sin impuestos:   " << cita[i].putsi << endl;
					cita[i].putsi = cita[i].put * cita[i].ctrat;

					cout << "Total con impuestos:   " << cita[i].putci << endl;
					cita[i].putci = cita[i].putsi * 1.16;
					break;
				case 5:
					cout << "Cantidad de tratamiento:   ";
					cin >> cita[i].ctrat;

					cout << "Precio Unitario del Tratamiento:  " << cita[i].put << endl;
					cita[i].put = 1700;

					cout << "Precio Unitario del Tratamiento sin impuestos:   " << cita[i].putsi << endl;
					cita[i].putsi = cita[i].put * cita[i].ctrat;

					cout << "Total con impuestos:   " << cita[i].putci << endl;
					cita[i].putci = cita[i].putsi * 1.16;
					break;
				}
				cout << "¿quiere sacar otra cita?\n";
				cout << "1.- Si" << endl;
				cout << "2.- No" << endl;
				cin >> x;
				i++;
				cont = cont + 1;
			} while (x == 1);
			system("cls");
			return main();
			break;
		}
		case 2: {
			do {
				system("cls");
				cout << "ingrese el registro que desea modificar";
				cin >> B;
				B = B - 1;
				cout << "ingrese que desea modificar" << endl;
				cout << "1.nombre y apellido" << endl;
				cout << "2.hora de tratamiento" << endl;
				cout << "3.Nombre de tratamiento" << endl;
				cout << "4.Cantidad de tratamiento" << endl;
				cin >> opcion;
				switch (opcion) {
				case 1: {
					system("cls");
					cout << "Haz elejido la opcion de nombre y apellido" << endl;
					for (int i = 0 - B; i == B; i++) {
						cout << "Nombre:   ";
						cin >> cita[i].nombrepac;
						cout << "Apellido:  ";
						cin >> cita[i].apellipac;
						system("cls");
						cout << "Guardado con exito" << endl;
						cout << "¿Quiere regresar al menu?\n";
						cout << "1.- Si" << endl;
						cout << "2.- No" << endl;
						cin >> op;
					}
					break;
				}
				case 2: {
					for (int i = 0 - B; i == B; i++) {
						cout << "Hora de tratamiento:   ";
						cin >> cita[i].hortra;
						system("cls");
						cout << "Guardado con exito" << endl;
						cout << "¿Quiere regresar al menu?\n";
						cout << "1.- Si" << endl;
						cout << "2.- No" << endl;
						cin >> op;
					}
					break;
				}
				case 3: {
					for (int i = 0 - B; i == B; i++) {
						cout << "\n\tLos tratamientos son:";
						cout << "\n1. Blanqueamiento Dental:" << endl;
						cout << "Eliminar las manchas dentales y haciendola mas blanca y brillante." << endl;

						cout << "\n2. Carillas Dentales:" << endl;
						cout << "Se enmascararan o tapan problemas dentales." << endl;

						cout << "\n3. Extraccion de muelas:" << endl;
						cout << "Es un procedimiento para extraer un diente de la encia." << endl;

						cout << "\n4. Ortodoncia Brackets:" << endl;
						cout << "Se utilizan para corregir la posicion de los dientes." << endl;

						cout << "\n5. Tratamiento Periodontal:" << endl;
						cout << "Consiste en limpiar de manera profesional los sacos dentales." << endl;

						cout << "Opcion de tratamiento:   ";
						cin >> cita[i].numtra;
						system("clas");
						cout << "Guardado con exito" << endl;
						cout << "¿Quiere regresar al menu?\n";
						cout << "1.- si" << endl;
						cout << "2.- No" << endl;
						cin >> op;
					}
					break;
				}
				case 4: {
					for (int i = 0 - B; i == B; i++) {
						cout << "Cantidad de tratamiento:   ";
						cin >> cita[i].ctrat;
						system("clas");
						cout << "Guardado con exito" << endl;
						cout << "¿Quiere regresar al menu?\n";
						cout << "1.- Si" << endl;
						cout << "2.- No" << endl;
						cin >> op;
					}
					break;
				}
				}
			} while (i <= 8);
			break;
		}
		case 3: {
			system("cls");
			cout << "Ha seleccionado lista de citas" << endl;
			cout << "¿Es correcto...?\n";
			cout << "1.- Si" << endl;
			cout << "2.- No" << endl;
			cin >> opcion;

			if (opcion == 1) {

				for (i = 0; i < cont; i++) {
					cita[i].numcita = i + 1;
					cout << "su cita es:" << cita[i].numcita << endl;
					cout << "Nombre:  " << cita[i].nombrepac << endl;
					cout << "Apellido:  " << cita[i].apellipac << endl;
					cout << "Hora de tratamiento:  " << cita[i].hortra << endl;
					cout << "Opcion de tratamiento:   " << cita[i].numtra << endl;
					cout << "Precio unitario de tratamiento:   " << cita[i].put << endl;
					cout << "Cantidad de tratamiento:  " << cita[i].ctrat << endl;
					cout << "Precio unitario de tratamiento sin impuestos:   " << cita[i].putsi << endl;
					cout << "Total con impuestos:    " << cita[i].putci << endl;
				}
				cout << "¿Quiere regresar al menu?\n";
				cout << "1.- Si" << endl;
				cout << "2.- No" << endl;
				cin >> op;
				system("cls");
			}
			else {
				system("cls");
			}
			break;
		}
		case 4: {
			system("cls");
			cout << "Haz elejido la opcion de eliminar cita" << endl;
			cout << "Ingrese el numero de cita a eliminar: ";
			cin >> j;
			j = j - 1;

			for (int i = j; i == j; i++) {
				cita[i].nombrepac = "";
				cita[i].apellipac = "";
				cita[i].hortra = "";
				cita[i].numtra = 0;
				cita[i].descri = "";
				cita[i].put = 0;
				cita[i].ctrat = 0;
			}
			system("cls");
			cout << "Cita eliminada correctamente..." << endl;
			cout << "¿Quiere regresar al menu?\n";
			cout << "1.- si" << endl;
			cout << "2.- No" << endl;
			cin >> op;

			break;
		}
		case 5: {
			cout << "Gracia por usar el programa. Adios!" << endl;
			system("pause");
			Archivo();
		}
		default:
			system("cls");
			cout << "ERROR." << endl;
		}
	} while (op != 5);
	system("pause");
}

void Archivo() {
	ofstream archivo("cita.txt", ios::out);
	for (int j = 0; j < cont; j++) {
		archivo << "su cita es:" << cita[j].numcita << endl;
		archivo << "Nombre:  " << cita[j].nombrepac << endl;
		archivo << cita[j].apellipac << endl;
		archivo << cita[j].hortra << endl;
		archivo << cita[j].numtra << endl;
		archivo << cita[j].descri << endl;
		archivo << cita[j].put << endl;
		archivo << cita[j].ctrat << endl;
		archivo << cita[j].putsi << endl;
		archivo << cita[j].putci << endl;
	}
	archivo.close();
}