#include <iostream>

using namespace std;

int main () {
	
	string email,password;
	
	do {
		cout <<"=============LOGIN==============="<<endl;
		cout <<"---------------------------------"<<endl;
		cout <<"Masukan Email : ";
		cin >> email;
		cout <<"Masukan Password : ";
		cin >> password;
		
	if (( email == "zaidanarif@gmail.com" ) && ( password == "zaidanarif" )) {
			cout <<"Selamat datang Zaidan Arif !!"<<endl;
			break;
		}
		else if (( email != "zaidanarif@gmail.com" ) && ( password == "zaidanarif" )) {
			cout <<"Email yang anda masukan salah!"<<endl;
		}
		else if (( email == "zaidanarif@gmail.com" ) && ( password != "zaidanarif" )) {
			cout <<"Password yang anda masukan salah!"<<endl;
		}
	else {
			cout <<"Email/Password yang anda tidak terdaftar!"<<endl;
		}
		cout <<"-----------------------------------"<<endl;
system ("pause");	
	} while (email != "zaidanarif@gmail.com" || password != "zaidanarif");
	
	cin.get ();
	return 0;
}