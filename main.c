#include "libft.h"
#include <stdio.h>


#include "ft_atoi.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"


int main()
{
	//ft_atoi checking >>
	printf("ft_atoi_checking >>\n");
	char a[]= "      123 4 ";
	char b[] = "     -asd48";
	char c[] = " -442";
	char d[] = " 565";
	char e[] = " ++567";
	int i = ft_atoi(a);
	int j = ft_atoi(b);
	int k = ft_atoi(c);
	int l = ft_atoi(d);
	int m = ft_atoi(e);
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n" ,k );
	printf("%d\n", l);
	printf("%d\n", m);
	printf("ft_atoi_checking << \n\n");
	//ft_atoi checking <<
	

	//is_alpha checking
	printf( "ft_is_alpha checking >>\n");
	printf("%d\n",ft_isalpha('h'));
	printf("%d\n",ft_isalpha('L'));
	printf("%d\n",ft_isalpha('+'));
	printf("%d\n",ft_isalpha('5'));
	printf("%d\n",ft_isalpha(5));
	printf("ft_is_alpha Checking <<\n\n");
	//ft_isalpha Checking <<

	//ft_isdigit_checking >>
	printf("ft_isdigit checking >>\n");
	printf("%d\n",ft_isdigit('0'));
	printf("%d\n",ft_isdigit('7'));
	printf("%d\n",ft_isdigit('h'));
	printf("ft_isdigit checking <<\n\n");
	//ft_isdigit checking << 
	
	//ft_isascii test >>
	printf("ft_isascii test >>\n");
	printf("%d\n",ft_isascii('+'));
	printf("%d\n",ft_isascii('s'));
	printf("%d\n",ft_isascii('5'));
	printf("%d\n",ft_isascii(128));
	printf("ftisascii test <<\n\n");
	//ft_isascii test  << 
	
	//ft_isprint test >>
	printf("ft_isprint test >>\n");
	printf("%d\n",ft_isprint('+'));
	printf("%d\n",ft_isprint('s'));
	printf("%d\n",ft_isprint('5'));
	printf("%d\n",ft_isprint(128));
	printf("ft_isprint test <<\n\n");
	//ft_isprint test  << 
	
	//ft_toupper test >>
	printf("ft_toupper test >>\n");
	printf("%c\n",(char)ft_toupper('a'));
	printf("%c\n",(char)ft_toupper('v'));
	printf("%c\n",(char)ft_toupper('F'));
	printf("%c\n",(char)ft_toupper('+'));
	printf("ft_toupper test <<\n\n");
	//ft_toupper test  <<
	 
	//ft_tolower test >>
	printf("ft_tolower test >>\n");
	printf("%c\n",(char)ft_tolower('A'));
	printf("%c\n",(char)ft_tolower('V'));
	printf("%c\n",(char)ft_tolower('f'));
	printf("%c\n",(char)ft_tolower('+'));
	printf("ft_tolower test <<\n\n");
	//ft_tolower test  <<
	
   //ft_strchr test >>
   	char *s = "klmnoArsAen";
	printf("ft_strchr test >>\n");
	printf("%p\n", ft_strchr(s, 'A'));
	printf("%s\n", ft_strchr(s, 'a'));
	printf("%s\n", ft_strchr(s, 'A'));
	printf("system strchr test \n");
	printf("%p\n", strchr(s, 'A'));
	printf("%s\n", strchr(s, 'p'));
	printf("%s\n", strchr(s, 'A'));
	printf("ft_strchr test <<");


}
