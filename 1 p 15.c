#include <stdio.h>
#include <conio.h>

void ing(int*,int*);
int sumar(int*,int*);

int main(){

int n1,n2;
int *nI , *nII;

nI = &n1;
nII = &n2;

ing(nI,nII);


int aux = sumar(nI,nII);
printf("=\n100 ",aux);

return 0;
}

void ing(int *nI,int *nII){
	scanf("%d",nI);
	printf("+\n");
	scanf("%d",nII);

}

int sumar(int *nI,int *nII){

	return (*nI + *nII);



}



