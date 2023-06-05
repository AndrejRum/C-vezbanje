#include <stdio.h>
#include <stdlib.h>

//
//void show(int r, int c, int (*m)[c]){
//	int x, y;
//	for(x = 0; x < r; x++){
//		for(y = 0; y < c;y++){
//			printf("%5d ", m[x][y]);
//		}
//		printf("\n");
//	}
//}
//
//void main(){
//
//
//int a[3][4];
//	// prvi red
//    a[0][0] = 2;
//	a[0][1] = 3;
//	a[0][2] = 4;
//	a[0][3] = 8;
//	
//	// drugi red
//    a[1][0] = 22;
//	a[1][1] = 43;
//	a[1][2] = 12;
//	a[1][3] = 44;
//	
//	// treci red
//    a[2][0] = -33;
//	a[2][1] = 2;
//	a[2][2] = 4;
//	a[2][3] = 10;
//	
//	show(3,4,a);

	
// 
//8.	Napisati program kojim se u?itava trocifreni broj. Ako je zadnja cifra manja od 5 dodati u?itanom broju 2, ina?e oduzeti 5.
//
//void main(){
//	int broj;
//	int a;
//
//	printf("Unesite trocifreni broj: ");
//	scanf("%d", &broj);
//	
//	a = broj % 10;
//	
//	printf("zadnji broj je: %d\n", a);
//	
//	if(a<5){
//		printf("Nakom promene :%d\n ", broj + 2);
//	}else
//	printf("Nakon promene :%d\n ", broj - 5);
//		
//}
//  void main(){
//  	int x;
//  	printf("Unesite broj (0-3): ");
//  	scanf("%d", &x);
//  	
//  	switch(x){
//  		case 0:
//  			printf("Uneli ste nulu");
//  			break;
//  		case 1:
//  			printf("Uneli ste jedan");
//  			break;
//  		case 2:
//		  printf("Uneli ste dva");
//  			break;	
//  		case 3:
//		  printf("Uneli ste tri");
//  			break;	
//  			
//  			default:
//  				printf("GRESKA!!!");
//	  }
//  }
//  
//  #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #define MAX 100
//
//typedef struct {
//
//char ime [15];
//char prezime [15];
//int brIndexa;
//
//
//}Studenti;
//
// typedef struct {
// int brojIndexa;
// int brPoena;
//
//
// }Poeni;
//
//
//
// int main(){
//    Studenti student[MAX];
//    Poeni poeni[MAX];
//    FILE* dat1;
//    FILE* dat2;
//    FILE* dat3;
//    dat1 = fopen("studenti.txt", "r");
//    dat2 = fopen("poeni.txt", "r");
//    dat3 = fopen("rezultat.txt", "w");
//
//    if (dat1 == NULL || dat2 == NULL || dat3 == NULL){
//
//        printf("Greska pri ucitavanju datoteke!\n");
//
//        exit(1);
//
//
//    }
//    int brojacStudenti = 0;
//    while (fscanf(dat1, "%s %s %d",  student[brojacStudenti].ime, student[brojacStudenti].prezime, &student[brojacStudenti].brIndexa)!= EOF){
//
//
//            brojacStudenti++;
// }
// int brojacPoeni = 0;
//    while (fscanf(dat2,"%d %d", &poeni[brojacPoeni].brojIndexa, &poeni[brojacPoeni].brPoena)!= EOF){
//
//
//            brojacPoeni++;
//
//
// }
//
//
//        for(int i = 0; i < brojacStudenti - 1; i++){
//            for(int j = i+1; j < brojacStudenti; j++){
//                if(student[i].brIndexa > student[j].brIndexa){
//                    Studenti temp = student[i];
//                    student[i] = student[j];
//                    student[j] = temp;
//
//                }
//            }
//
//        }
//
//
//        for (int i = 0; i < brojacPoeni - 1; i++) {
//        for (int j = i + 1; j < brojacPoeni; j++) {
//            if (poeni[i].brojIndexa > poeni[j].brojIndexa) {
//                Poeni temp1 = poeni[i];
//                poeni[i] = poeni[j];
//                poeni[j] = temp1;
//            }
//        }
//    }
//        int brojacizaslih =  0;
//        for(int i = 0; i < brojacPoeni; i++){
//                int poz = -1;
//            for(int j = i + 1; j < brojacStudenti; j++){
//                if(poeni[i].brojIndexa == student[j].brIndexa){
//                    poz = j;
//                    break;
//
//                }
//
//
//            }
//
//            if (poz!=-1){
//                fprintf(dat3, "%s %s %d %d\n", student[poz].ime, student[poz].prezime, poeni[i].brPoena, poeni[i].brojIndexa);
//                
//            }
//        }
// fclose(dat1);
// fclose(dat2);
// fclose(dat3);
// printf("Na ispit je izaslo: %d studenta.", brojacPoeni);
//
//
// }
//
//int main(){
//	int broj;
//	int c1,c2,c3;
//	while(1){
//	
//	printf("unesite trocifren broj:");
//	scanf("%d",&broj);
//	
//	c1 = broj / 100;
//	c2 = (broj % 100) / 10;
//	c3 = broj  % 10;
//	
////	printf("Cifra jedan:%d\n", c1);
////	printf("Cifra dva:%d\n", c2);
////	printf("Cifra tri:%d\n", c3);
////	
////	if (c1==c2+c3){
////		printf("Magicann brooooj:%d ", broj);
////		break;
////	}
////}
////	return 0;
////}
//
////#include <stdio.h>
////#include <stdlib.h>
//
//void formiraj_niz(int MaN, int M, int matrica[MaN][M], int niz[]) {
//    int srednji_red = MaN / 2; // indeks srednjeg reda matrice
//    int srednja_kolona = M / 2; // indeks srednje kolone matrice
//    int brojac = 0;
//	int j;    
//    // prvo dodajemo elemente iz srednjeg reda
//    for (j = 0; j < M; j++) {
//        niz[brojac] = matrica[srednji_red][j];
//        brojac++;
//    }
//    
//    // zatim dodajemo elemente iz srednje kolone, izuzev elementa koji smo vec dodali
//    int i;
//    for (i = 0; i < MaN; i++) {
//        if (i != srednji_red) {
//            niz[brojac] = matrica[i][srednja_kolona];
//            brojac++;
//        }
//    }
//    
//    // zatim dodajemo elemente koji nisu u srednjem redu ili srednjoj koloni
//    for (i = 0; i < MaN; i++) {
//        for ( j = 0; j < M; j++) {
//            if (i != srednji_red && j != srednja_kolona) {
//                niz[brojac] = matrica[i][j];
//                brojac++;
//            }
//        }
//    }
//}
//
//int cmp(const void* a, const void* b) {
//    return *(int*)a - *(int*)b;
//}
//
//int main() {
//    int AK, L;
//    printf("Unesite dimenzije matrice AKxL: ");
//    scanf("%d %d", &AK, &L);
//    int i;
//    int j;
//    int matrica[AK][L];
//    printf("Unesite elemente matrice:\n");
//    for ( i = 0; i < AK; i++) {
//        for ( j = 0; j < L; j++) {
//            scanf("%d", &matrica[i][j]);
//        }
//    }
//    
//    int n = AK * L; // dimenzija niza koji cemo kreirati
//    int* niz = malloc(n * sizeof(int));
//    formiraj_niz(AK, L, matrica, niz);
//    
//    // sortiramo niz u neopadajucem redosledu
//    qsort(niz, n, sizeof(int), cmp);
//    
//    printf("Niz elemenata matrice:\n");
//    for (i = 0; i < n; i++) {
//        printf("%d ", niz[i]);
//    }
//    printf("\n");
//    
//    free(niz);
//    return 0;
//}

  
  
  
  
  
  
  
  #include <stdio.h>
