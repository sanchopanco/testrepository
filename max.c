#include <stdio.h>
int max(int* tab,unsigned int len) {
	int i;
	int max =0;
	if (len !=0){
	for (i=0;i<=len-1;i++) {
		if (tab[i] > max)
			max = tab[i];
	}
	return max;
	}
	else return 0;
	
}
int main () {
	int a[] = {1,5,10,30,4};
	printf("%d\n", max(a,5));
	return 0;

}