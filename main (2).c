#include <stdio.h>

int main() {
    int kullanicigirisi, i; // Declare variables
    
    printf("Sayi giriniz: ");
    scanf("%d", &kullanicigirisi); // Corrected the scanf format specifier and added '&' before variable name
    
    for (i = 0; i <= kullanicigirisi; i++) {
        printf("%d'nin küpü = %d\n", i, i * i * i); // Corrected the cube calculation
    }

    return 0;
}

