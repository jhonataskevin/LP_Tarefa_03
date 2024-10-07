#include <stdio.h>
#define qdeEstados 27

int main(){
	
	int i;
	float indice, media;
	
	media = 0;
	for(i=1; i<=qdeEstados; i++){
		print("Idicice %d ", i);
		scanf("%f", &indice);
		
		media += indice;
	}
	
	
	media = media / qdeEstados;
	printf("A media no Brasil e %.1f\n", media);
	
	return 0;
}
