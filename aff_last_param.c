
// Программа принимает строчки как аргументы, отображает последний аргумент
// Если аргументов <1, выводит новую строчку
 #include <unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1); //(1-дискриптор вывода, %c откуда, 1 - сколько байт)
  return (0);
}
int ft_putstring(char *str){ //по аналогии системный вывод уже строчки посимвольно
	char i=0;
	while (str[i]!='\0'){
		ft_putchar(str[i]);
		i++;
	}
	return 0;
}
int main(int argc, char **argv) { // **argv -указатель на двумерный массив
	if(argc >1)
	ft_putstring(argv[argc-1]); // выбор последней строчки 
	else ft_putchar(1,'\n',1);
	
	return 0;
}