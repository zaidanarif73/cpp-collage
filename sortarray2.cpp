#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
const int rangeArray = 6;

void displayarray (array <int, rangeArray> &angka);

int main () {
	
	array <int, rangeArray> angka = {1009,2677,7726,1123,7895,9022};
	
	displayarray ( angka );
	//diurutkan
	cout <<"Diurutkan Menjadi : "<<endl;
	sort (angka.begin(), angka.end());
	displayarray ( angka );
	
	cin.get();
	return 0;
	
}
void displayarray (array <int, rangeArray> &angka) {
	cout <<"Nilai Array : "<<endl;
	for ( int &a : angka ) {
		cout << a <<" ";
	}
	cout <<"\n";
}