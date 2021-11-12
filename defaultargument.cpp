#include <iostream>
using namespace std;

double operasi(double a, double b, double c);

int main () {
	int m,n,o,hasil;
	cout <<"Masukan nilai m : ";
	cin >> m;
	cout <<"Masukan nilai n : ";
	cin >> n;
	cout <<"Masukan nilai o : ";
	cin >> o;
	hasil = operasi (m,n,o);
	cout <<hasil<<endl;
	return 0;
}
double operasi(double a, double b, double c)  {
	return a + b * c;
}