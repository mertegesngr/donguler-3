#include <stdio.h> // Standart girdi/çıktı işlemleri için gerekli kütüphane

int main() {
    int sayi;
    int sonuc = 0;

    // Kullanıcıdan bir sayı girmesini ister
    printf("Hangi sayıya kadar mükemmel sayı görmek istiyorsunuz: ");
    scanf("%d", &sayi);

    // 1'den girilen sayıya kadar olan tüm sayılar için döngü
    for (int i = 1; i <= sayi; i++) {
        // i sayısının bölenlerinin toplamını hesaplamak için döngü
        for (int j = 1; j < i; j++) {
            if (i % j == 0) { // Eğer j, i sayısına tam bölünüyorsa
                sonuc = sonuc + j; // j'yi toplam sonuca ekler
            }
        }
        // Eğer bölenlerin toplamı sayının kendisine eşitse mükemmel sayıdır
        if (sonuc == i) {
            printf("%d sayısı mükemmel sayıdır.\n", i);
        }
        sonuc = 0; // Sonucu sıfırlayarak bir sonraki sayıya geçer
    }

    return 0; // Programın başarılı bir şekilde sona erdiğini belirtir
}
