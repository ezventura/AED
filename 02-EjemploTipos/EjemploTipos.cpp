// 02-EjemploTipos.cpp
// Ejemplificar la aplicación de tipos de datos
// E.Ventura
// 20200518

#include <iostream>

using namespace std;

int main() {

// Tipo de dato INT: En base a dos numeros, se va a realizar la suma y resta de los mismos.

	int a=8, b=4, suma, resta;
	
	suma = a+b;
	resta = a-b;
	
	cout << "La suma entre 8 y 4 es: " << suma << endl;
	cout << "La resta entre 8 y 4 es: " << resta << endl;

// Tipo de dato DOUBLE: En base a dos numeros, se va a realizar la multiplicacion y divison de los mismos.

	double c=12.55556, d=4.58878, multi, divi;

	multi = c*d;
	divi = c/d;

	cout << "La multiplicacion entre 12.55556 y 4.58878 es: " << multi << endl;
	cout << "La division entre 12.55556 y 4.58878 es: " << divi << endl;
	
// Tipo de dato BOOL: En base a dos valores booleanos, se va a realizar la operacion AND y OR.
 
	bool T=true, F=false, opeand, opeor;
	
	opeand = T and F;
	opeor = T or F;
	
	cout << "La operacion entre True AND False es: " << opeand << endl;
	cout << "La operacion entre True OR False es: " << opeor << endl;
	
// Tipo de dato UNSIGNED: En base a 4 notas, se va a realizar el promedio de un alumno.

	unsigned n1=7, n2=8, n3=4, n4=5, promedio;
	
	promedio = (n1 + n2 + n3 + n4)/4;
	
	cout << "El promedio del alumno es: " << promedio << endl;

// Tipo de dato CHAR: En base a ambos sexos, aclarar el primer caracter.

	char hombre='H', mujer='M';
	
	cout << "El primer caracter de la palabra hombre es: " << hombre << endl;
	cout << "El primer caracter de la palabra mujer es: " << mujer << endl;
	
// Tipo de dato STRING: En base a la edad de Juan (82) y Micaela (21), aclarar si es joven o anciano/a.

	string j = "Joven", an = "Anciano/a";
	
	cout << "Por su edad Juan es: " << j << endl;
	cout << "Por su edad Micaela es: " << an << endl;

}

	
	
