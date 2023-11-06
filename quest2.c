#include <stdio.h>

// calcular 
float calcular_forca(int goleiro, int laterais, int laterais2, int zagueiros, int zagueiros2, int volantes, int volantes2, int meias, int meias2, int atacantes, int atacantes2) {
    return (8 * goleiro + 10 * (laterais + laterais2) + 5 * (zagueiros + zagueiros2) + 8 * (volantes + volantes2) + 11 * (meias + meias2) + 12 * (atacantes + atacantes2)) / 100.0;
}

int main() {
    char nome_time1[31];
    int forca_goleiro1 = 0;
    int forca_laterais1 = 0, forca_laterais2 = 0, forca_zagueiros1 = 0, forca_zagueiros2 = 0, forca_volantes1 = 0, forca_volantes2 = 0, forca_meias1 = 0, forca_meias2 = 0, forca_atacantes1 = 0, forca_atacantes2 = 0;
    char nome[30];
    char posicao;
    int forca;
    //Segundo_Time_


    scanf("%30s", nome_time1);

    for (int i = 0; i <= 10; i++) {
        scanf(" %30[^;]; %c; %d", nome, &posicao, &forca);

        if (posicao == 'G') {
            forca_goleiro1 = forca;
        } else if (posicao == 'L') {
            if (forca_laterais1 == 0) {
                forca_laterais1 += forca;
            } else if (forca_laterais1 > 0) {
                forca_laterais2 += forca;
            }
        } else if (posicao == 'Z') {
            if (forca_zagueiros1 == 0) {
                forca_zagueiros1 += forca;
            } else if (forca_zagueiros1 > 0) {
                forca_zagueiros2 += forca;
            }
        } else if (posicao == 'V') {
            if (forca_volantes1 == 0) {
                forca_volantes1 += forca;
            } else if (forca_volantes1 > 0) {
                forca_volantes2 += forca;
            }
        } else if (posicao == 'M') {
            if (forca_meias1 == 0) {
                forca_meias1 += forca;
            } else if (forca_meias1 > 0) {
                forca_meias2 = forca;
            }
        } else if (posicao == 'A') {
            if (forca_atacantes1 == 0) {
                forca_atacantes1 = forca;
            } else if (forca_atacantes1 > 0) {
                forca_atacantes2 += forca;
            }
        }
    }

    
    float forca_time1 = calcular_forca(forca_goleiro1, forca_laterais1, forca_laterais2, forca_zagueiros1, forca_zagueiros2, forca_volantes1, forca_volantes2, forca_meias1, forca_meias2, forca_atacantes1, forca_atacantes2);

    
    printf("%s: %0.2lf\n", nome_time1, forca_time1);

    return 0;
}
