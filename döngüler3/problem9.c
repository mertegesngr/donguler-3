#include <stdio.h> // Standart girdi/çıktı işlemleri için gerekli kütüphane

int main() {
    int kacAdet; // Kullanıcının kaç asal sayı görmek istediğini tutacak değişken

    int sayi = 2; // Asallığı kontrol edilecek sayıyı başlat

    int bulunanAsalSayilar = 0; // Bulunan asal sayıların sayısını tutan değişken

    // Kullanıcıdan kaçıncı asal sayıya kadar yazdırmak istediğini isteme

    printf("Kaçıncı asal sayıya kadar yazdırmak istiyorsunuz: ");

    scanf("%d", &kacAdet); // Kullanıcının girdiği değeri `kacAdet` değişkenine kaydet
    
    printf("\n"); // Yeni bir satıra geç

    // Bulunan asal sayılar istenen adede ulaşana kadar devam et
    while (bulunanAsalSayilar < kacAdet) {
        int bolenSayisi = 0; // Her sayıyı kontrol etmeden önce bölen sayısını sıfırla

        // Asallığı kontrol et
        for (int i = 1; i <= sayi; i++) {
            if (sayi % i == 0) { // Eğer `sayi` `i`'ye tam bölünüyorsa
                bolenSayisi++; // Bölen sayısını bir artır
            }
        }

        // Eğer bölen sayısı 2 ise `sayi` asal sayıdır
        if (bolenSayisi == 2) { 
            printf("%d ", sayi); // Asal sayıyı ekrana yazdır
            bulunanAsalSayilar++; // Bulunan asal sayıların sayısını bir artır
        }

        sayi++; // Bir sonraki sayıya geç
    }

    printf("\n"); // Satır atlama
    return 0; // Programın başarıyla sonlandığını belirt
}
