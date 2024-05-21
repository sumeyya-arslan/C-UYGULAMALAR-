#include <stdio.h>

int main() {
    double num1, num2;
    int choice;
    
    // Kullanıcıdan iki sayı al
    printf("Birinci sayıyı girin: ");
    scanf("%lf", &num1);
    printf("İkinci sayıyı girin: ");
    scanf("%lf", &num2);

    // İşlem seçimi için menü
    printf("Yapmak istediğiniz işlemi seçin:\n");
    printf("1. Toplama\n");
    printf("2. Çıkarma\n");
    printf("3. Çarpma\n");
    printf("4. Bölme\n");
    printf("Seçiminiz: ");
    scanf("%d", &choice);

    // Switch-case ile işlem seçimi ve uygulanması
    switch (choice) {
        case 1:
            printf("Sonuç: %.2lf\n", num1 + num2);
            break;
        case 2:
            printf("Sonuç: %.2lf\n", num1 - num2);
            break;
        case 3:
            printf("Sonuç: %.2lf\n", num1 * num2);
            break;
        if (num2 != 0)
                printf("Sonuç: %.2lf\n", num1 / num2);
            else
                printf("Hata: Bir sayı sıfıra bölünemez.\n");
            break;
        default:
            printf("Geçersiz seçim. Lütfen 1-4 arasında bir sayı girin.\n");
    }

    return 0;
}

