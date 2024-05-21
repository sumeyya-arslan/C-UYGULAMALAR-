#include <stdio.h>

int main()
{
   int sec;
   printf("üç sayıdan birini seçiniz=");
   scanf("%d",&sec);
   switch(sec)
   {
       case 1:
       printf("biri seçtiniz!");
       break;
       case 2:
       printf("ikiyi seçtiniz!");
       break;
       case 3:
       printf("üçü seçtiniz!");
       break;
       default:
       printf("yanlış seçtin kardeşim");
   }
    return 0;
}
