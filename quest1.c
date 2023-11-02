#include<stdio.h>
#include<math.h>
//completo
int main(){
    int i;
    int vet[10],vet1[10];
    int sa=0;
    int se=1;

    for (i=0;i<=9;i++){
    scanf("%d",&vet[i]);
    }
    for (i=0;i<=9;i++){
    printf("%d ",vet[i]);
    }
    printf("\n");
   
   i=8;
   for(int f=0;f<=9;f++){

   for(int z=0;z<=i;z++){
    vet1[z]=vet[sa] + vet[se];
    se ++;
    sa ++;
     if(vet1!=vet){
        vet[z]=vet1[z];
    }
   printf("(%d) ",vet[z]);
   }
    printf("\n");
    se=1;
    sa=0;
    i=i-1;
   }
return 0;
}
