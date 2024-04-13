
//  main.c
//  basit hesap makinesi
//  Created by sümeyya on 13.04.2024.
#include <stdio.h>

int main(void) {
  int sayi1,sayi2;
  int toplam,fark,carpim,bolum;
  printf("iki sayı giriniz=");
  scanf("%d %d",&sayi1,&sayi2);
  toplam=sayi1+sayi2;
  fark=sayi1-sayi2;
  carpim=sayi1*sayi2;
  bolum=sayi1/sayi2;
  printf("toplam=%d\n",toplam);
  printf("fark=%d\n",fark);
  printf("carpim=%d\n",carpim);
  printf("bolum=%d\n",bolum);
  
  return 0;
}
