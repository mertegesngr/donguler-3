#include <stdio.h> 

int main() {
    int x;
    int sonuc = 0;

    // Kullanıcıdan bir tamsayı girmesini iste
    printf("Bir tamsayı giriniz: ");
    scanf("%d", &x);
    printf("\n");

    // 1'den x-1'e kadar olan sayıları kontrol et
    for (int i = 1; i < x; i++) {
        // Eğer i, x'in tam böleni ise, i'yi sonuca ekle
        if (x % i == 0) {
            sonuc += i;
        }
    }

    // Eğer bölenlerin toplamı sayıya eşitse, sayı mükemmeldir
    if (sonuc == x) {
        printf("%d sayısı mükemmel sayıdır.\n", x);
    } else {
        printf("%d sayısı mükemmel sayı değildir.\n", x);
    }

    return 0;
}
