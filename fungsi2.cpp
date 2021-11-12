#include <iostream>
using namespace std;
//fungsi 1
float operator_a (float a, float b, float c, float d) {
	float e;
	e = a + b * c / d - b;
	
	return e;
}
//fungsi 2
float operator_b (float a, float b, float c, float d) {
	float f;
	f = (a + b) * c / d;
	
	return f;
}
//fungsi void 1
void statement_1 (float a, float b, float c, float d ) {
	cout <<"Nilai dari e = a + b * c / d - b: "<< operator_a (a,b,c,d) <<endl;
}
//fungsi void 2
void statement_2 (float a, float b, float c, float d ) {
	cout <<"Nilai dari f = (a + b) * c / d: "<< operator_b (a,b,c,d ) <<endl;
}
//fungsi main
int main () {
	
	float a,b,c,d,e,f;
	cout <<"Masukan Nilai A: ";
	cin >> a;
	cout <<"Masukan Nilai B: ";
	cin >>b;
	cout <<"Masukan Nilai C: ";
	cin >>c;
	cout <<"Masukan Nilai D: ";
	cin >>d;
	//hasil
	statement_1 (a,b,c,d);
	statement_2 (a,b,c,d);
	
	return 0;	
}
	