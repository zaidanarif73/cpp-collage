#include <iostream>
#include <array>
using namespace std;

int main () {
	
	array <int ,10> arrayNilai = {0,1,2,3,4,5,6,7,8,9};
	for (int nilai : arrayNilai ) {
		cout <<"Addresnya : "<< &nilai <<" Nilainya : "<< nilai <<endl;
	}
	//refrence
	cout <<"\n"<<endl;
	for (int nilaiRef : arrayNilai ) {
		nilaiRef *= 2;
	}
	for (int nilaiRef : arrayNilai ) {
		cout <<"Addresnya : "<< &nilaiRef <<" Nilainya : "<< nilaiRef <<endl;
	}
	
	cin.get();
	return 0;
}