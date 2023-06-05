#include <stdio.h>

int main(){

double plate[3];
double *p;
p= &plate[0];
printf("Adresa je : %p\n", p);

*p = 504.039;
p++;

printf("Adresa je : %p\n", p);

*p= 490.0348;
p++;
printf("Adresa je : %p\n", p);


return 0;


}
