#include <stdio.h>
#include <stdlib.h>

//Easy: Kullan�c�n�n do�um tarihini alarak ka� ya��nda oldu�unu bulan bir algoritma yazman�z� istiyorum.

int main() {  
	
  int dogumgunu, dogumayi, dogumyili;
  int gun, ay, yil, mevcutyil;
  
  printf("Dogum yilinizi girin (GG.AA.YYYY):");
  scanf("%d.%d.%d",&dogumgunu,&dogumayi,&dogumyili);
  
  printf("Icinde bulundugunuz yili girin:");
  scanf("%d",&mevcutyil);

  int yas= mevcutyil - dogumyili;
  
  printf("Yasiniz: %d\n", yas);


	return 0;
}



