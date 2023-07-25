#include <stdio.h>
#include <stdlib.h>

//Easy: Kullanýcýnýn doðum tarihini alarak kaç yaþýnda olduðunu bulan bir algoritma yazmanýzý istiyorum.

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



