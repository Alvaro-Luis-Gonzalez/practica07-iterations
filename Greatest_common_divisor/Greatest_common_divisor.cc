/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Álvaro Luis González
 * @date 30/10/23
 * @grief El programa imprime el maximo comun divisor de 2 numeros naturales
 * dados
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << "The gcd of " << num1 << " and " << num2 << " is " << __gcd(num1, num2)
	<< "." << endl;
	}
