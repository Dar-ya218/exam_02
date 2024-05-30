char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
int main()
{
    char original[] = "Hola Mundo";
    char copia[30];

    ft_strcpy(copia, original);

    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);

    return 0;
}