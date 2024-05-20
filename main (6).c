#include <stdio.h>

int main() {
    int sayi;
    printf("Sayı giriniz = ");
    scanf("%d", &sayi); // Format dizesinde \n kaldırıldı
    if(sayi % 2 == 0) {
        printf("Sayı çift\n"); // Çıktıya yeni satır karakteri eklendi
    } else {
        printf("Sayı tek\n"); // Çıktıya yeni satır karakteri eklendi
    }
    return 0;
}


