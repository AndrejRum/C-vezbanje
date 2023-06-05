#include <stdio.h>
#include <stdlib.h>


//int main(int argc, char *argv[]) {
//	/*napisati program koji tri unetra broja uredjuje u neopadajucem redosledu*/
//	double x,y,z,p;
//	printf("Unesite tri realna broja: ");
//	scanf("%lf%lf%lf", &x, &y,&z);
//	if(x>y)
//	{
//		p=x; x=y; y=p;
//	}
//	if(x>z)
//	{
//		p=x; x=z; z=p;
//	}
//	if(y>z){
//		p=x; x=z; z=p;
//	}
//	
//	printf("Uredjeni brojevi: %.2f %.2f %.2f\n", x, y , z);
//	
//
//	return 0;
//}


//int main(){
//	
//	//sastaviti progrma koji ce za uneti opseg brojeva od a do b ispitati da li se u 
//	//zadataom opsegu  nalzai kvadrat broja x(unetog sa tastature
//	
//	int a,b,x;
//	printf("Unesite opseg brojeva : ");
//	scanf("%d%d", &a,&b);
//	printf("Unesite ceo broj x= ");
//	scanf("%d", &x);
//	
//	if((a <= x*x)&&(x*x <=b)){
//		printf("\nx*x=%d pripada oblasti[%d,%d]", x*x,a,b);
//		
//	}else("\nx*x=%d ne pripada oblasti[%d,%d]", x*x,a,b);
//	
//	return 0;
//}
//int main(){
//	
//	int n,i;
//	float suma = 0, brojevi;
//	float ars;
//	
//	printf("Koliko brojeva planirate uneti =");
//	scanf("%d", &n);
//	printf("Unesite %d brojeva:\n ", n);
//	for(i = 0;i < n;i++){
//		scanf("%f", &brojevi);
//		suma+=brojevi;
//	}
//	ars = suma / n;
//	printf("Suma zadatih brojeva je %.2f\n", suma);
//	printf("Aritmeticka sredina iznosi: %.2f", ars);
//	
//	
//	return 0;
//}
//
//


//faktrorijel broja 
//int main(){
//	
//	int x, i;
//	
//	int faktorijel = 1;
//	
//	printf("Unesite broj x=");
//	scanf("%d", &x);
//	//prvi nacin
//	for (i = 1; i <= x;i++){
//		
//		faktorijel = faktorijel*i;
//	}
//	printf("Faktorijel datog broja iznosi =%d \n", faktorijel);
//	//drugi nacin
//	for(i = x; i >= 1; i--){
//		faktorijel = faktorijel *i;
//	}
//	printf("Faktorijel datog broja iznosi =%d ", faktorijel);
//	
//	
//	return 0;
//}
//

//sastaviti program koji ce ucitati n realnih brojeva i ispisati nasjveci

//int main(){
//	
//	int n, i;
//	float br, max;
//	
//	printf("n = ");
//	scanf("%d", &n);
//	printf("Unesite 1. broj: ");
//	scanf("%f",&br);
//	max = br;
//	for(i = 2;i <= n;i++){
//		printf("Unesite %d. broj: ", i);
//		scanf("%f", &br);
//		if(br > max){
//			max = br;
//		}
//	}
//	printf("Najveci broj je %.2f :", max);
//	
//	
//	
//	return 0;
//}

// sastaviti  program koji ce ispisati sve trocifrene brojeve koji su deljivi sa 3 
// i ispisati njihovu sumu i koliko ih ima

int main(){
	int suma = 0;
	int i;
	int n =1;
	printf("Brojevi deljivi sa 3(trocifreni) su:");
	for(i =100; i<=999;i++){
		if(i % 3 == 0){
			n++;
			suma+=i;
			printf("%d,",i);
		}
		
	}
	printf(".");
	printf("\n");	printf("\n");
	printf("Trocifrenih brojeva deljivih sa 3 ima: %d\n", n);
	printf("Suma ovih brojeva iznosi =%d ", suma);
	return 0;
}











