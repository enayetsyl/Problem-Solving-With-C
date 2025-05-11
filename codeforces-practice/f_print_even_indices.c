#include <stdio.h>

void print_even(int a[], int n, int b) {
    if (b >= n) return;
    print_even(a, n, b + 2);
    printf("%d ", a[b]);   
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    print_even(a, n, 0);
    return 0;
}
