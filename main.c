#include <stdio.h>
#include <math.h>

int main(void)
{
    float urunTutari;
    float odenenPara;

    int paraUstuKurus;
    int kalan;

    int ikiYuzTL;
    int yuzElliTL;
    int yirmiTL;
    int onBesTL;
    int birTL;

    int elliKurus;
    int yirmiBesKurus;
    int onBesKurus;
    int birKurus;

    int toplamKupur;

    char secim;

tekrar:

    printf("\nUrun tutarini giriniz: ");
    scanf("%f", &urunTutari);

    printf("Odenen parayi giriniz: ");
    scanf("%f", &odenenPara);

    /* Para ustunu kurus cinsine ceviriyoruz */
    paraUstuKurus = (int)roundf((odenenPara - urunTutari) * 100);

    kalan = paraUstuKurus;

    /* 200 TL */
    ikiYuzTL = kalan / 20000;
    kalan = kalan % 20000;

    /* 150 TL */
    yuzElliTL = kalan / 15000;
    kalan = kalan % 15000;

    /* 20 TL */
    yirmiTL = kalan / 2000;
    kalan = kalan % 2000;

    /* 15 TL */
    onBesTL = kalan / 1500;
    kalan = kalan % 1500;

    /* 1 TL */
    birTL = kalan / 100;
    kalan = kalan % 100;

    /* 50 kurus */
    elliKurus = kalan / 50;
    kalan = kalan % 50;

    /* 25 kurus */
    yirmiBesKurus = kalan / 25;
    kalan = kalan % 25;

    /* 15 kurus */
    onBesKurus = kalan / 15;
    kalan = kalan % 15;

    /* 1 kurus */
    birKurus = kalan / 1;
    kalan = kalan % 1;

    toplamKupur = ikiYuzTL + yuzElliTL + yirmiTL +
                  onBesTL + birTL + elliKurus +
                  yirmiBesKurus + onBesKurus + birKurus;

    printf("\nPara ustu: %2f TL\n", paraUstuKurus / 100.0);

    printf("\nKullanilan kupurler:\n");

    printf("200 TL     : %d adet\n", ikiYuzTL);
    printf("150 TL     : %d adet\n", yuzElliTL);
    printf("20 TL      : %d adet\n", yirmiTL);
    printf("15 TL      : %d adet\n", onBesTL);
    printf("1 TL       : %d adet\n", birTL);

    printf("50 kurus   : %d adet\n", elliKurus);
    printf("25 kurus   : %d adet\n", yirmiBesKurus);
    printf("15 kurus   : %d adet\n", onBesKurus);
    printf("1 kurus    : %d adet\n", birKurus);

    printf("\nToplam kupur sayisi: %d\n", toplamKupur);

    return 0;
}
/* ben Taha Yasin Karateke Kırklareli Üniversitesinde yazılım mühendisliği 1. sınıf ögrencisiyim.Bu  kodları Xcode üzerinden C diliyle yazdım.*/
