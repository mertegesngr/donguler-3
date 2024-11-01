#include <stdio.h>
#include <math.h>

int main() {
    int binary; // Kullanıcının gireceği ikilik sayıyı saklamak için bir değişken
    int basamak = 0; // İkilik sayının basamak sayısını tutacak değişken
    int decimal = 0; // Hesaplanan onluk sayıyı saklamak için değişken

    printf("İkilik tabanda bir sayı giriniz: "); // Kullanıcıdan ikilik tabanda sayı girmesini isteme
    scanf("%d", &binary); // Kullanıcının girdiği ikilik sayıyı `binary` değişkenine kaydetme

    // İkilik sayının her basamağını işlemek için döngü
    while (binary > 0) {
        // En sağdaki basamağı al
        int sonBasamak = binary % 10; 

        // İkilik tabandaki basamağı onluk tabana çevir ve `decimal` değişkenine ekle
        decimal += sonBasamak * (pow(2, basamak)); // decimal = decimal + sonBasamak * (pow(2, basamak))

        // Sayıyı 10'a bölerek en sağdaki basamağı kaldır
        binary = binary / 10; 

        // Basamak sayısını bir artır
        basamak++; 
    }

    // Hesaplanan onluk sayıyı ekrana yazdır
    printf("Ondalık: %d\n", decimal);
    return 0; // Programın başarıyla sonlandığını belirt
}
