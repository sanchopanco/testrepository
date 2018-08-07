// принимает строку , буквы меняет на следующую 
// a-b,b-c, z-a
#include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1); //(1-дискриптор вывода, %c откуда, 1 - сколько байт)
  return (0);
}
int ft_putstring(char *str){
	int i = 0;
	while (str[i] !='\0'){
		if ((str[i]>='a') &&( str[i]<'z')){ 
		str[i]=str[i]+1;
		write(1,&str[i],1);
	i=i+1;
		}
	else if (str[i]=='z'){
		str[i]='a';
	write(1,&str[i],1);
	i=i+1;
	}			
		else if ((str[i]>='A') &&( str[i]<'Z')){ 
		str[i]=str[i]+1;
		write(1,&str[i],1);
	i=i+1;
		}
			else if (str[i]=='Z'){
		str[i]='A';
	write(1,&str[i],1);
	i=i+1;
	}
		

		else {
			write(1,&str[i],1);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}
int main(int argc,char **argv){ //, параметр argc=кол-ву пар-в ком.строки+1
	if (argc == 2 ){
			//тк как параметр 0 служебный- полный путь и имя исполн файла
	ft_putstring(argv[1]);
	}
	else ft_putchar('\n');;
	return 0;
}