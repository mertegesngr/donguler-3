#include <stdio.h>

int main() {
    int sayi;

    // Kullanıcıdan bir sayı girmesini iste
    printf("Bir tamsayı giriniz: ");
    scanf("%d", &sayi);

    int pronic = 0; // Pronic sayının bulunup bulunmadığını kontrol etmek için

    // Pronic sayıyı bulmak için döngü
    for (int i = 0; i * (i + 1) <= sayi; i++) {
        if (i * (i + 1) == sayi) {
            pronic = 1; // Sayı Pronic ise pronic değişkenini 1 yap
            break; // Döngüyü sonlandır
        }
    }

    // Sonucu yazdır
    if (pronic) {
        printf("%d sayısı Pronic sayıdır.\n", sayi);
    } else {
        printf("%d sayısı Pronic sayı değildir.\n", sayi);
    }

    return 0;
}
