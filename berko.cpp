#include <iostream>
#include <cstring>
using namespace std;

int main(){
	bool kontrol=false;
	char sesli[] = {'a','e', 'i'};
	char bulunan[250];int b=0;
	string metin;
	cout << "Metin giriniz : ";
	cin >> metin;
	int uzunluk = metin.length();
	for(int i = 0; i < uzunluk; i++){
		for(int j = 0; j < uzunluk; j++){
			if(metin[i] == sesli[j]){
				kontrol=true;
				for(int k=0;k<strlen(bulunan);k++){
					if(metin[i] != bulunan[k]){
						bulunan[b]=sesli[j];//bulunanı yedekliyo
						b++;
					}
					else continue;
				}
			}
		}
	}
	if(kontrol == true){
		cout << "Sesli harf var" << endl << "Harfler : ";
		for(int i = 0; i < strlen(bulunan); i++) cout << bulunan[i];
		cout << endl;
	}
	else
		cout << "Sesli harf yok" << endl;
	return 0;
}





