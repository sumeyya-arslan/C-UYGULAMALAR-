
//  main.c
//  dikdörtgen alan ve cevre hesabı
//  Created by sümeyya on 13.04.2024.
#include <stdio.h>

int main(void) {
  int a,b;
  int alan,cevre;
  printf("iki sayı giriniz=");
  scanf("%d %d",&a,&b);
  alan=a*b;
  cevre=((a+b)*2);
  printf("dikdörtgen alan hesabı=%d\n",alan);
  printf("dikdörtgen çevre hesabı=%d\n",cevre);

  return 0;
}
