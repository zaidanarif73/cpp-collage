#include <iostream>
using namespace std;

//print menggunakan fungsi void dari array
void arrayMD (int *ptrArray, int baris, int kolom) {
	
	int index = 0;
	//looping
	for (int i = 0; i < baris; i++){
		cout <<"[ ";
		for (int j = 0; j < kolom; j++) {
			cout << *(ptrArray + index)<<" ";
			index++;
		}
		cout <<"]";
		cout <<"\n";
	}
	
}
int main () {
	const int baris = 3;
	const int kolom = 3;
	int array [baris][kolom] = {1,2,3,4,5,6,7,8,9};
	arrayMD ( *array, baris, kolom );
	
	cin.get();
	return 0;
}