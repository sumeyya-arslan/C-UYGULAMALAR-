#include <stdio.h>

int sayi1 = 0;
int sayi2 = 0;
int islem = 0;

int main() {
    printf("sayi1 girin: ");
    scanf("%d", &sayi1);
    printf("sayi2 girin: ");
    scanf("%d", &sayi2);
    printf("islem girin (1->+, 2->-, 3->*, 4->/, 5->%): ");
    scanf("%d", &islem);
    
    switch(islem) {
        case 1:
            printf("iki sayının toplamı: %d\n", (sayi1 + sayi2));
            break;
        case 2:
            printf("iki sayının farkı: %d\n", (sayi1 - sayi2));
            break;
        case 3:
            printf("iki sayının çarpımı: %d\n", (sayi1 * sayi2));
            break;
        case 4:
            printf("iki sayının bölümü: %d\n", (sayi1 / sayi2));
            break;
        case 5:
            printf("iki sayının modu: %d\n", (sayi1 % sayi2));
            break;
        default:
            printf("Yanlış işlem yaptınız.\n");
    }
    
    return 0;
}


