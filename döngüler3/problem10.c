#include <stdio.h> // Standart girdi/çıktı işlemleri için gerekli kütüphane

int main() {
    int sayi; // Kullanıcının girdiği sayıyı tutacak değişken


    int toplam = 0; // Mükemmel sayının bölenlerinin toplamını tutacak değişken

    // Kullanıcıdan bir sayı girmesini isteme

    printf("Bir sayı giriniz: ");

    scanf("%d", &sayi); // Kullanıcının girdiği değeri `sayi` değişkenine kaydet

    printf("\n"); // Yeni bir satıra geç



    // 1'den `sayi`'ya kadar olan sayıları kontrol et
    for (int i = 1; i < sayi; i++) {  
        // Eğer `sayi` `i`'ye tam bölünüyorsa
        if (sayi % i == 0) {
            toplam =toplam+ i; // `i`'yi toplam değişkenine ekle
        }
    }
    

    // Eğer bölenlerin toplamı `sayi`'ya eşitse
    if (toplam == sayi) {
        printf("Girdiğiniz sayı mükemmel sayıdır.\n"); // Mükemmel sayı olduğu mesajını yazdır
    } else {
        printf("Girdiğiniz sayı mükemmel sayı değildir.\n"); // Mükemmel sayı olmadığı mesajını yazdır
    }

    return 0; // Programın başarılı bir şekilde sona erdiğini belirt
}
