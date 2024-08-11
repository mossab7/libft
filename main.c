#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void test_ft_atoi(const char *str) {
    printf("ft_atoi(\"%s\") = %d\n", str, ft_atoi(str));
}

void test_ft_strclr(char *s) {
    printf("Before ft_strclr: \"%s\"\n", s);
    ft_strclr(s);
    printf("After ft_strclr: \"%s\"\n", s);
}

void test_ft_strequ(const char *s1, const char *s2) {
    printf("ft_strequ(\"%s\", \"%s\") = %d\n", s1, s2, ft_strequ(s1, s2));
}

void test_ft_strdel(char **as) {
    printf("Before ft_strdel: %s\n", *as);
    ft_strdel(as);
    printf("After ft_strdel: %p\n", (void *)*as);  // Should be NULL
}

void test_ft_memalloc(size_t size) {
    void *ptr = ft_memalloc(size);
    if (ptr) {
        printf("ft_memalloc(%zu) = %p\n", size, ptr);
        free(ptr);
    } else {
        printf("ft_memalloc(%zu) failed\n", size);
    }
}

void test_ft_strnew(size_t size) {
    char *str = ft_strnew(size);
    if (str) {
        printf("ft_strnew(%zu) = \"%s\"\n", size, str);
        free(str);
    } else {
        printf("ft_strnew(%zu) failed\n", size);
    }
}

void test_ft_memdel(void **ap) {
    printf("Before ft_memdel: %p\n", (void *)*ap);
    ft_memdel(ap);
    printf("After ft_memdel: %p\n", (void *)*ap);  // Should be NULL
}

void test_ft_isspace(int c) {
    printf("ft_isspace(%c) = %d\n", c, ft_isspace(c));
}

void test_ft_isalnum(int c) {
    printf("ft_isalnum(%c) = %d\n", c, ft_isalnum(c));
}

void test_ft_bzero(void *s, size_t n) {
    printf("Before ft_bzero: ");
    for (size_t i = 0; i < n; i++) {
        printf("%c", ((char *)s)[i]);
    }
    printf("\n");
    ft_bzero(s, n);
    printf("After ft_bzero: ");
    for (size_t i = 0; i < n; i++) {
        printf("%c", ((char *)s)[i]);
    }
    printf("\n");
}

void test_ft_isalpha(int c) {
    printf("ft_isalpha(%c) = %d\n", c, ft_isalpha(c));
}

void test_ft_isascii(int c) {
    printf("ft_isascii(%c) = %d\n", c, ft_isascii(c));
}

void test_ft_isdigit(int c) {
    printf("ft_isdigit(%c) = %d\n", c, ft_isdigit(c));
}

void test_ft_isprint(int c) {
    printf("ft_isprint(%c) = %d\n", c, ft_isprint(c));
}

void test_ft_memccpy(void *dest, const void *src, int c, size_t n) {
    ft_memccpy(dest, src, c, n);
    printf("After ft_memccpy: %s\n", (char *)dest);
}

void test_ft_memchr(const void *s, int c, size_t n) {
    void *result = ft_memchr(s, c, n);
    if (result) {
        printf("ft_memchr found '%c' at %p\n", c, result);
    } else {
        printf("ft_memchr did not find '%c'\n", c);
    }
}

void test_ft_memcmp(const void *s1, const void *s2, size_t n) {
    int result = ft_memcmp(s1, s2, n);
    printf("ft_memcmp: %d\n", result);
}

void test_ft_memcpy(void *dest, const void *src, size_t n) {
    ft_memcpy(dest, src, n);
    printf("After ft_memcpy: %s\n", (char *)dest);
}

void test_ft_memmove(void *dest, const void *src, size_t n) {
    ft_memmove(dest, src, n);
    printf("After ft_memmove: %s\n", (char *)dest);
}

void test_ft_memset(void *s, int c, size_t n) {
    ft_memset(s, c, n);
    printf("After ft_memset: %s\n", (char *)s);
}

void test_ft_strcat(char *dest, const char *src) {
    printf("Before ft_strcat: \"%s\"\n", dest);
    ft_strcat(dest, src);
    printf("After ft_strcat: \"%s\"\n", dest);
}

void test_ft_strcmp(const char *s1, const char *s2) {
    printf("ft_strcmp(\"%s\", \"%s\") = %d\n", s1, s2, ft_strcmp(s1, s2));
}

void test_ft_strcpy(char *dest, const char *src) {
    ft_strcpy(dest, src);
    printf("After ft_strcpy: \"%s\"\n", dest);
}

void test_ft_strdup(const char *src) {
    char *dup = ft_strdup(src);
    if (dup) {
        printf("ft_strdup(\"%s\") = \"%s\"\n", src, dup);
        free(dup);
    } else {
        printf("ft_strdup(\"%s\") failed\n", src);
    }
}

