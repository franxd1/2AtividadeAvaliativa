#include <stdio.h>

// Função para calcular a força ponderada de um time
float calcular_forca(int goleiro, int laterais,int laterais2, int zagueiros,int zagueiros2, int volantes,int volantes2, int meias,int meias2, int atacantes,int atacantes2) {
    return (8 * goleiro + 10 * (laterais+laterais2) + 5 * (zagueiros+zagueiros2) + 8 * (volantes+volantes2 ) + 11 *( meias+ meias2) + 12 * (atacantes+atacantes)) / 100.0;
}

int main() {
    char nome_time1[31], nome_time2[31];
    int forca_goleiro1=0;
    int forca_laterais1=0,forca_laterais2=0, forca_zagueiros1=0,forca_zagueiros2=0, forca_volantes1=0,forca_volantes2=0, forca_meias1=0,forca_meias2=0, forca_atacantes1=0,forca_atacantes2=0;
      char nome[30], posicao;
        int forca;
   // int t2forca_goleiro2, t2forca_laterais2, t2forca_zagueiros2, t2forca_volantes2, t2forca_meias2, t2forca_atacantes2;

    // Leitura dos dados do primeiro time
    scanf("%30s", nome_time1);
    for (int i = 0; i <= 11; ) {
        //scanf("%30s;%c;%d", nome, posicao, forca);
        scanf("%30s %c %d", &nome, &posicao, &forca);

        if (posicao == 'G') {
            forca_goleiro1 = forca;
         i++;
        } else if (posicao == 'L') {

                if(forca_laterais1==0){
                forca_laterais1 += forca;
                i++;
                }else if (forca_laterais1>0){
                forca_laterais2 += forca;
                i++;
                printf("ENTROU ONDE NAO ERA");
                } 
        } else if (posicao == 'Z') {

           if(forca_zagueiros1 == 0){
            forca_zagueiros1 += forca;
            i++;
            }
           else if(forca_zagueiros1> 0){
            forca_zagueiros2+= forca;
            i++;
             printf("ENTROU ONDE NAO ERA");
            }

        } else if (posicao == 'V') {

            if ( forca_volantes1==0){
            forca_volantes1 += forca;
            i++;
            }
             else if ( forca_volantes1>0){
            forca_volantes2 += forca;
            i++;
             printf("ENTROU ONDE NAO ERA");
            }

        } else if (posicao == 'M') {
             if ( forca_meias1==0){
            forca_meias1 += forca;
            i++;
            }
             else if (  forca_meias1>0){
             forca_meias2 += forca;
             i++;
              printf("ENTROU ONDE NAO ERA");
             }
            
        } else if (posicao == 'A') {

            if(forca_atacantes1==0){
            forca_atacantes1 += forca;
            i++;
            }

            else if(forca_atacantes1>0){
            forca_atacantes2 += forca;
            i++;
             printf("ENTROU ONDE NAO ERA");
            }
        }
        printf("i ta com %d\n",i);
       }

    // Cálculo das forças ponderadas
    float forca_time1 = calcular_forca(forca_goleiro1, forca_laterais1,forca_laterais2, forca_zagueiros1,forca_zagueiros2, forca_volantes1,forca_volantes2, forca_meias1,forca_meias2, forca_atacantes1,forca_atacantes2);
   // float forca_time2 = calcular_forca(forca_goleiro2, forca_laterais2, forca_zagueiros2, forca_volantes2, forca_meias2, forca_atacantes2);

    // Saída das forças ponderadas e determinação do time mais forte
    //printf("%s: %0.2lf\n", nome_time1, forca_time1);
   // printf("%s: %0.2lf\n", nome_time2, forca_time2);

    /*if (forca_time1 > forca_time2){
        printf("%s é o time mais forte.\n", nome_time1);
    } else if (forca_time1 < forca_time2) {
        printf("%s é o time mais forte.\n", nome_time2);
    } else {
        printf("Os times têm a mesma força.\n");*/
    

     

return 0;    
}
