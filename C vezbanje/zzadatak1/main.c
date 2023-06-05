 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #define MAX 100

typedef struct {

char ime [15];
char prezime [15];
int brIndexa;


}Studenti;

 typedef struct {
 int brojIndexa;
 int brPoena;


 }Poeni;



 int main(){
    Studenti student[MAX];
    Poeni poeni[MAX];
    FILE* dat1;
    FILE* dat2;
    FILE* dat3;
    dat1 = fopen("studenti.txt", "r");
    dat2 = fopen("poeni.txt", "r");
    dat3 = fopen("rezultat.txt", "w");

    if (dat1 == NULL || dat2 == NULL || dat3 == NULL){

        printf("Greska pri ucitavanju datoteke!\n");

        exit(1);


    }
    int brojacStudenti = 0;
    while (fscanf(dat1, "%s %s %d",  student[brojacStudenti].ime, student[brojacStudenti].prezime, &student[brojacStudenti].brIndexa)!= EOF){


            brojacStudenti++;
 }
 int brojacPoeni = 0;
    while (fscanf(dat2,"%d %d", &poeni[brojacPoeni].brojIndexa, &poeni[brojacPoeni].brPoena)!= EOF){


            brojacPoeni++;


 }


        for(int i = 0; i < brojacStudenti - 1; i++){
            for(int j = i+1; j < brojacStudenti; j++){
                if(student[i].brIndexa > student[j].brIndexa){
                    Studenti temp = student[i];
                    student[i] = student[j];
                    student[j] = temp;

                }
            }

        }


        for (int i = 0; i < brojacPoeni - 1; i++) {
        for (int j = i + 1; j < brojacPoeni; j++) {
            if (poeni[i].brojIndexa > poeni[j].brojIndexa) {
                Poeni temp1 = poeni[i];
                poeni[i] = poeni[j];
                poeni[j] = temp1;
            }
        }
    }
        int brojacizaslih =  0;
        for(int i = 0; i < brojacPoeni; i++){
                int poz = -1;
            for(int j = i + 1; j < brojacStudenti; j++){
                if(poeni[i].brojIndexa == student[j].brIndexa){
                    poz = j;
                    break;

                }


            }

            if (poz!=-1){
                fprintf(dat3, "%s %s %d %d\n", student[poz].ime, student[poz].prezime, poeni[i].brPoena, poeni[i].brojIndexa);

            }
        }
 fclose(dat1);
 fclose(dat2);
 fclose(dat3);
 printf("Na ispit je izaslo: %d studenta.", brojacPoeni);


 }















