#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Muammer Eren Özünlü Kırklareli Üniversitesi Yazılım Mühendisliği 1.sınıf öğrencisiyim.*/

int main(void)
{
    float urunTutari;
    float odenenPara;

    int paraUstuKurus;
    int kalan;

    int ikiYuzTL, yuzTL, elliTL, yirmiTL, onTL, besTL, birTL;
    int elliKurus, yirmiBesKurus, onKurus, besKurus, birKurus;

    int toplamKupur;

    printf("\nUrun tutarini giriniz: ");
    scanf("%f", &urunTutari);

    printf("Odenen parayi giriniz: ");
    scanf("%f", &odenenPara);

    
    paraUstuKurus = (int)roundf((odenenPara - urunTutari) * 100.0f);

    kalan = paraUstuKurus;

    /* Banknotlar */
    ikiYuzTL = kalan / 20000;
    kalan = kalan % 20000;

    yuzTL = kalan / 10000;
    kalan = kalan % 10000;

    elliTL = kalan / 5000;
    kalan = kalan % 5000;

    yirmiTL = kalan / 2000;
    kalan = kalan % 2000;

    onTL = kalan / 1000;
    kalan = kalan % 1000;

    besTL = kalan / 500;
    kalan = kalan % 500;

    birTL = kalan / 100;
    kalan = kalan % 100;

    /* Madeni Paralar */
    elliKurus = kalan / 50;
    kalan = kalan % 50;

    yirmiBesKurus = kalan / 25;
    kalan = kalan % 25;

    onKurus = kalan / 10;
    kalan = kalan % 10;

    besKurus = kalan / 5;
    kalan = kalan % 5;

    birKurus = kalan / 1;
    kalan = kalan % 1;

    toplamKupur = ikiYuzTL + yuzTL + elliTL + yirmiTL + onTL + besTL + birTL + 
                  elliKurus + yirmiBesKurus + onKurus + besKurus + birKurus;

    printf("\nPara ustu: %.2f TL\n", paraUstuKurus / 100.0);

    printf("\nKullanilan kupurler:\n");

    printf("200 TL     : %d adet\n", ikiYuzTL);
    printf("100 TL     : %d adet\n", yuzTL);
    printf("50 TL      : %d adet\n", elliTL);
    printf("20 TL      : %d adet\n", yirmiTL);
    printf("10 TL      : %d adet\n", onTL);
    printf("5 TL       : %d adet\n", besTL);
    printf("1 TL       : %d adet\n", birTL);

    printf("50 kurus   : %d adet\n", elliKurus);
    printf("25 kurus   : %d adet\n", yirmiBesKurus);
    printf("10 kurus   : %d adet\n", onKurus);
    printf("5 kurus    : %d adet\n", besKurus);
    printf("1 kurus    : %d adet\n", birKurus);

    printf("\nToplam kupur sayisi: %d\n", toplamKupur);

    return 0;
}