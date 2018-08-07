// Программа , работает с командной строкой и печатает ее
// изменяет букву на букву идущую спустя 13 мест в алфавите
//a-n , z-m ..

#include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1); //(1-дискриптор вывода, %c откуда, 1 - сколько байт)
  return (0);
}
int ft_putstring(char *str){
	int i = 0;
	while (str[i] !='\0'){
		if ((str[i]>='a') &&( str[i]<='m')){ 
		str[i]=str[i]+13;
		write(1,&str[i],1);
	i=i+1;
		}
	else if ((str[i]>'m') &&( str[i]<='z')){
			str[i]=str[i]-13;
		    write(1,&str[i],1);
	i=i+1;
	}	
		else if ((str[i]>='A') &&( str[i]<='M')){ 
		str[i]=str[i]+13;
		write(1,&str[i],1);
	i=i+1;
		}
			else if ((str[i]>'M') &&( str[i]<='Z')){
			str[i]=str[i]-13;
		    write(1,&str[i],1);
	i=i+1;
	}	
		else {
			write(1,&str[i],1);
			i++;
		}
	}
	
	return 0;
}
int main(int argc,char **argv){ //, параметр argc=кол-ву пар-в ком.строки+1
	if (argc == 2 ){			//тк как параметр 0 служебный- полный путь и имя исполн файла
	ft_putstring(argv[1]);
	}
	else ft_putchar('\n');;
	return 0;
}