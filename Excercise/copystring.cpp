#include <stdio.h>
#include <string.h>

void copyString(char *source, char *target, int targetSize) {
    if (strlen(source) < targetSize) {
        strcpy(target, source);
        printf("String copied successfully.\n");
    } else {
        printf("Error: Source string size exceeds target size.\n");
    }
}

int main() {
    char source[] = "Hello";
    char target[10];
    
    copyString(source, target, sizeof(target));
    
    return 0;
}
