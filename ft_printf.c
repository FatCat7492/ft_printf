/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:43:21 by luschuma          #+#    #+#             */
/*   Updated: 2026/10/20 13:43:31 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	is_in_set(char c)
{
	char	*set = "cspdiuxX%";
	
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_print_decimal(int number)
{
	int	count;

	count = 0;
	ft_putnbr_fd(number, 1);
	while (number != 0)
	{
		count++;
		number / 10;
	}
	return (count);
}
int	triage_center(char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_print_char(args);
	if (type == 's')
		count += ft_print_string(args);
	if (type == 'p')
		count += ft_print_pointer(args);
	if (type == 'd')
		count += ft_print_decimal(args);
	if (type == 'i')
		count += ft_print_integer(args);
	if (type == 'u')
		count += ft_print_unsigned(args);
	if (type == 'x')
		count += ft_print_hex_min(args);
	if (type == 'X')
		count += ft_print_hex_max(args);
	if (type == '%')
		count += ft_print_percent(args);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int	count;
	va_list args

	va_start(args, s)
	count = 0;
	while (*s)
	{
		if (*s == "%" && is_in_set(*(s + 1)) == 1)
			triage_center(*(s + 1), args);
		ft_putchar_fd(*s, 1);
		s++;
		counter++;
	}
	va_end(args);
	return (count);
}

int main()
{
	int age = 32;
	char *nom = "Luis";
	ft_printf("Je m'appelle %s et j'ai %i", nom, age);
	return 0;
}

// #include "ft_printf.h"
// # include <unistd.h>
// # include <stdlib.h>
// # include <stdio.h>
// # include <string.h>
// # include <limits.h>
// # include <stdint.h>


// int	main ()
// {
// 	int				i;
// 	int				n;
// 	char			*s;
// 	unsigned int	uin;

// printf("\n//========================================================\n");
// 	printf("\n  TEST N.1   : TAILLE\n");
// 	i = printf("Hello");
// 		printf(" ==    printf taille :[%d]  \n", i);
// 	i = ft_printf("Hello");
// 		ft_printf(" == ft_printf taille :[%d]\n", i);

// 	// printf("\nTEST N.1.1   : TAILLE\n"); /* fonctionne seulement avec bonus (normalement) */
// 	// i =    printf("%% % %% % %% %% ");
// 	// 	printf("printf taille :[%d]\n", i);
// 	// i = ft_printf("%% % %% % %% %% ");
// 	// 	ft_printf("ft_printf taille :[%d]\n", i);
	
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.2   : CHAR C ET TAILLE\n");
// 	char c = 'a';
// 		printf("   printf %%c : [");
// 	i = printf("%c", c);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%c : [");
// 	i = ft_printf("%c", c);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.2.1 : CHAR C ESPACE ET TAILLE\n");
// 	c = ' ';
// 		printf("   printf %%c : [");
// 	i = printf("%c", c);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%c : [");
// 	i = ft_printf("%c", c);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.2.2 : CHAR C \\0 ET TAILLE\n");
// 	c = '\0';
// 		printf("   printf %%c : [");
// 	i = printf("%c", c);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%c : [");
// 	i = ft_printf("%c", c);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");	
// //========================================================

