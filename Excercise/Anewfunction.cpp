#include <stdio.h>

void arrekat(char *source, char *target) {
    while (*target) {
        target++;
    }
    while (*source) {
        *target = *source;
        target++;
        source++;
    }
    *target = '\0';
}

int main() {
    char source[] = "World";
    char target[20] = "Hello ";

    arrekat(source, target);
    printf("%s\n", target);

    return 0;
}
