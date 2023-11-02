#include<stdio.h>
#include<math.h>
//incompleto!!!!
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
   
  for (int wh=0;wh<=i;wh++){
   i=i-2;
   for(int z=0;z<=i;z++){
    vet1[z]=vet[sa] + vet[se];
    se ++;
    sa ++;
    
     printf("%d ",vet1[z]);
     if(vet1!=vet){
        vet1[z]=1*vet[z];
     }
     
    }
    printf("\n");
    //i=i-2;
}
    return 0;
}