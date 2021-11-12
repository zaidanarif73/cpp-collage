#include <iostream>
using namespace std;

int perkalian (int a, int b) {
	int c;
	c = a + b;
	return c;
}
int main () {
	
	int hasil, a, b;
	
	cout <<"masukan nilai a : ";
	cin >> a;
	cout <<"masukan nilai b : ";
	cin >> b;
	
	cout << perkalian ( a, b ) <<endl;
	
	return 0;
}