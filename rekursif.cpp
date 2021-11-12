#include <iostream>
using namespace std;

int faktorial(int n);

int main () {
	
	int n,hasil;
	
	cout <<"Masukan Nilai n : ";
	cin >> n;
	hasil = faktorial(n);
	cout <<" Faktorialnya adalah : "<< hasil <<endl;
	
	cin.get();
	return 0;
}

int faktorial(int n) {
	
	if (n <= 1) { //if disini berperan penting sebagai batas finite dari rekursif agar program yang dihasilkan tdak berulang-ulang
		cout << n;
		return n;
	}
	else { //else bertindak sebagai fungsi rekursifnya sehingga jika jika rekursifnya mencapai angka 1 maka akan return 
		int total;
		cout << n <<" x ";
		total = n * faktorial(n-1);
		return total;
	}
}