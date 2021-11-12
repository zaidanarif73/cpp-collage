#include <iostream>
using namespace std;

int main () {
	
	int n;
	cout <<"Program segitiga sama kaki "<<endl;
	cout <<"masukan nilai n: ";
	cin >> n;
	
//normal
	for (int i = 1; i <= n; i++ ) {
		for (int j = n; j > i; j--) {
			cout <<" ";
		}
	for (int k = 1; k <= (2*i - 1); k++ ) {
			cout <<"*";
		}
		cout <<"\n";
	}
	cout <<"\n"<<endl;
//terbalik	
	for (int i = 1; i <= n; i++ ) {
		for (int j = 1; j < i; j++) {
			cout <<" ";
		}
		for (int k = n; k >=(2*i - n); k-- ) {
			cout <<"*";
		}
		cout <<"\n";
	}
	
	cin.get();
	
	return 0;
}