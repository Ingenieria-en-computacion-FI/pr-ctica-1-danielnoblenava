
#include <stdio.h>

/*
  La dirección a[5] es mayor que a[4] porque esta más "arriba" en memoria
*/

int main(){
    	int a[6];
	printf("%p", &a[4]);
	printf("%p", &a[5]);
    return 0;
}
