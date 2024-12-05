#include <iostream>
#include <string>
using namespace std;

int main() {
	string cadena, cadena2, cadena3="", cadena4;
	int opcion, cantidad, opcion1, contador=0;
	char caracter;
	//cadena3= "";
	
	cout << "Ingrese opcion:"<< endl;
	cout << "1. Longitud de Cadena." << endl;
	cout << "2. Concatenacion de Cadena." << endl;
	cout << "3. Cadena al reverso." << endl;
	cout << "4. Cantidad de Caracter especifico." << endl;
	cout << "5. Cantidad de caracteres en Cadena." << endl;
	cin >> opcion;
	
	while (opcion1!=7){
		
	switch (opcion){
		case 1:
			cout << "Ingrese Cadena: " << endl;
			cin >> cadena;
			cout << "La longitud de la cadena es: " << cadena.length() << endl;
			
			break;
		case 2:
			cout << "Ingrese dos cadenas: " << endl;
			cin >> cadena;
			cout << endl;
			cin >> cadena2;
			cout << endl;
			cout << "Las cadenas concatenadas: " << cadena+cadena2 << endl;
			
			break;
		case 3:
			cout << "Ingresa una cadena: " <<endl;
			cin >> cadena2;
			cantidad = cadena2.length();
			
			for (int i=cantidad-1; i>=0; i--){
				cadena3 = cadena3 +cadena2.at(i);
			}
			cout << "La cadena al reverso es: " << cadena3 << endl;
			
			break;
			
		case 4:
			cout << "Ingresa cadena: " <<endl;
			cin >> cadena;
			cout << "Ingrense caracter especifico que desea buscar: " << endl;
			cin >> caracter;
			
			for (int i=cadena.size(); i>=0; i--){
				if(caracter==cadena[i]){
					contador=contador+1;
				}
				}
				
			cout << "La letra " << caracter << " aparece " << contador << " de veces en la palabra." << endl;
			
			break;
			
		case 5:
			cout << "Ingrese Cadena: " << endl;
			cin >> cadena;
			cout << "La longitud de la cadena es: " << cadena.length() << endl;
				
		break;
			
		
			
	}
	
	cout << "Ingrese opcion:"<< endl;
	cout << "1. Longitud de Cadena." << endl;
	cout << "2.Concatenacion de Cadena." << endl;
	cout << "3. Cadena al reverso." << endl;
	cout << "4. Cantidad de Caracter especifico." << endl;
	cout << "5. Cantidad de caracteres en Cadena." <<endl;
	cin >> opcion;
}
	

	return 0;
}
