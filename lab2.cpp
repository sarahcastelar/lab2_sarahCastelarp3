#include <iostream> 
#include <math.h>
#define pi 3.1415926535897

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
		<< "3. Triangulo Pascal" << endl
		<< "4. Salir"<<endl
		<< "Ingrese una opcion: "<<endl;
		cin >> opcion;

		if (opcion < 1 || opcion > 4)
			cout <<"Opcion incorrecta, ingrese de nuevo."<<endl;
		else 
			return opcion;
	}
}

void ejercicio1(){

	double grado2, grado1, constante;
	double *arreglo = new double [3];
	double determinante, primerX, segundaX;

	cout<<"Ingrese el numero del grado 2 (ax^2)"<<endl;
	cin >> arreglo[0];
	cout<<"Ingrese el numero del grado 1 (x)"<<endl;
	cin >> arreglo[1];
	cout << "Ingrese constante: "<<endl;
	cin >> arreglo[2];

	grado2 = arreglo[0];
	grado1 = arreglo[1];
	constante = arreglo[2];

	//primero se calcula el determinante, para ver si la ecuacion es factorizable.
	//b^2 - 4ac
	determinante = ( (grado1*grado1) - (4*(grado1)*(constante))); 

	if (determinante > 0){
		//usa la formula cuadratica
	primerX = ((-1*grado1) + sqrt((grado1*grado1)-(4*grado2*constante)))/(2*grado2);
	segundaX = ((-1*grado1)- sqrt((grado1*grado1)-(4*grado2*constante)))/(2*grado2);
	

	cout << "La respuesta es: x="<<primerX<<" y x="<<segundaX<<endl;	
	delete[] arreglo;
	
	} else 
		cout << "No es factorizable. ";
}	

void ejercicio2(){
	
	double grados, radianes;

	cout << "Ingrese el angulo en grados: "<<endl;
	cin >> grados;

	//lo convierto en radianes
	radianes = grados*(pi/180);
	
	int respuestaSeno = 0, respuestaCoseno = 0;
	for (int i = 0; i < 100; i++){
		int n = 2*i;
		int n2 = 2*1 + 1;
		
		//este for calcula el factorial de n y n2 para la formula. 
		for (int i = 1; i < n; i++){
			n *= i;
			n2 *= i;
		}

		respuestaSeno += ( pow(-1,i) * pow(radianes,(2*i+1) ) / n2);
		respuestaCoseno += ( pow(-1,i) * pow(radianes,(2*i)) / n);

	}//fin for de serie

//hacer el coso para imprimirlo si es int, pasarlo a int, y si es decimal pasarlo a dos decimales



}

int main(){
	int opcion = 0;
	while (opcion != 4){
		switch (opcion = menu()){
			case 1:
				ejercicio1();
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

