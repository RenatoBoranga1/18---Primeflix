#include <stdio.h>
int main(){

	int  Z, X, f,j = 0, aux;
	scanf ("%d",&X);
	scanf ("%d",&y);
	scanf ("%d",&f);
	aux = f - Z;

		while (j<Z){
			if (aux<0){
				if (aux==f-Z){
					printf ("[]");
				}
				else{
					printf ("-[]");
				}
			}
			else if (aux==0){
	  			if (aux==f-Z){
		  			printf("[BOV]");
	  			}
	  			else {
					printf("-[BOV]");
				}
			}
	   		else if  (aux!=f){
				if  (aux==f-Z){
					printf("[%d]", aux);
				}
				else {
					printf ("-[%d]", aux);
				}
			}
			else if (aux==f){
				break;
			}
			aux = aux+1;
			j++;
		}
		int  i=0, y;
			y = f;

			while(i<=Z){
				if(y==f){
					printf("-{%d}", f);
			}
			else if(y==X+1){
				printf("-[EOV]");

			}
			else if(y<=X){
				printf("-[%d]", y);

			}

			else if(y>X){
				printf("-[]");
			}
			i++;
			y = y + 1;
		}


}
