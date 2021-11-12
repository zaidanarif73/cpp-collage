#include <iostream>
using namespace std;

int main () {
	
	int n;
	
	cout <<"Program membuat tangga:)  "<<endl;
	cout <<"Masukan tinggi pola : ";
	cin >> n;
	//pola atas
	
do {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola tengah 
	for (int i = 1; i <= n+1; i++) {  
		cout <<" * ";
		if ( i == n+1 ) {
		break;
		}
	}
	//pola bawah
	cout <<"\n";
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= i; j--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	
	
	//pola kanan
	/*
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<" * ";
		}
		for (int k = n; k >= i; k--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	*/
	//pola kanan 2
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola kanan 3
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
		for (int l = n; l >= i; l--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola kanan 4
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola kanan 5
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<"   ";
		}
		for (int q = 1; q < i; q++) {
			cout <<"   ";
		}
		for (int r = n+8; r >= i+8; r--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola kanan 6
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<"   ";
		}
		for (int q = 1; q < i; q++) {
			cout <<"   ";
		}
		for (int r = n+8; r >= i+8; r--) {
			cout <<"   ";
		}
		for (int s = 1; s < i; s++) {
			cout <<"   ";
		}
		for (int t = n+10; t >= i+10; t--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola kanan 7 maksimum
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<"   ";
		}
		for (int q = 1; q < i; q++) {
			cout <<"   ";
		}
		for (int r = n+8; r >= i+8; r--) {
			cout <<"   ";
		}
		for (int s = 1; s < i; s++) {
			cout <<"   ";
		}
		for (int t = n+10; t >= i+10; t--) {
			cout <<"   ";
		}
		for (int u = 1; u < i; u++) {
			cout <<"   ";
		}
		for (int v = n+12; v >= i+12; v--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	
	//pola kebawah
    for  (int xx = 1; xx <= n; xx++ ) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<"   ";
		}
		for (int q = 1; q < i; q++) {
			cout <<"   ";
		}
		for (int r = n+8; r >= i+8; r--) {
			cout <<"   ";
		}
		for (int s = 1; s < i; s++) {
			cout <<"   ";
		}
		for (int t = n+10; t >= i+10; t--) {
			cout <<"   ";
		}
		for (int u = 1; u < i; u++) {
			cout <<"   ";
		}
		for (int v = n+12; v >= i+12; v--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	}
	// pola segitiga kanan 1
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<"   ";
		}
		for (int q = 1; q < i; q++) {
			cout <<"   ";
		}
		for (int r = n+8; r >= i+8; r--) {
			cout <<"   ";
		}
		for (int s = 1; s < i; s++) {
			cout <<"   ";
		}
		for (int t = n+12; t >= i+12; t--) {
			cout <<"   ";
		}
		for (int v = n+10; v >= i+10; v--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	//pola kanan 2
		for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int o = 1; o < i; o++) {
			cout <<"   ";
		}
		for (int p = n+6; p>= i+6; p--) {
			cout <<"   ";
		}
		for (int q = 1; q < i; q++) {
			cout <<"   ";
		}
		for (int r = n+10; r >= i+10; r--) {
			cout <<"   ";
		}
		for (int s = n+8; s >= i+8; s--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	
	//pola kanan 3
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+4; m >= i+4; m--) {
			cout <<"   ";
		}
		for (int n = 1; n < i; n++) {
			cout <<"   ";
		}
		for (int o = n+8; o>= i+8; o--) {
			cout <<"   ";
		}
		for (int p = n+6; p >= i+6; p--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
	
	//pola kanan 4
		for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+2; k >= i+2; k--) {
			cout <<"   ";
		}
		for (int l = 1; l < i; l++) {
			cout <<"   ";
		}
        for (int m = n+6; m >= i+6; m--) {
			cout <<"   ";
		}
		for (int o = n+4; o>= i+4; o--) {
			cout <<" * ";
		}

		cout <<"\n";
	}
	
	//pola kanan 5
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout <<"   ";
		}
		for (int k = n+4; k >= i+4; k--) {
			cout <<"   ";
		}
        for (int m = n+2; m >= i+2; m--) {
			cout <<" * ";
		}

		cout <<"\n";
	}
	
	//pola kanan 6
		for (int i = 1; i <= n; i++) {
		for (int k = n+2; k >= i+2; k--) {
			cout <<" * ";
		}
		cout <<"\n";
	}
} while ( n > 1 );

	
	cin.get();
	
	return 0;
}