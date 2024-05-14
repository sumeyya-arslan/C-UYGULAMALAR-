#include <stdio.h>
int day=1;
int main()
{
   printf("sayi girin:");
   scanf("%d",&day);
   switch(day)
   {
       case 1:
       printf("pazartesi");
       break;
       case 2:
       printf("salı");
       break;
       case 3:
       printf("çarşamba");
       break;
       case 4:
       printf("perşembe");
       break;
       case 5:
       printf("cuma");
       break;
       case 6:
       printf("cumartesi");
       break;
       case 7:
       printf("pazar");
       break;
       default:
       printf("böyle bir gün yoktur.");
       
   }
 return 0;
}

