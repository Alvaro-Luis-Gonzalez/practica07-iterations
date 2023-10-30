/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Álvaro Luis González
 * @date 30/10/23
 * @grief Programa que imprime la suma de los digitos de un numero natural dado
 */

#include<iostream>
using namespace std;

int main () {
	int num, sum{0};
	cin >> num;
	while(num > 0){
		sum += num%10;
		num /= 10;
	}
	cout << sum << endl;
}