void test_ft_strlcat(char *dest, const char *src, size_t size) {
    size_t result = ft_strlcat(dest, src, size);
    printf("After ft_strlcat: \"%s\" (size: %zu)\n", dest, result);
}

void test_ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t result = ft_strlcpy(dest, src, size);
    printf("After ft_strlcpy: \"%s\" (size: %zu)\n", dest, result);
}

void test_ft_strlen(const char *str) {
    printf("ft_strlen(\"%s\") = %zu\n", str, ft_strlen(str));
}

void test_ft_strncat(char *dest, const char *src, size_t nb) {
    printf("Before ft_strncat: \"%s\"\n", dest);
    ft_strncat(dest, src, nb);
    printf("After ft_strncat: \"%s\"\n", dest);
}

void test_ft_strncmp(const char *s1, const char *s2, size_t n) {
    printf("ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
}

void test_ft_strncpy(char *dest, const char *src, size_t n) {
    ft_strncpy(dest, src, n);
    printf("After ft_strncpy: \"%s\"\n", dest);
}

void test_ft_strstr(const char *str, const char *to_find) {
    char *result = ft_strstr(str, to_find);
    if (result) {
        printf("ft_strstr(\"%s\", \"%s\") found at \"%s\"\n", str, to_find, result);
    } else {
        printf("ft_strstr(\"%s\", \"%s\") not found\n", str, to_find);
    }
}

void test_ft_tolower(int c) {
    printf("ft_tolower(%c) = %c\n", c, ft_tolower(c));
}

void test_ft_isupper(int c) {
    printf("ft_isupper(%c) = %d\n", c, ft_isupper(c));
}

void test_ft_toupper(int c) {
    printf("ft_toupper(%c) = %c\n", c, ft_toupper(c));
}

void test_ft_islower(int c) {
    printf("ft_islower(%c) = %d\n", c, ft_islower(c));
}

void test_ft_strchr(const char *str, int c) {
    const char *result = ft_strchr(str, c);
    if (result) {
        printf("ft_strchr(\"%s\", %c) found at \"%s\"\n", str, c, result);
    } else {
        printf("ft_strchr(\"%s\", %c) not found\n", str, c);
    }
}

void test_ft_strrchr(const char *str, int c) {
    const char *result = ft_strrchr(str, c);
    if (result) {
        printf("ft_strrchr(\"%s\", %c) found at \"%s\"\n", str, c, result);
    } else {
        printf("ft_strrchr(\"%s\", %c) not found\n", str, c);
    }
}

int main() {
    // Test cases for each function
    char str1[50] = "Hello";
    char str2[] = "World";
    char *dup;

    // Test ft_atoi
    test_ft_atoi("123");
    test_ft_atoi("0");
    test_ft_atoi("-456");

    // Test ft_strclr
    test_ft_strclr(str1);

    // Test ft_strequ
    test_ft_strequ("test", "test");
    test_ft_strequ("test", "TEST");

    // Test ft_strdel
    dup = ft_strdup("To be deleted");
    test_ft_strdel(&dup);

    // Test ft_memalloc
    test_ft_memalloc(10);

    // Test ft_strnew
    test_ft_strnew(15);

    // Test ft_memdel
    void *ptr = malloc(10);
    test_ft_memdel(&ptr);

    // Test various character functions
    test_ft_isspace(' ');
    test_ft_isalnum('a');
    test_ft_isalpha('A');
    test_ft_isascii(127);
    test_ft_isdigit('1');
    test_ft_isprint('!');
    test_ft_bzero(str1, 3);

    // Test memory functions
    char dest[50] = "Hello";
    test_ft_memccpy(dest, "World", 'r', 5);
    test_ft_memchr("Hello World", ' ', 11);
    test_ft_memcmp("Hello", "World", 5);
    test_ft_memcpy(dest, "New", 3);
    test_ft_memmove(dest + 1, dest, 3);
    test_ft_memset(dest, 'x', 3);

    // Test string functions
    test_ft_strcat(dest, " World");
    test_ft_strcmp("Hello", "Hello");
    test_ft_strcpy(dest, "Hello");
    test_ft_strdup("Hello World");
    test_ft_strlcat(dest, " World", 50);
    test_ft_strlcpy(dest, "Hello World", 6);
    test_ft_strlen("Hello World");
    test_ft_strncat(dest, "!!!", 2);
    test_ft_strncmp("Hello", "Hell", 4);
    test_ft_strncpy(dest, "Hello", 3);
    test_ft_strstr("Hello World", "World");
    test_ft_tolower('A');
    test_ft_isupper('A');
    test_ft_toupper('a');
    test_ft_islower('a');
    test_ft_strchr("Hello World", 'W');
    test_ft_strrchr("Hello World", 'o');

    return 0;
}
