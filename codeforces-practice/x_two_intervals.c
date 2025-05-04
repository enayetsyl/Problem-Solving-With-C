#include <stdio.h>

int main() {
    long long l1, r1, l2, r2;
    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    long long start = (l1 > l2 ? l1 : l2);
    long long end   = (r1 < r2 ? r1 : r2);

    if (start > end) {
        printf("-1");
    } else {
        printf("%lld %lld", start, end);
    }

    return 0;
}
