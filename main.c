#include "libft.h"
#include <stdio.h>
#include <string.h>


#include "ft_atoi.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strnstr.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memccpy.c"
#include "ft_memchr.c"
#include "ft_memmove.c"
#include "ft_substr.c"
#include "ft_strjoin.c"
#include "ft_strlen.c"
#include "ft_itoa.c"
#include "ft_strtrim.c"
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
	printf("%s\n", ft_strchr(s, '.'));
	printf("%s\n", ft_strchr(s, 'A'));
	printf("system strchr test \n");
	printf("%p\n", strchr(s, 'A'));
	printf("%s\n", strchr(s, '.'));
	printf("%s\n", strchr(s, 'A'));
	printf("ft_strchr test <<");
  	//ft_strchr test << 
	
	 //ft_strrchr test >>
   	char *s1 = "klmnoArsAen";
	printf("ft_strrchr test >>\n");
	printf("%s\n", ft_strrchr(s1, 'k'));
	printf("%s\n", ft_strrchr(s1, '.'));
	printf("%s\n", ft_strrchr(s1, 'A'));
	printf("system strrchr test \n");
	printf("%s\n", strrchr(s1, 'k'));
	printf("%s\n", strrchr(s1, '.'));
	printf("%s\n", strrchr(s1, 'A'));
	printf("ft_strrchr test <<\n\n");
  	//ft_strrchr test << 
	
	//ft_strnstr test >>
	printf("ft_strnstr test>>\n");
	const char *largestring = "FooBarBaz";
	const char *smallstring = "Bar";
	char *ptr;
 	
	ptr = ft_strnstr(largestring, smallstring, 7);
	printf("%p\n", ptr);
	printf("%s\n", ptr);
	printf("%s\n", ft_strnstr("BikBarBaz", "Bar",10 ));
	printf("ft_strnstr test <<\n");
	// ft_strnstr test <<
	
	//ft_memset test >>
	
	printf("system memset >>\n");
	char str1[] = "This is string\0";
	char str2[] = "This is also string\0";
	printf("%s\n",str1);
	memset(str1, '%', 5);
	printf("%s\n", str1);
	printf("sysytem memset <<\n");
	printf("ft_memset test>>\n");
	printf("%s\n", str2);
	ft_memset(str2, '$', 5);
	printf("%s\n", str2);
	printf("ft_memset test <<\n \n");
	//ft_memset test <<
	
	//bzero test >>
	printf("system bzero >>\n");
	char str3[] = "This is string\0";
	char str4[] = "This is also string\0";
	printf("%s\n",str3);
	bzero(str3, 1);
	printf("%s\n", str3);
	printf("sysytem bzero <<\n");
	printf("ft_bzero test>>\n");
	printf("%s\n", str4);
	ft_bzero(str4, 4);
	printf("%s\n", str4);
	printf("ft_bzero test << \n");
	//ft_bzero test <<
	
	// ft_memcpy test >>
	printf(" memcpy test >> \n");
	char dst[] = "Arsen";
	char src[] = "janik";
	char dst1[] = "Arsen";
	char src1[] = "janik";
	printf("System memcpy result >> \n");
	printf("%s\n", memcpy(dst, src, 3));
	printf("ft_memcpy result >> \n");
	printf("%s\n", ft_memcpy(dst1, src1, 3));
	printf("ft_memcpt test << \n");
	// ft_memcpy test <<
	
	// ft_memccpy test >>
	printf(" memccpy test >> \n");
	char dst3[] = "Arsen";
	char src3[] = "janik";
	char dst4[] = "Arsen";
	char src4[] = "janik";
	printf("System memccpy result >> \n");
	printf("%s\n", memccpy(dst3, src3, '4', 5));
	printf("ft_memccpy result >> \n");
	printf("%s\n", ft_memccpy(dst4, src4, '4', 5));
	printf("ft_memccpt test << \n");
	// ft_memccpy test <<
	
	//ft_memmove test >>
	char dest[] = "Aticleworld";
    const char sorc[]  = "Amlendra";
    //Source and destination before memmove
    printf("Before memmove >> dest = %s, sorc = %s\n\n", dest, sorc);
    ft_memmove(dest, sorc, 5);
    //Source and destination after memmove
    printf("After memmove >> dest = %s, sorc = %s\n\n", dest, sorc);
    
	
	//ft_substr.c test >>;
	
	printf("ft_substr test >> \n");
	printf("%s\n", ft_substr("araratyandashtavayr", 5, 7));
	printf("ft_substr test << \n\n");

	//ft_substr.c test <<;

	//ft_strjoin.c test >>
	printf("ft_strjoin test >>\n");
	printf("%s\n", ft_strjoin("ya odinokiy ", "bradyaga lybvi kazanova"));
	printf("ft_strjoin test << \n\n");
	//ft_strjoin test <<
	
	//ft_itoa test>>
	printf("ft_itoa test >>\n");
	printf("%s\n",ft_itoa(-2147483648));
	printf("ft_itoa test << \n\n");
	//ft_itoa test <<
	
	//ft_strtrim test>>
	printf("ft_strtrim test >>\n");
	printf("%s\n",ft_strtrim("abcde", "ae"));
	printf("%s\n",ft_strtrim("abcde", "ea"));
	printf("%s\n",ft_strtrim("abcde", "cd"));
	printf("%s\n",ft_strtrim("abcde", "dabe"));


	printf("ft_strtrim << \n\n");
	//ft_strtrim test <<

	//just debil test >>
	printf("just debil testing No1\n");
	int count1 = 0;
	int count2 = 0;
	char str[] = "0123456789";
	while(str[count1])
		count1++;
	while(str[count2])
		++count2;
	printf("%d\n", count1);
	printf("%d\n", count2);
	// just debil test <<
	
}
