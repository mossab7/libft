
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

// ft_memmove function implementation
void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    if (s == d || n == 0)
        return dest;
    if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else {
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }
    return dest;
}

int main(void) {
    // Test ft_memmove with non-overlapping regions
    printf("Testing ft_memmove:\n");

    char non_overlap_src[] = "Hello, World!";
    char non_overlap_dest[20];
    memset(non_overlap_dest, 0, sizeof(non_overlap_dest)); // Clear destination buffer
    ft_memmove(non_overlap_dest, non_overlap_src, 13);
    print_test_result("ft_memmove (non-overlapping)", strcmp(non_overlap_dest, "Hello, World!") == 0);

    // Test ft_memmove with overlapping regions (src starts before dest)
    char overlap_src[] = "1234567890";
    ft_memmove(overlap_src + 2, overlap_src, 8); // Overlapping region
    overlap_src[10] = '\0'; // Null-terminate the string
    print_test_result("ft_memmove (overlapping src < dest)", strcmp(overlap_src, "1212345678") == 0);

    // Test ft_memmove with overlapping regions (dest starts before src)
    char overlap_src2[] = "1234567890";
    ft_memmove(overlap_src2, overlap_src2 + 2, 8); // Overlapping region
    overlap_src2[8] = '\0'; // Null-terminate the string
    print_test_result("ft_memmove (overlapping dest < src)", strcmp(overlap_src2, "34567890") == 0);

    // Test ft_memmove with identical pointers
    char identical[10] = "abcdefgh";
    ft_memmove(identical, identical, 8); // Same source and destination
    print_test_result("ft_memmove (identical pointers)", strcmp(identical, "abcdefgh") == 0);

    return 0;
}
