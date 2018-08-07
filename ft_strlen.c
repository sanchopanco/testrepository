//Функция, возвращающая длину строки
#include <stdio.h>


int	ft_strlen(char *str) {
	int i =0;
	while (str[i] !='\0')
		i++;
	return i;
}

/*
int main(){
	printf("%d\n",ft_strlen("prsad"));
	return 0;
}
/* для проверки результатов