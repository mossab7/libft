#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define ASSERT(condition, message) \
    do { \
        if (!(condition)) { \
            printf("FAIL: %s\n", message); \
            return 1; \
        } \
    } while (0)

#define TEST(function) \
    do { \
        printf("Testing %s...\n", #function); \
        if (test_##function() == 0) { \
            printf("PASS: %s\n\n", #function); \
        } else { \
            printf("FAIL: %s\n\n", #function); \
        } \
    } while (0)

int test_ft_atoi() {
    ASSERT(ft_atoi("123") == 123, "ft_atoi failed for \"123\"");
    ASSERT(ft_atoi("-456") == -456, "ft_atoi failed for \"-456\"");
    ASSERT(ft_atoi("  +789") == 789, "ft_atoi failed for \"  +789\"");
    ASSERT(ft_atoi("2147483647") == 2147483647, "ft_atoi failed for INT_MAX");
    ASSERT(ft_atoi("-2147483648") == -2147483648, "ft_atoi failed for INT_MIN");
    ASSERT(ft_atoi("   -123abc") == -123, "ft_atoi failed for \"   -123abc\"");
    return 0;
}

int test_ft_strclr() {
    char str[] = "Hello";
    ft_strclr(str);
    for (int i = 0; i < 5; i++) {
        ASSERT(str[i] == '\0', "ft_strclr failed to clear all characters");
    }
    return 0;
}

int test_ft_strequ() {
    ASSERT(ft_strequ("hello", "hello") == 1, "ft_strequ failed for equal strings");
    ASSERT(ft_strequ("hello", "world") == 0, "ft_strequ failed for different strings");
    ASSERT(ft_strequ("", "") == 1, "ft_strequ failed for empty strings");
    ASSERT(ft_strequ("a", "b") == 0, "ft_strequ failed for different single-char strings");
    return 0;
}

int test_ft_strnew() {
    char *str = ft_strnew(10);
    ASSERT(str != NULL, "ft_strnew failed to allocate memory");
    for (int i = 0; i < 10; i++) {
        ASSERT(str[i] == '\0', "ft_strnew failed to initialize with null characters");
    }
    free(str);
    return 0;
}

int test_ft_memalloc() {
    void *mem = ft_memalloc(10);
    ASSERT(mem != NULL, "ft_memalloc failed to allocate memory");
    unsigned char *ptr = (unsigned char *)mem;
    for (int i = 0; i < 10; i++) {
        ASSERT(ptr[i] == 0, "ft_memalloc failed to initialize with zeros");
    }
    free(mem);
    return 0;
}

int test_char_functions() {
    for (int i = -1; i <= 255; i++) {
        ASSERT((!!ft_isalpha(i)) == (!!isalpha(i)), "ft_isalpha failed");
        ASSERT((!!ft_isdigit(i)) == (!!isdigit(i)), "ft_isdigit failed");
        ASSERT((!!ft_isalnum(i)) == (!!isalnum(i)), "ft_isalnum failed");
        ASSERT((!!ft_isascii(i)) == (!!isascii(i)), "ft_isascii failed");
        ASSERT((!!ft_isprint(i)) == (!!isprint(i)), "ft_isprint failed");
        ASSERT((!!ft_isupper(i)) == (!!isupper(i)), "ft_isupper failed");
        ASSERT((!!ft_islower(i)) == (!!islower(i)), "ft_islower failed");
        ASSERT(ft_toupper(i) == toupper(i), "ft_toupper failed");
        ASSERT(ft_tolower(i) == tolower(i), "ft_tolower failed");
    }
    return 0;
}

int test_ft_bzero() {
    char str[10] = "123456789";
    ft_bzero(str, 5);
    for (int i = 0; i < 5; i++) {
        ASSERT(str[i] == '\0', "ft_bzero failed to set bytes to zero");
    }
    ASSERT(strcmp(str + 5, "6789") == 0, "ft_bzero modified bytes it shouldn't have");
    return 0;
}

int test_ft_memcpy() {
    char src[] = "Hello, World!";
    char dest[20];
    ft_memcpy(dest, src, strlen(src) + 1);
    ASSERT(strcmp(src, dest) == 0, "ft_memcpy failed to copy memory correctly");
    return 0;
}

int test_ft_strlen() {
    ASSERT(ft_strlen("") == 0, "ft_strlen failed for empty string");
    ASSERT(ft_strlen("Hello") == 5, "ft_strlen failed for \"Hello\"");
    ASSERT(ft_strlen("This is a test") == 14, "ft_strlen failed for \"This is a test\"");
    return 0;
}

int test_ft_strdup() {
    const char *original = "Test string";
    char *duplicate = ft_strdup(original);
    ASSERT(duplicate != NULL, "ft_strdup failed to allocate memory");
    ASSERT(strcmp(original, duplicate) == 0, "ft_strdup failed to create an exact copy");
    free(duplicate);
    return 0;
}


int test_ft_strdel() {
    char *str = ft_strdup("Test");
    ft_strdel(&str);
    ASSERT(str == NULL, "ft_strdel failed to set pointer to NULL");
    return 0;
}

int test_ft_memdel() {
    void *mem = ft_memalloc(10);
    ft_memdel(&mem);
    ASSERT(mem == NULL, "ft_memdel failed to set pointer to NULL");
    return 0;
}

int test_ft_memccpy() {
    char src[] = "test\200string";
    char dest[20];
    void *result = ft_memccpy(dest, src, '\200', 12);
    ASSERT(result == dest + 5, "ft_memccpy failed to return correct pointer");
    ASSERT(memcmp(src, dest, 5) == 0, "ft_memccpy failed to copy correct bytes");
    return 0;
}

int test_ft_memchr() {
    char str[] = "Hello, World!";
    ASSERT(ft_memchr(str, 'W', 13) == str + 7, "ft_memchr failed to find 'W'");
    ASSERT(ft_memchr(str, 'Z', 13) == NULL, "ft_memchr found a character that doesn't exist");
    return 0;
}

int test_ft_memcmp() {
    char str1[] = "Hello";
    char str2[] = "Helno";
    ASSERT(ft_memcmp(str1, str2, 5) < 0, "ft_memcmp failed for different strings");
    ASSERT(ft_memcmp(str1, str1, 5) == 0, "ft_memcmp failed for identical strings");
    return 0;
}

int test_ft_memmove() {
    char str[] = "memmove can be very useful......";
    ft_memmove(str + 20, str + 15, 11);
    ASSERT(strcmp(str, "memmove can be very very useful.") == 0, "ft_memmove failed");
    return 0;
}

int test_ft_memset() {
    char str[15] = "Hello, World!";
    ft_memset(str, '-', 5);
    ASSERT(strcmp(str, "-----, World!") == 0, "ft_memset failed");
    return 0;
}

int test_ft_strcat() {
    char dest[20] = "Hello";
    ft_strcat(dest, ", World!");
    ASSERT(strcmp(dest, "Hello, World!") == 0, "ft_strcat failed");
    return 0;
}

int test_ft_strcmp() {
    ASSERT(ft_strcmp("abc", "abc") == 0, "ft_strcmp failed for equal strings");
    ASSERT(ft_strcmp("abc", "abd") < 0, "ft_strcmp failed for s1 < s2");
    ASSERT(ft_strcmp("abd", "abc") > 0, "ft_strcmp failed for s1 > s2");
    return 0;
}

int test_ft_strcpy() {
    char dest[20];
    ft_strcpy(dest, "Hello, World!");
    ASSERT(strcmp(dest, "Hello, World!") == 0, "ft_strcpy failed");
    return 0;
}

int test_ft_strlcat() {
    char dest[20] = "Hello";
    size_t result = ft_strlcat(dest, ", World!", 13);
    ASSERT(strcmp(dest, "Hello, World") == 0, "ft_strlcat failed to concatenate correctly");
    ASSERT(result == 13, "ft_strlcat returned incorrect length");
    return 0;
}

int test_ft_strlcpy() {
    char dest[20];
    size_t result = ft_strlcpy(dest, "Hello, World!", 8);
    ASSERT(strcmp(dest, "Hello, ") == 0, "ft_strlcpy failed to copy correctly");
    ASSERT(result == 13, "ft_strlcpy returned incorrect length");
    return 0;
}

int test_ft_strncat() {
    char dest[20] = "Hello";
    ft_strncat(dest, ", World!", 3);
    ASSERT(strcmp(dest, "Hello, W") == 0, "ft_strncat failed");
    return 0;
}

int test_ft_strncmp() {
    ASSERT(ft_strncmp("abc", "abd", 2) == 0, "ft_strncmp failed for equal prefixes");
    ASSERT(ft_strncmp("abc", "abd", 3) < 0, "ft_strncmp failed for s1 < s2");
    ASSERT(ft_strncmp("abd", "abc", 3) > 0, "ft_strncmp failed for s1 > s2");
    return 0;
}

int test_ft_strncpy() {
    char dest[20];
    ft_strncpy(dest, "Hello, World!", 5);
    dest[5] = '\0';
    ASSERT(strcmp(dest, "Hello") == 0, "ft_strncpy failed");
    return 0;
}

int test_ft_strstr() {
    const char *haystack = "Hello, World!";
    ASSERT(ft_strstr(haystack, "World") == haystack + 7, "ft_strstr failed to find substring");
    ASSERT(ft_strstr(haystack, "OpenAI") == NULL, "ft_strstr found a non-existent substring");
    return 0;
}

int test_ft_strchr() {
    const char *str = "Hello, World!";
    ASSERT(ft_strchr(str, 'W') == str + 7, "ft_strchr failed to find 'W'");
    ASSERT(ft_strchr(str, 'Z') == NULL, "ft_strchr found a non-existent character");
    return 0;
}

int test_ft_strrchr() {
    const char *str = "Hello, World!";
    ASSERT(ft_strrchr(str, 'o') == str + 8, "ft_strrchr failed to find last 'o'");
    ASSERT(ft_strrchr(str, 'Z') == NULL, "ft_strrchr found a non-existent character");
    return 0;
}

int main() {
    TEST(ft_atoi);
    TEST(ft_strclr);
    TEST(ft_strequ);
    TEST(ft_strnew);
    TEST(ft_memalloc);
    TEST(char_functions);
    TEST(ft_bzero);
    TEST(ft_memcpy);
    TEST(ft_strlen);
    TEST(ft_strdup);
    TEST(ft_strdel);
    TEST(ft_memdel);
    TEST(ft_memccpy);
    TEST(ft_memchr);
    TEST(ft_memcmp);
    TEST(ft_memmove);
    TEST(ft_memset);
    TEST(ft_strcat);
    TEST(ft_strcmp);
    TEST(ft_strcpy);
    TEST(ft_strlcat);
    TEST(ft_strlcpy);
    TEST(ft_strncat);
    TEST(ft_strncmp);
    TEST(ft_strncpy);
    TEST(ft_strstr);
    TEST(ft_strchr);
    TEST(ft_strrchr);

    printf("All tests completed.\n");
    return 0;
}
