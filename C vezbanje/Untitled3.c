#include <stdio.h>

#include <stdlib.h>



void unosMatrice(int **mat,int m,int n){

     int i,j;

     printf("Unesite elemente matrice ");

     for(i=0;i<m;i++)

      for(j=0;j<n;j++)

       scanf("%d",&mat[i][j]);

}

int brojPotpunoPopravljenih(int **mat,int m,int n){

    int i,j,semafor,br = 0;

    for(i=0;i<m;i++){

      semafor = 1;

      for(j=0;j<n;j++)

        if(mat[i][j] == 1)

          semafor = 0;

      if(semafor == 1)

        br++;

    }

    return br;

}

int najvisePokvareno(int **mat,int m,int n)

{

    int i,j,max=0,imax;

    for(i=0;i<m;i++)

    {

       int brKvarova = 0;

       for(j=0;j<n;j++)

        if(mat[i][j] != 0)

          brKvarova++;

       if(brKvarova > max){

         max = brKvarova;

         imax = i;

       }

    }

    return imax;

}

int najucestalijiKvar(int **mat,int m,int n)

{

    int i,j,max=0,jmax;

    for(j=0;j<n;j++)

    {

       int brAutomobila = 0;

       for(i=0;i<m;i++)

        if(mat[i][j] != 0)

          brAutomobila++;

       if(brAutomobila > max){

         max = brAutomobila;

         jmax = j;

       }

    }

    return jmax;

}

int main(){

    int **radionica,vozila,kvarova,i,j;

    printf("Unesite broj vozila i kvarova u radionici\n");

    scanf("%d %d",&vozila,&kvarova);

    radionica = (int**)malloc(vozila*sizeof(int*));

    if(radionica == NULL){

    printf("Greska");

    exit(1);

    }

    for(i=0;i<vozila;i++){

     radionica[i]=(int*)malloc(kvarova*sizeof(int));

     if(radionica[i] == NULL){

     printf("Greska");

     for(j=0;j<i;j++)

      free(radionica[j]);

     free(radionica);

     exit(1);

     }

    }

    unosMatrice(radionica,vozila,kvarova);

    printf("Broj automobila koja su potpuno popravljena je %d\n",

    brojPotpunoPopravljenih(radionica,vozila,kvarova));



    printf("Redni broj automobila koji je najvise pokvaren je %d\n",

    (najvisePokvareno(radionica,vozila,kvarova)+1));



    printf("Najucestaliji kvar je %d\n",

    (najucestalijiKvar(radionica,vozila,kvarova)+1));



    for(i=0;i<vozila;i++)

     free(radionica[i]);

    free(radionica);

      system("PAUSE");

  return 0;

}
