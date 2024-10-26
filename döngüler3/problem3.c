#include <stdio.h>

int main() {
    int sayi;

    // Kullanıcıdan bir sayı girmesini iste
    printf("Bir tamsayı giriniz: ");
    scanf("%d", &sayi);

    int gecici = sayi; // Sayının kendisini saklamak için
    int toplam = 0;    // Rakamların toplamı için değişken

    // Rakamların toplamını hesapla
    while (gecici > 0) {
        toplam += gecici % 10; // Rakamı al ve toplam değişkenine ekle
        gecici /= 10;          // Sayıyı bir basamak küçült
    }

    // Harshad sayısı kontrolü
    if (sayi % toplam == 0) {
        printf("%d sayısı Harshad sayısıdır.\n", sayi);
    } else {
        printf("%d sayısı Harshad sayısı değildir.\n", sayi);
    }

    return 0;
}
