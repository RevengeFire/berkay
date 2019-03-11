#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int kontrol=0;
	char sesli[] = {'a','e', 'i'};
	char bulunan[250];int b=0;
	char *metin;
	printf("Metin giriniz : ");
	gets(metin);
	int uzunluk = strlen(metin);
	for(int i = 0; i < uzunluk; i++){
		for(int j = 0; j < uzunluk; j++){
			if(metin[i] == sesli[j]){
				kontrol=1;
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
	if(kontrol == 1){
		printf("Sesli harf var\n");printf("Harfler : ");
		for(int i = 0; i < strlen(bulunan); i++) printf("%c",bulunan[i]);
		printf("\n");
	}
	else
		printf("Sesli harf yok");
	return 0;
}





