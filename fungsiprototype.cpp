#include <iostream>
using namespace std;

float konversi_k (float c);
float konversi_r (float c);
float konversi_f (float c);

int main () {
	
	float c, k, r, f;
	cout <<"================================"<<endl;
	cout <<"  KONVERSI SUHU DARI CELCIUS KE "<<endl;
	cout <<"  Fahrenheit : Reamur : Kelvin  "<<endl;
	cout <<"================================"<<endl;
	cout <<"\nMasukan Suhu Dalam Celcius = ";
	cin >> c;
	cout <<"\n==============================================="<<endl;
	cout <<"                 HASIL KONVERSI "<<endl;
	cout <<"==============================================="<<endl;
	cout <<"Fahrenheit = "<< konversi_f (c) <<" Derajat Celcius"<<endl;
	cout <<"\nReamur      = "<< konversi_r (c) <<" Derajat Celcius"<<endl;
	cout <<"\nKelvin      = "<< konversi_k (c) <<" Derajat Celcius"<<endl;
	cout <<"\n==============================================="<<endl;
	
	cin.get ();
	return 0;
}
float konversi_k (float c) {
	float k;
	k = c + 273;
	return k;
}
float konversi_r (float c) {
	float r;
	r = 0.8 * c;
	return r;
}
float konversi_f (float c) {
	float f;
	f = 1.8 * c + 32;
	return f;
}