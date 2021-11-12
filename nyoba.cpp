#include <iostream>
using namespace std;

int main () {
	
	int b = 0;
	
	while ( b < 50 ) {
		b++;
		if ( b %2 == 0 ) {
			continue;
		}
	cout << b <<endl;	
	}
	
	return 0;
}