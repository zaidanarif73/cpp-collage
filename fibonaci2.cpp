#include <iostream>
using namespace std;

int main () {
	
	int f_a, f_a1, f_a2, jumlah = 0, n, i = 1;
	
	cout <<"Program Deret Fibonaci"<<endl;
	cout <<"Masukan nilai ke-n : ";
	cin >> n;
	f_a1 = 1;
	f_a2 = 0;   
	f_a = f_a1 + f_a2;
	do {
		//jumlah = jumlah + f_a;
		cout << f_a <<" ";
		f_a = f_a1 + f_a2;
		f_a2 = f_a1;
		f_a1 = f_a;
		
		i++;
		
	} while ( i <= n);
	
	cout <<"\nHasilnya : "<< f_a2 <<endl;
	
	//penentuan bentuk prima
	
	int cek= 0;
	int j;
	for ( j = 2; j <= f_a2; j++) {
		if (f_a2 % j == 0){
			cek++;
		}
	}
	if (cek == 1) {
		cout <<"Bilangan Tersebut Adalah Bilangan PRIMA"<<endl;
	}
	else {
		cout <<"Bilangan Tersebut Bukan Bilangan PRIMA"<<endl;
	}
		
	cin.get();
	return 0;
}

