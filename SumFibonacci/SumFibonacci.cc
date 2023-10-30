#include<iostream>
using namespace std;

int main () {
	int num, x{0}, y{1}, z{1};
	cin >> num;
	for(int i = 1; i <= num; i++){
		z = x + y;
		cout << z << " " << endl;
		x = y;
		y = z;
	}
	return 0;
}
