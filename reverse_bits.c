//Программа, переворачивающая битовое представление char (как реверс строки))
//смысл в получении числа 0000001, 000000010, 00001000 и сложение их

//#include <stdio.h>
unsigned char reverse_bits(unsigned char octet){
	unsigned char res =0;;
	res=res |(((octet >> 0) & 1) << 7);
	res=res |(((octet >> 1) & 1) << 6);
	res=res |(((octet >> 2) & 1) << 5);
	res=res |(((octet >> 3) & 1) << 4);
	res=res |(((octet >> 4) & 1) << 3);
	res=res |(((octet >> 5) & 1) << 2);
	res=res |(((octet >> 6) & 1) << 1);
	res=res |(((octet >> 7) & 1) << 0);
	return res;	
}
/*int main(){
	printf("%d", reverse_bits(4));
}*/