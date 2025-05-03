#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    int m = N/2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && j == m) {
                putchar('X');
            }
            else if (i == j) {
                putchar('\\');
            }
            else if (j == N - 1 - i) {
                putchar('/');
            }
            else {
                putchar('*');
            }
        }
        putchar('\n');
    }

    return 0;
}
