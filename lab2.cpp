#include <iostream> 
#include <math.h>
#define pi 3.1415926535897
#include <iomanip>

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
	
	if (primerX < 0){
		primerX = primerX * -1;
		cout<<"(x+"<<primerX<<")"<<endl;
	}
	else 
		cout<<"(x"<<primerX*-1<<")"<<endl;

	if (segundaX < 0){
		segundaX = segundaX * -1;
		cout<<"(x+"<<segundaX<<")"<<endl;
	}else
		cout<<"(x"<<segundaX<<")"<<endl;
	
	delete[] arreglo;
	
	} else 
		cout << "No es factorizable. ";
}	

void ejercicio2(){
	
	long double grados, radianes;

	cout << "Ingrese el angulo en grados: "<<endl;
	cin >> grados;

	//lo convierto en radianes
	radianes = grados*(pi/180);
	cout<<"en radianes es: "<<radianes<<endl;
		
	long double respuestaSeno = radianes, respuestaCoseno = 1;
	for (int  i = 1; i < 5; i++){
		int n = 2*i, denominador1 = 2*i;
		int n2 = 2*i + 1, denominador2 = 2*i+1;
		
		//este for calcula el factorial de n y n2 para la formula. 
		for (int j = 1; j < n2; j++){
			n2 *= j;
		}
		
		respuestaSeno +=  (pow(-1,i) * pow(radianes,2*i+1)) / n2;

	}//fin for de serie

	for (int i = 1; i < 10; i++){
		int n = 2*i, denominador1 = 2*i;
		for (int j = 1; j < n; j++){
		       n*=j;
		}
 			
		respuestaCoseno += ( pow(-1,i) * pow(radianes,2*i)) / n;
	}
cout <<"Respuesta en radianes de seno de "<<grados<<" ="<<respuestaSeno<<endl
		<<"Respuesta en radianes de coseno de "<<grados<<" ="<<respuestaCoseno<<endl;


}



void TrianguloPascal(int n){
//
//•//
//○//
//
// std::cout << std::setw(10);
//  std::cout << 77 << std::endl;
//
	int espacios = n;	
	for(int i = espacios; i > 0; i--){
		cout<< std::setw(i);
		for (int j = 1; j <= n; j++){
			if (j%2 == 0)
			       cout<<"○";
			else 
				cout<<"•";
		}
		cout<<endl;

	}


}

int main(){
	int opcion = 0;
	while (opcion != 4){
		switch (opcion = menu()){
			case 1:
				ejercicio1();
			break;
			
			case 2:
				ejercicio2();
			break;

			case 3:
				int n;
				cout<<"Ingrese numero de lineas: "<<endl;
				cin >> n;
				TrianguloPascal(n);
			break;
		}
	}
	return 0;
};

