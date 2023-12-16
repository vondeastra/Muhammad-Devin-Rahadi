//create by muhammad devin rahadi 23343076
#include <stdio.h>

int main() {
    char string[] = "BORLAND";
    char *ptr = string;
    printf("Muhammad Devin Rahadi 23343076\n\n");

    ptr = string;

    while (*ptr != '\0') {
        ++ptr;
    }

    while (ptr != string) {
        --ptr;
        printf("%s\n", ptr);
    }

    return 0;
}