#include <stdlib.h>

void formiraj_niz(int MaN, int M, int matrica[MaN][M], int niz[]) {
    int srednji_red = MaN / 2; // indeks srednjeg reda matrice
    int srednja_kolona = M / 2; // indeks srednje kolone matrice
    int brojac = 0;
    int i;
    
    // dodajemo elemente iz srednjeg reda, srednje kolone i dijagonale
    for ( i = 0; i < MaN; i++) {
        if (i == srednji_red || i == srednja_kolona || i + srednja_kolona == MaN - 1) {
            niz[brojac] = matrica[i][srednja_kolona];
            brojac++;
        }
    }
}

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int AK, L;
    int i, j;
    printf("Unesite dimenzije matrice AKxL: ");
    scanf("%d %d", &AK, &L);
    
    int matrica[AK][L];
    printf("Unesite elemente matrice:\n");
    for ( i = 0; i < AK; i++) {
        for ( j = 0; j < L; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }
    
    int n = (AK + L + 1) / 2; // dimenzija niza koji cemo kreirati
    int* niz = malloc(n * sizeof(int));
    formiraj_niz(AK, L, matrica, niz);
    
    // sortiramo niz u neopadajucem redosledu
    qsort(niz, n, sizeof(int), cmp);
    
    printf("Niz elemenata matrice:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");
    
    free(niz);
    return 0;
}

  
  
  
  
  
  
