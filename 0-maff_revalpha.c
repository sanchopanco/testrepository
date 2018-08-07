/*Вывести алфавит реверсивно, чередуя верхний и нижний регистр используя write */

 #include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1); //(1-дискриптор вывода, %c откуда, 1 - сколько байт)
  return (0);
}
int main () {
	char i;
	for (i=122;i>=97;i=i-2) {  // коды алфавита нижнего регистра ASCII
		ft_putchar(i);
		ft_putchar(i-33); // верхний регистр отличается от нижнего в ASCII на 32 симв
	}
	
	return 0;
}