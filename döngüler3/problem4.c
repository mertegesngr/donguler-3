#include <stdio.h>

int main() {
    int x;  // Kullanıcının gireceği sayıyı saklamak için bir değişken




    printf("Bir sayı giriniz: "); // Kullanıcıdan bir sayı girmesini isteme

    scanf("%d", &x); // Kullanıcının girdiği sayıyı x değişkenine kaydetme

    printf("\n"); // Yeni bir satıra geçme

    int tasiyiciX = x; // Orijinal sayıyı değiştirmeden tutmak için bir değişken

    int i = 0; // Basamak sayısını tutacak değişken

    int j = 0; // Ardışık basamak farklarının 1 olduğu sayıları tutacak değişken

    // Sayı 10'dan büyük olduğu sürece döngüye gir
    while (tasiyiciX > 10) {
        i++; // Basamak sayısını artır

        int x = tasiyiciX % 10; // Sayının en sağdaki basamağını al

        tasiyiciX = tasiyiciX / 10; // Sayıyı 10'a bölerek en sağdaki basamağı kaldır

        int y = tasiyiciX % 10; // Yeni en sağdaki basamağı al

        // Eğer iki basamak arasındaki fark 1 ise
        if (x - y == 1 || y - x == 1) {
            j++; // Ardışık basamak farkı 1 olan sayıları say
        } else {
            printf("Sayınız lumbled sayı değildir.\n"); // Sayı lumbled değilse mesaj yazdır

            break; // Döngüyü sonlandır
        }
    }

    // Eğer basamak sayısı ile ardışık basamak farkı 1 olan sayıların sayısı eşitse
    if (i == j) {
        printf("Sayınız lumbled sayıdır.\n"); // Sayı lumbled ise mesaj yazdır
    }

    return 0; // Programın başarıyla sonlandığını belirt
}
