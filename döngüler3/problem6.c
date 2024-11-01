#include <stdio.h>

int main() {
   int binary = 0; // İkilik tabandaki sayıyı saklamak için değişken
   int decimal = 0; // Kullanıcının girdiği onluk sayıyı saklamak için değişken
   int kalan = 0; // İkilik tabana dönüşüm sırasında kalan değeri saklamak için değişken
   int basamak = 1; // İkilik sayının basamak değerini tutacak değişken (1, 10, 100, ...)

   printf("Onluk tabanda bir sayı giriniz: "); // Kullanıcıdan onluk sayı girmesini isteme

   scanf("%d", &decimal); // Kullanıcının girdiği sayıyı `decimal` değişkenine kaydetme

   printf("\n"); // Yeni bir satıra geçme

   // Decimal sayı sıfırdan büyük olduğu sürece döngüye gir
   while (0 < decimal) {
       kalan = decimal % 2; // Decimal sayıyı 2'ye bölerek kalan bul

       binary = binary + (kalan * basamak); // İkilik tabandaki sayıyı oluştur
       
       decimal = decimal / 2; // Decimal sayıyı 2'ye böl
       
       basamak = basamak * 10; // Basamağı sola kaydır (1, 10, 100, ...)
   }

   // Hesaplanan ikilik sayıyı ekrana yazdır
   printf("İkilik taban: %d", binary);

   return 0; // Programın başarıyla sonlandığını belirt
}
