#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to print test results
void print_test_result(const char *test_name, int result) {
    if (result)
        printf("%s: Passed\n", test_name);
    else
        printf("%s: Failed\n", test_name);
}

// Function pointers for testing
void striteri_func(unsigned int i, char *c) {
    *c = *c + 1;
}

char strmapi_func(unsigned int i, char c) {
    return c + 1;
}

int main(void) {
    char *result;
    int num;
    char str[100];

    // Testing ft_atoi
    printf("Testing ft_atoi:\n");
    print_test_result("ft_atoi(\"123\") == 123", ft_atoi("123") == 123);
    print_test_result("ft_atoi(\"-42\") == -42", ft_atoi("-42") == -42);
    print_test_result("ft_atoi(\"0\") == 0", ft_atoi("0") == 0);
    print_test_result("ft_atoi(\"   42abc\") == 42", ft_atoi("   42abc") == 42);
    print_test_result("ft_atoi(\"abc42\") == 0", ft_atoi("abc42") == 0);

    // Testing ft_itoa
    printf("\nTesting ft_itoa:\n");
    result = ft_itoa(123);
    print_test_result("ft_itoa(123)", strcmp(result, "123") == 0);
    free(result);

    result = ft_itoa(-42);
    print_test_result("ft_itoa(-42)", strcmp(result, "-42") == 0);
    free(result);

    result = ft_itoa(0);
    print_test_result("ft_itoa(0)", strcmp(result, "0") == 0);
    free(result);

    // Testing ft_strlen
    printf("\nTesting ft_strlen:\n");
    print_test_result("ft_strlen(\"hello\") == 5", ft_strlen("hello") == 5);
    print_test_result("ft_strlen(\"\") == 0", ft_strlen("") == 0);

    // Testing ft_strcpy and ft_strdup
    printf("\nTesting ft_strcpy and ft_strdup:\n");
    char src[] = "source";
    char dest[20];
    ft_strcpy(dest, src);
    print_test_result("ft_strcpy(dest, src)", strcmp(dest, "source") == 0);

    result = ft_strdup(src);
    print_test_result("ft_strdup(src)", strcmp(result, "source") == 0);
    free(result);

    // Testing ft_strcat
    printf("\nTesting ft_strcat:\n");
    char dest2[50] = "Hello, ";
    ft_strcat(dest2, "world!");
    print_test_result("ft_strcat", strcmp(dest2, "Hello, world!") == 0);

    // Testing ft_strcmp
    printf("\nTesting ft_strcmp:\n");
    print_test_result("ft_strcmp(\"abc\", \"abc\") == 0", ft_strcmp("abc", "abc") == 0);
    print_test_result("ft_strcmp(\"abc\", \"abd\") < 0", ft_strcmp("abc", "abd") < 0);
    print_test_result("ft_strcmp(\"abd\", \"abc\") > 0", ft_strcmp("abd", "abc") > 0);

    // Testing ft_substr
    printf("\nTesting ft_substr:\n");
    result = ft_substr("Hello, world!", 7, 5);
    print_test_result("ft_substr(\"Hello, world!\", 7, 5)", strcmp(result, "world") == 0);
    free(result);

    // Testing ft_strjoin
    printf("\nTesting ft_strjoin:\n");
    result = ft_strjoin("Hello, ", "world!");
    print_test_result("ft_strjoin(\"Hello, \", \"world!\")", strcmp(result, "Hello, world!") == 0);
    free(result);

    // Testing ft_strtrim
    printf("\nTesting ft_strtrim:\n");
    result = ft_strtrim("   \t\nHello, world!   \t\n", " \t\n");
    print_test_result("ft_strtrim(\"   \t\nHello, world!   \t\n\", \" \t\n\")", strcmp(result, "Hello, world!") == 0);
    free(result);

    // Testing ft_split
    printf("\nTesting ft_split:\n");
    char **split_result = ft_split("Hello world example", ' ');
    print_test_result("ft_split(\"Hello world example\", ' ') [0]", strcmp(split_result[0], "Hello") == 0);
    print_test_result("ft_split(\"Hello world example\", ' ') [1]", strcmp(split_result[1], "world") == 0);
    print_test_result("ft_split(\"Hello world example\", ' ') [2]", strcmp(split_result[2], "example") == 0);
    free(split_result[0]);
    free(split_result[1]);
    free(split_result[2]);
    free(split_result);

    // Testing ft_putchar_fd and ft_putstr_fd
    printf("\nTesting ft_putchar_fd and ft_putstr_fd:\n");
    printf("Check terminal output for ft_putchar_fd and ft_putstr_fd.\n");
    ft_putchar_fd('A', 1);
    ft_putstr_fd(" Test", 1);
    printf("\n");

    // Testing ft_putnbr_fd
    printf("\nTesting ft_putnbr_fd:\n");
    printf("Check terminal output for ft_putnbr_fd.\n");
    ft_putnbr_fd(12345, 1);
    printf("\n");

    // Additional tests
    printf("\nTesting additional functions:\n");
    print_test_result("ft_isalpha('a') == 1", ft_isalpha('a') == 1);
    print_test_result("ft_isalpha('1') == 0", ft_isalpha('1') == 0);
    print_test_result("ft_isdigit('1') == 1", ft_isdigit('1') == 1);
    print_test_result("ft_isdigit('a') == 0", ft_isdigit('a') == 0);
    print_test_result("ft_toupper('a') == 'A'", ft_toupper('a') == 'A');
    print_test_result("ft_tolower('A') == 'a'", ft_tolower('A') == 'a');
    print_test_result("ft_isprint(' ') == 1", ft_isprint(' ') == 1);
    print_test_result("ft_isprint(127) == 0", ft_isprint(127) == 0);
    print_test_result("ft_isascii('A') == 1", ft_isascii('A') == 1);
    print_test_result("ft_isascii(128) == 0", ft_isascii(128) == 0);

    // Testing ft_strnstr
    printf("\nTesting ft_strnstr:\n");
    result = ft_strnstr("Hello, world!", "world", 12);
    print_test_result("ft_strnstr(\"Hello, world!\", \"world\", 12)", strcmp(result, "world!") == 0);
    result = ft_strnstr("Hello, world!", "world", 5);
    print_test_result("ft_strnstr(\"Hello, world!\", \"world\", 5)", result == NULL);

    // Testing ft_strchr and ft_strrchr
    printf("\nTesting ft_strchr and ft_strrchr:\n");
    print_test_result("ft_strchr(\"Hello, world!\", 'w')", strcmp(ft_strchr("Hello, world!", 'w'), "world!") == 0);
    print_test_result("ft_strrchr(\"Hello, world!\", 'o')", strcmp(ft_strrchr("Hello, world!", 'o'), "orld!") == 0);

    // Testing ft_memccpy, ft_memchr, and ft_memmove
    printf("\nTesting ft_memccpy, ft_memchr, and ft_memmove:\n");
    char memccpy_dest[20] = "Hello, world!";
    ft_memccpy(memccpy_dest, "Test123", '1', 20);
    print_test_result("ft_memccpy", memccpy_dest[6] == '1');

    char memchr_src[20] = "Find me";
    char *memchr_result = ft_memchr(memchr_src, 'e', 20);
    print_test_result("ft_memchr", memchr_result != NULL && memchr_result[0] == 'e');

    char memmove_src[20] = "123456789";
    ft_memmove(memmove_src + 2, memmove_src, 7);
    memmove_src[9] = '\0';
    print_test_result("ft_memmove", strcmp(memmove_src, "12123456789") == 0);

    // Testing ft_memset
    printf("\nTesting ft_memset:\n");
    char memset_test[20] = "abcdef";
    ft_memset(memset_test, 'x', 3);
    print_test_result("ft_memset", strncmp(memset_test, "xxxdef", 6) == 0);

    // Testing ft_strdel and ft_strnew
    printf("\nTesting ft_strdel and ft_strnew:\n");
    char *strnew_result = ft_strnew(10);
    print_test_result("ft_strnew(10)", strnew_result != NULL && ft_strlen(strnew_result) == 10);
    ft_strdel(&strnew_result);
    print_test_result("ft_strdel(&strnew_result) - memory freed", strnew_result == NULL);

    // Testing ft_striteri and ft_strmapi
    printf("\nTesting ft_striteri and ft_strmapi:\n");
    char striteri_test[] = "abcdef";
    ft_striteri(striteri_test, striteri_func);
    print_test_result("ft_striteri", strcmp(striteri_test, "bcdefg") == 0);

    result = ft_strmapi("abcdef", strmapi_func);
    print_test_result("ft_strmapi", strcmp(result, "bcdefg") == 0);
    free(result);

    return 0;
}
