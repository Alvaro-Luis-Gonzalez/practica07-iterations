/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Álvaro Luis González
 * @date 30/10/23
 * @grief El programa lee 2 secuencias de numeros y dictamina si la primera esta
 * dentro de la segunda, si la segunda esta dentro de la primera, si sendas son
 * iguales o si no hay ninguna dentro de la otra
 */

#include <iostream>
using namespace std;

int main() {
  int intervalo_a1{0}, intervalo_b1{0}, intervalo_a2{0}, intervalo_b2{0};
  cin >> intervalo_a1 >> intervalo_b1 >> intervalo_a2 >> intervalo_b2;

   if (intervalo_a1 == intervalo_a2 && intervalo_b1 == intervalo_b2) {
    cout << '=' << endl;
    return 0;
  }
  if (intervalo_a1 >= intervalo_a2 && intervalo_b1 <= intervalo_b2) {
    cout << '1' << endl;
    return 0;
  }
  if ((intervalo_a1 < intervalo_a2 && intervalo_b1 >= intervalo_b2) ||
      (intervalo_a1 <= intervalo_a2 && intervalo_b1 > intervalo_b2)) {
    cout << '2' << endl;
    return 0;
  }
  cout << '?' << endl;
  return 0;
}
