int ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int main()
{
    char *str = "Hola Mundo";
    int length = ft_strlen(str);
    printf("La longitud de '%s' es %d\n", str, length);
    return 0;
}