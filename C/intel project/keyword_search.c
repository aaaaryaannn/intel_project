#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "This is a test string";
    char str2[] = "test";
    char *result;

    result = strstr(str1, str2);

    if (result == NULL) {
        printf("Substring not found\n");
    } else {
        printf("Substring found at index %d\n", result - str1);
    }

    return 0;
}
