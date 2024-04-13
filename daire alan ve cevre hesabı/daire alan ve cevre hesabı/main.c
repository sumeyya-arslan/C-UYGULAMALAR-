
//  main.c
//  daire alan ve cevre hesabı
//  Created by sümeyya on 13.04.2024.
#include <stdio.h>

int main(void) {
  int r;
  const float pi=3.14159;
  int alan,cevre;
  printf("sayı giriniz=");
  scanf("%d",&r);
  alan=pi*r*r;
  cevre=(pi*r*2);
  printf("daire alan hesabı=%d\n",alan);
  printf("daire çevre hesabı=%d\n",cevre);

  return 0;
}
