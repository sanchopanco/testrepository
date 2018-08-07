/*Требуется вывести цифры в порядке возрастания, используя только write */

 #include <unistd.h>

int ft_putchar(char c)
{
  write(1, &c, 1); //(1-дискриптор вывода, %c откуда, 1 - сколько байт)
  return (0);
}

void ft_print_numbers(void)
{
  char i;
  i = '0';
  for (i='0';i<='9';i++){
    ft_putchar(i);
  }
}

int main()
{
  ft_print_numbers();
  return(0);
}