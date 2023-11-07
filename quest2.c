#include <stdio.h>
#include <string.h>
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
   char nome_time2[31];
   char jk[90];
    int t2forca_goleiro1 = 0;
    int t2forca_laterais1 = 0, t2forca_laterais2 = 0, t2forca_zagueiros1 = 0, t2forca_zagueiros2 = 0, t2forca_volantes1 = 0, t2forca_volantes2=0, t2forca_meias1 = 0, t2forca_meias2 = 0, t2forca_atacantes1 = 0, t2forca_atacantes2 = 0;

    //scanf("%30s", nome_time1);   //NAO APAGAR 
fgets(nome_time1,sizeof(nome_time1),stdin);
printf("%s:  de forca\n", nome_time1);

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
   
     
     fgets(nome_time2,sizeof(nome_time2), stdin);  // Lê uma linha, incluindo espaços em branco

    for (int i=0;i <= 10; i++) {
        scanf(" %30[^;]; %c; %d", nome, &posicao, &forca);

        if (posicao == 'G') {
            t2forca_goleiro1 = forca;
        } else if (posicao == 'L') {
            if (t2forca_laterais1 == 0) {
                t2forca_laterais1 += forca;
            } else if (t2forca_laterais1 > 0) {
                t2forca_laterais2 += forca;
            }
        } else if (posicao == 'Z') {
            if (t2forca_zagueiros1 == 0) {
                t2forca_zagueiros1 += forca;
            } else if (t2forca_zagueiros1 > 0) {
                t2forca_zagueiros2 += forca;
            }
        } else if (posicao == 'V') {
            if (t2forca_volantes1 == 0) {
                t2forca_volantes1 += forca;
            } else if (t2forca_volantes1 > 0) {
                t2forca_volantes2 += forca;
            }
        } else if (posicao == 'M') {
            if (t2forca_meias1 == 0) {
                t2forca_meias1 += forca;
            } else if (t2forca_meias1 > 0) {
                t2forca_meias2 = forca;
            }
        } else if (posicao == 'A') {
            if (t2forca_atacantes1 == 0) {
                t2forca_atacantes1 = forca;
            } else if (t2forca_atacantes1 > 0) {
                t2forca_atacantes2 += forca;
            }
        }
    }

    float forca_time1 = calcular_forca(forca_goleiro1, forca_laterais1, forca_laterais2, forca_zagueiros1, forca_zagueiros2, forca_volantes1, forca_volantes2, forca_meias1, forca_meias2, forca_atacantes1, forca_atacantes2);
    
    float forca_time2 = calcular_forca(t2forca_goleiro1, t2forca_laterais1, t2forca_laterais2, t2forca_zagueiros1,t2forca_zagueiros2, t2forca_volantes1, t2forca_volantes2, t2forca_meias1, t2forca_meias2, t2forca_atacantes1, t2forca_atacantes2);

    
    printf("%s: %0.2lf de forca\n", nome_time1, forca_time1);
    printf("%s: %0.2lf de forca\n", nome_time2, forca_time2);

  if(nome_time1>nome_time2){
    printf("%s eh mais forte\n",nome_time1);
  }else if(nome_time2>nome_time1){
    printf("%s eh mais forte\n",nome_time2);
  }
    return 0;
}
