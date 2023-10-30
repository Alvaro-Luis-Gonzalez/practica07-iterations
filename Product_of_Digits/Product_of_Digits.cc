/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Álvaro Luis González
 * @date 30/10/23
 * @grief El programa lee un numero y multiplica sus digitos, eliminando el
 * ultimo digito cada vez que hace una operacion hasta que el resultado es de
 * una sola cifra.
 */

#include <iostream>
using namespace std;

int main() {
  unsigned int numero, n;
  
  while (cin >> numero) {
    if (numero < 10) {
		cout << "The product of the digits of " << numero << " is " << numero<< "."<<endl;}
    while (numero >= 10) {
   		n= numero;
    	int product{1};
    	while (numero != 0) {
        product *=  (numero % 10);
        numero = numero / 10;
      }
	cout << "The product of the digits of " << n << " is " << product << "." << endl;
      numero = product;
    }
    cout << "----------"<<endl;
    }
  return 0;
}
