#include <iostream>
using namespace std;

int main () {
	
	int n;
	cout <<"masukan tinggi segitiga : ";
	cin >> n;
	
	for (int i = 1; i <= n; i++ ) {
		for (int j = n; j > i; j-- ) {
			cout <<" ";
		}
		for (int k = 1; k <= (2*i-1); k++ ) {
			cout <<"*";
		}
		cout <<"\n";
	}
	cin.get ();
	
	return 0;
}