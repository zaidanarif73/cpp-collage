#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const int rangeArray = 8;
void printArr(array <char, rangeArray > &huruf);

int main () {
	
	array <char, rangeArray > huruf = {'b','k','v','e','h','q','d','a'};
	printArr (huruf);
	cout <<"\nSetelah Diurutkan menjadi : "<<endl;
	sort (huruf.begin(),huruf.end());
	printArr (huruf);
	
	
	cin.get();
	return 0;
}

void printArr(array <char, rangeArray > &huruf) {
	cout <<"Array : "<<endl;
	for ( char &a : huruf ) {
		cout << a <<" ";
	} 
	cout <<"\n";
}