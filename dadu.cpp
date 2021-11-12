#include <iostream>
#include <stdlib.h>
//stdlib untuk mengaktifkan fungsi random
using namespace std;

int main () {
	
	char pilih;
	
	do {
	cout <<"Lempar Dadu mu!!"<<endl;
	cout <<"Lanjut? <y/n>" <<endl;
	cin >> pilih;
	cout <<"\n"<<endl;
		if ( pilih == 'y') {
			cout << 1 + (rand() % 6 ) <<endl;
			cout << 1 + (rand() % 6 ) <<endl;
			system ("pause");
		}
		else if ( pilih == 'n') {
			cout <<"Terima Kasih"<<endl;
			break;
		}
		else {
			cout <<"Input yang anda masukan salah!"<<endl;
		}
	} while ( pilih == 'y' );
	
	cin.get();
	
	return 0;
}