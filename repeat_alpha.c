// Программа , работает с командной строкой и печатает ее
// в зависимости от места в алфавите 
//a-a, b-bb, c-ccc, d-dddd

#include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1); //(1-дискриптор вывода, %c откуда, 1 - сколько байт)
  return (0);
}
int ft_putstring(char *str){
	int i = 0;
	while (str[i] !='\0'){
		if ((str[i]>='a') &&( str[i]<='z')){ 
		for (int j=0;j<=str[i]-'a';j++)
		write(1,&str[i],1);
	i=i+1;
		}
		if ((str[i]>='A') &&( str[i]<='Z')){ 
		for (int j=0;j<=str[i]-'A';j++)
		write(1,&str[i],1);
	i=i+1;
		}
	}
	ft_putchar('\n');
	return 0;
}
int main(int argc,char **argv){ //, параметр argc=кол-ву пар-в ком.строки+1
	if (argc == 2 ){			//тк как параметр 0 служебный- полный путь и имя исполн файла
	ft_putstring(argv[1]);
	}
	else ft_putchar('\n');;
	return 0;
}