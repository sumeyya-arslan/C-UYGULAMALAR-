#include <stdio.h>

int main() {
    char ad[50];     // Ad için char dizi
    char soyad[50];  // Soyad için char dizi
    int yas;
    
    printf("Adınızı giriniz: ");
    scanf("%s", ad); // Ad için %s format belirteci

    printf("Soyadınızı giriniz: ");
    scanf("%s", soyad); // Soyad için %s format belirteci
    
    printf("Yaşınızı giriniz: ");
    scanf("%d", &yas); // Yaş için %d format belirteci
    
    if (yas >= 18) {
        printf("Yetişkİnsiniz.\n");
    } else {
        printf("Çocuksunuz.\n");
    }
    
    return 0;
}



