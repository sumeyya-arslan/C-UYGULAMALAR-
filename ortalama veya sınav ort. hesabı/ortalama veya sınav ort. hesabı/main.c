
//  main.c
//  ortalama veya sınav ort. hesabı
//  Created by sümeyya on 13.04.2024.
#include <stdio.h>

int main(void) {
  int sayi1,sayi2,sayi3;
  int ortalama;
  printf("üç sayı giriniz=");
  scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
  ortalama=(sayi1+sayi2+sayi3)/3;
  printf("ortalama hesabı=%d\n",ortalama);


  return 0;
}
