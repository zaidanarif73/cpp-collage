#include <iostream>
using namespace std;

int main () {
	
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	int f_nx = 0;
	cout <<"Program Deret Fibonaci "<<endl;
	cout <<"Masukan nilai ke-n : ";
	cin >> n;
	// f_n = f_n1 + f_n2
	f_n1 = 1; //batas awal//
	f_n2 = 0;
	f_n = f_n1 + f_n2;
	
	cout << f_n <<" ";
	for (int i= 1; i < n; i++) {
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;     //f_n2 akan berubah menjadi f_n1 yang baru
		f_n1 = f_n;      //fn_1 akan berubah menjadi f_n baru
		cout << f_n <<" ";
		
		f_nx = f_nx + f_n; // f_nx bertindak sebagai variabel yang berubah-ubah yang nantinya menyimpan nilai f_n yang di looping kan untuk menemukan hasil total deret fibonaci
	
	}
	cout <<"\nHasil: "<< f_nx + 1 <<endl;    //ditambahkan angka 1 disini karena batas awalnya belum dimasukan dalam loop for jadi harus masukan secara manual
	
	cin.get();
	
	return 0;
}