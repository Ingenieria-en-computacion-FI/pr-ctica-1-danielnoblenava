
#include <stdio.h>

/*
  Tamaño del tipo: 4 bytes
  direccion de a[5] = 0x7ffc752c7d50
  formula = Base + i x tam_tipo
*/
int main(){
	int a[3];
	int b[3];
	int c[3];
	
	for (int i = 0; i < 3; i++){
		int ra = 10 + i * sizeof(int);	
		printf("\n&a[%d] = %d", i, ra);
	}
	printf("\na[5] = %p", &a[5]);
	printf("\n");
        return 0;
}
