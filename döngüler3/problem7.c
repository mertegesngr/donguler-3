#include <stdio.h> // Standart girdi/çıktı işlemleri için gerekli kütüphane

int main() {
    int x; // Kullanıcının gireceği sayıyı tutmak için değişken
    int sonuc = 1; // Faktöriyel sonucunu tutmak için başlangıç değeri 1

    printf("Hangi tamsayının faktöriyelini bulmak istiyorsunuz: "); // Kullanıcıdan bir tam sayı girmesini isteme
    scanf("%d", &x); // Kullanıcının girdiği sayıyı `x` değişkenine kaydetme
    printf("\n"); // Yeni bir satıra geçme

    // Eğer kullanıcı 0 girerse faktöriyel sonucu 1 olmalı
    if (x == 0) {
        sonuc = 1; // 0! = 1 olduğu için sonuc 1 olarak ayarlandı
    } else {
        // 1'den x'e kadar olan tüm sayıları çarparak faktöriyeli hesaplama
        for (int i = 1; i <= x; i++) {
            sonuc = i * sonuc; // `sonuc` değişkenini güncelle
        }
    }

    // Hesaplanan faktöriyeli ekrana yazdırma
    printf("%d sayısının faktöriyeli = %d\n", x, sonuc); 

    return 0; // Programın başarıyla sonlandığını belirt
}