// 	printf("\n  TEST N.3   : STRING S ET TAILLE\n");
// 	s = "test sur le ft_printf %s";
// 		printf("   printf %%s : [");
// 	i = printf("%s", s);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%s : [");
// 	i = ft_printf("%s", s);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.3.1 : EMPTY STRING S ET TAILLE\n");
// 	s = "";
// 		printf("   printf %%s : [");
// 	i = printf("%s", s);
// 		printf("] ==    printf taille :[%d]\n", i);
// 			ft_printf("ft_printf %%s : [");
// 		i = ft_printf("%s", s);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.3.2 : STRING NULL ET TAILLE\n");
// 	s = NULL;
// 		printf("   printf %%s : [");
// 	i = printf("%s", s);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%s : [");
// 	i = ft_printf("%s", s);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.3.3 : STRING SPACE ET TAILLE\n");
// 	s = " ";
// 		printf("   printf %%s : [");
// 	i = printf("%s", s);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%s : [");
// 	i = ft_printf("%s", s);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.3.4 : STRING hello\\0world ET TAILLE\n");
// 	s = "hello\0world";
// 		printf("   printf %%s : [");
// 	i = printf("%s", s);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%s : [");
// 	i = ft_printf("%s", s);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.3.5 : STRING hello\\nworld ET TAILLE\n");
// 	s = "hello\nworld";
// 		printf("   printf %%s : [");
// 	i = printf("%s", s);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%s : [");
// 	i = ft_printf("%s", s);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.4   : POINTER P ET TAILLE\n");
// 	n = 42;
// 	int *ptr = &n;
// 		printf("   printf %%p : [");
// 	i = printf("%p", ptr);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", ptr);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.4.1 : P == NULL ET TAILLE\n");
// 	ptr = NULL;
// 		printf("   printf %%p : [");
// 	i = printf("%p", ptr);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", ptr);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.4.2 : P == INT_MIN ET TAILLE\n");
// 	n = INT_MIN;
// 	ptr = &n;
// 		printf("   printf %%p : [");
// 	i = printf("%p", ptr);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", ptr);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.4.3 : P == INT_MAX ET TAILLE\n");
// 	n = INT_MAX;
// 	ptr = &n;
// 		printf("   printf %%p : [");
// 	i = printf("%p", ptr);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", ptr);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.4.4 : P == (void *)&n == 42 ET TAILLE\n");
// 	n = 42;
// 		printf("   printf %%p : [");
// 	i = printf("%p", (void *)&n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", (void *)&n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.4.5 : P == (void *)NULL ET TAILLE\n");
// 		printf("   printf %%p : [");
// 	i = printf("%p", (void *)NULL);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", (void *)NULL);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.4.6 : P == (void *)\"Hello\" ET TAILLE\n");
// 	n = 42;
// 		printf("   printf %%p : [");
// 	i = printf("%p", (void *)"Hello");
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%p : [");
// 	i = ft_printf("%p", (void *)"Hello");
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.5   : DECIMAL 0 ET TAILLE\n");
// 	n = 0;
// 		printf("   printf %%d : [");
// 	i = printf("%d", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%d : [");
// 	i = ft_printf("%d", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.5.1 : DECIMAL 42 ET TAILLE\n");
// 	n = 42;
// 		printf("   printf %%d : [");
// 	i = printf("%d", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%d : [");
// 	i = ft_printf("%d", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.5.2 : NEGATIVE DECIMAL -42 ET TAILLE\n");
// 	n = -42;
// 		printf("   printf %%d : [");
// 	i = printf("%d", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%d : [");
// 	i = ft_printf("%d", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.5.3 : INT MIN ET TAILLE\n");
// 	n = INT_MIN;
// 		printf("   printf %%d : [");
// 	i = printf("%d", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%d : [");
// 	i = ft_printf("%d", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.5.4 : INT MAX ET TAILLE\n");
// 	n = INT_MAX;
// 		printf("   printf %%d : [");
// 	i = printf("%d", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%d : [");
// 	i = ft_printf("%d", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.6   : INTEGER 0 ET TAILLE\n");
// 	n = 0;
// 			printf("   printf %%i : [");
// 		i = printf("%i", n);
// 			printf("] ==    printf taille :[%d]\n", i);
// 			ft_printf("ft_printf %%i : [");
// 		i = ft_printf("%i", n);
// 			ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.6.1 : INTEGER 42 ET TAILLE\n");
// 	n = 42;
// 		printf("   printf %%i : [");
// 	i = printf("%i", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%i : [");
// 	i = ft_printf("%i", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.6.2 : NEGATIVE INTEGER -42 ET TAILLE\n");
// 	n = -42;
// 		printf("   printf %%i : [");
// 	i = printf("%i", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%i : [");
// 	i = ft_printf("%i", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.6.3 : INT MIN ET TAILLE\n");
// 	n = INT_MIN;
// 		printf("   printf %%i : [");
// 	i = printf("%i", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%i : [");
// 	i = ft_printf("%i", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.6.4 : INT MAX ET TAILLE\n");
// 	n = INT_MAX;
// 		printf("   printf %%i : [");
// 	i = printf("%i", n);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%i : [");
// 	i = ft_printf("%i", n);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.7   : UNSIGNED INT 0 ET TAILLE\n");
// 	uin = 0;
// 			printf("   printf %%u : [");
// 		i = printf("%u", uin);
// 			printf("] ==    printf taille :[%d]\n", i);
// 			ft_printf("ft_printf %%u : [");
// 		i = ft_printf("%u", uin);
// 			ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.7.1 : UNSIGNED INT 42 ET TAILLE\n");
// 	uin = 42;
// 		printf("   printf %%u : [");
// 	i = printf("%u", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%u : [");
// 	i = ft_printf("%u", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.7.2 : UNSIGNED INT_MAX ET TAILLE\n");
// 	uin = UINT_MAX;
// 		printf("   printf %%u : [");
// 	i = printf("%u", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%u : [");
// 	i = ft_printf("%u", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.7.3 : UNSIGNED INT -1 ET TAILLE\n");
// 	uin = -1;
// 		printf("   printf %%u : [");
// 	i = printf("%u", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%u : [");
// 	i = ft_printf("%u", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.8   : HEXA 'x' ET TAILLE\n");
// 	uin = 42;
// 		printf("   printf %%x : [");
// 	i = printf("%x", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%x : [");
// 	i = ft_printf("%x", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.8.1 : HEXA 'x' == INT_MIN ET TAILLE\n");
// 	uin = INT_MIN;
// 		printf("   printf %%x : [");
// 		i = printf("%x", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%x : [");
// 	i = ft_printf("%x", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.8.2 : HEXA 'x' == INT_MAX ET TAILLE\n");
// 	uin = INT_MAX;
// 		printf("   printf %%x : [");
// 	i = printf("%x", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%x : [");
// 	i = ft_printf("%x", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.8.3 : HEXA 'x' == 0 ET TAILLE\n");
// 		uin = 0;
// 			printf("   printf %%x : [");
// 		i = printf("%x", uin);
// 			printf("] ==    printf taille :[%d]\n", i);
// 			ft_printf("ft_printf %%x : [");
// 		i = ft_printf("%x", uin);
// 			ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.9   : HEXA 'X' ET TAILLE\n");
// 	uin = 42;
// 		printf("   printf %%X : [");
// 	i = printf("%X", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%X : [");
// 	i = ft_printf("%X", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.9.1 : HEXA 'X' == INT_MIN ET TAILLE\n");
// 	uin = INT_MIN;
// 		printf("   printf %%X : [");
// 		i = printf("%X", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%X : [");
// 	i = ft_printf("%X", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.9.2 : HEXA 'X' == INT_MAX ET TAILLE\n");
// 	uin = INT_MAX;
// 		printf("   printf %%X : [");
// 	i = printf("%X", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%X : [");
// 	i = ft_printf("%X", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.9.3 : HEXA 'X' == 0 ET TAILLE\n");
// 	uin = 0;
// 		printf("   printf %%X : [");
// 	i = printf("%X", uin);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%X : [");
// 	i = ft_printf("%X", uin);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);
// printf("\n//========================================================\n");
// //========================================================

// 	printf("\n  TEST N.10  : %%%% TAILLE\n");
// 		i = printf("%%");
// 			printf(" ==    printf taille :[%d]  \n", i);
// 		i = ft_printf("%%");
// 			ft_printf(" == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.10.1: MULTIPLE %%d %%i %%d ET TAILLE\n");
// 		printf("   printf %%d %%i %%d : [");
// 	i = printf("%d %i %d", 42, -42, 0);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%d %%i %%d : [");
// 	i = ft_printf("%d %i %d", 42, -42, 0);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.10.2: MULTIPLE %%x %%X ET TAILLE\n");
// 		printf("   printf %%x %%X : [");
// 	i = printf("%x %X", 255, 255);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf %%x %%X : [");
// 	i = ft_printf("%x %X", 255, 255);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);

// 	printf("\n  TEST N.10.3: MULTIPLE ???? ET TAILLE\n");
// 		printf("   printf ???? : [");
// 	i = printf("%c %s %p %d %i %u %x %X %%",
//     'A', "hello", (void *)&n, -42, 42, 42u, 42, 42);
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf ???? : [");
// 	i = ft_printf("%c %s %p %d %i %u %x %X %%",
//     'A', "hello", (void *)&n, -42, 42, 42u, 42, 42);
// 		ft_printf("] == ft_printf taille :[%d]\n", i);	

// 	printf("\n  TEST N.10.4: EMPTY\n");
// 		printf("   printf : [");
// 	i = printf("");
// 		printf("] ==    printf taille :[%d]\n", i);
// 		ft_printf("ft_printf : [");
// 	i = ft_printf("");
// 		ft_printf("] == ft_printf taille :[%d]\n", i);	

// 	// 	printf("\n  TEST N.10.4: %v\n"); /* a teste sans flag */ 
// 	// 	printf("   printf : [");
// 	// i = printf("%v");
// 	// 	printf("] ==    printf taille :[%d]\n", i);
// 	// 	ft_printf("ft_printf : [");
// 	// i = ft_printf("%v");
// 	// 	ft_printf("] == ft_printf taille :[%d]", i);
// }
// // cc -Wall -Wextra -Werror ft_printf.c main.c ft_putstr_x.c ft_itoabx.c ft_putnbr_x.c ft_putchar_x.c libft/ft_strlen.c libft/ft_putchar_fd.c && ./a.out