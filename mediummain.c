#include <stdio.h>
#include <stdlib.h>

int main (){
	char metin [100];
	char ch;
	int tane = 0;
	
	printf("Lutfen bir metin giriniz:") ; gets(metin) ;
	printf ("Karakter giriniz:") ; scanf("%c", &ch) ;
	
	int i;
	for (i=0; metin[i] != '\0' ; i++)
	 {
		
	 if(metin[i] == ch)
	 tane ++ ;
	 
	 	
	}
	
	printf("%c harfinden %d tane var.", ch , tane);




return 0;	
}
