#include <stdio.h>
 
int main() {
    int i;
    for (i=122;i>=97;i--) {
		if (i % 2 == 0)
			printf("%c",i); // Алфавит через табл ASCII	
		else 
			printf("%c", i-32); //Верхний регистр от нижнего отличается на 32 в табл ASCII
    }
    printf("\n");
	return 0;
}