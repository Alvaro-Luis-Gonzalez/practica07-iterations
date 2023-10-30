#include<iostream>
using namespace std;

int main () {
	int binary, num, rem = 0, decimal = 0, weight = 1;
	cin >> binary;
	num = binary;
	while(binary != 0){
		rem = binary % 10;
		decimal = decimal + rem*weight;
		binary = binary / 10;
		weight = weight * 2;
		}
	cout << decimal << endl;
	}
		

