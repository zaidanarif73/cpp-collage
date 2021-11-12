#include <iostream>
using namespace std;

int main () {
	
	int skor[] = {81, 94, 76, 88, 42};
const int jumlSiswa = sizeof(skor) / sizeof(skor[0]);
int skorMax = 0;
for ( int siswa = 0; siswa < jmlSiswa; ++ siswa )
	if (skor [siswa] > skorMax)
		skorMax = skor[siswa];
	cout <<"Skor terbaik adalah "<< skorMax <<"\n";
	
	return 0;
}