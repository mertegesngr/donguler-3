#include <stdio.h> // Standart girdi/çıktı işlemleri için gerekli kütüphane

int main() {
    int c; // Kullanıcının gireceği üst sınır sayıyı tutacak değişken


    
    printf("Hangi sayıya kadarki asal sayıları bulmak istiyorsunuz: "); // Kullanıcıdan üst sınır sayıyı girmesini iste



    scanf("%d", &c); // Kullanıcının girdiği sayıyı `c` değişkenine kaydetme
    printf("\n"); // Yeni bir satıra geç

    printf("%d sayısına kadarki asal sayılar: ", c); // Asal sayıları yazdırma mesajı

    // 2'den c'ye kadar olan sayıları kontrol etme

    for (int i = 2; i <= c; i++) {

        int sayac = 0; // Asal olup olmadığını kontrol etmek için bölen sayısını tutacak değişken
        
        // i sayısının bölenlerini kontrol etme

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) { // Eğer j, i'yi tam bölüyorsa
                sayac++;     // Bölen sayısını bir artır
            }
        }
        
        // Eğer sayac 2 ise, i asal sayıdır
        if (sayac == 2) {
            printf("%d ", i); // Asal sayıyı ekrana yazdır
        }
    }

    return 0; // Programın başarıyla sonlandığını belirt
}
