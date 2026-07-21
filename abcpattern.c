#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("No output generated");
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                printf("%c ", 'A' + j);
            }
            printf("\n");
        }
    }

    return 0;
}
