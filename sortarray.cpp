#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int BatasArray = 9;

void displayarray (array <int, BatasArray> &angka);
void displayarray (array <char, BatasArray> &huruf );
	
int main () {
	
	
	array <int, BatasArray> angka = {9,7,1,2,4,3,8,6,5};
	array <char, BatasArray> huruf = {'i','b','a','e','c','h','d','f','g'};
	
	displayarray (angka);
	displayarray (huruf);
	
	cout <<"Diurutkan menjadi : "<<endl;
	
	sort (angka.begin(), angka.end());
	displayarray (angka);
	
	sort (huruf.begin(), huruf.end());
	displayarray (huruf);
	
	cin.get();
	return 0;
}

void displayarray (array <int, BatasArray> &angka){
	cout <<" Array Angka: ";
	for ( int &a : angka ) {
		cout << a <<" ";
	}
	cout <<"\n";
}
void displayarray (array <char, BatasArray> &huruf ) {
	cout <<" Array Huruf: ";
	for ( char &b : huruf ) {
		cout << b <<" ";
	}
	cout <<"\n";
}