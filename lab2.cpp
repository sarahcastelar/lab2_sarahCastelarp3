#include <iostream> 

using std::cout;
using std::endl;
using std::cin;
using std::string;

int menu(){
	int opcion = 0;
	while (true){
		cout<<" MENU LAB 2"<<endl
		<< "1. Factorizar" <<endl
		<< "2. Serie seno y coseno" << endl
		<< "3. Triangulo Pascal" << end
		<< "4. Salir"<<endl
		<< "Ingrese una opcion: "<<end;
		cin >> opcion;

		if (opcion < 1 || opcion > 4)
			cout <<"Opcion incorrecta, ingrese de nuevo."<<endl;
		else 
			return opcion;
	}
}





int main(){
	int opcion = 0;
	while (opcion != 4){
		switch (opcion = menu()){
			case 1:
			//	ejercicio1();
			break;
			
			case 2:
			//	ejercicio2();
			break;

			case 3:
			//	ejercicio3();
			break;
		}
	}
	return 0;
};

