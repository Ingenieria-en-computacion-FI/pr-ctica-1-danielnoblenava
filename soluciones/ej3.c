
#include <stdio.h>

/*
  Las direcciones estan juntas en memoria y dependen de: 
  1. Son arrays
  2. Son almacenados en el stack
*/
int main(){
    
	int a[3], b[3], c[3];
	printf("\nDirecciones de a: ");
	for(int i = 0; i < 3; i++)
		printf("\na[%d]: %p", i,  &a[i]);
	
	printf("\nDirecciones de b: ");
	for(int i = 0; i < 3; i++)
		printf("\nb[%d]: %p", i, &b[i]);
	
	printf("\nDirecciones de c: ");
	for (int i = 0; i < 3; i++)
		printf("\nc[%d]: %p", i, &c[i]);
	printf("\n");
    return 0;
}
