#include <stdio.h>
#include <string.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 1;

    for (int i = a; i <= b; i++) {
        char buf[8];                 
        snprintf(buf, sizeof(buf), "%d", i);

        int len = strlen(buf);
        if(len == 1 && (buf[0] == '4' || buf[0] == '7')){
          printf("%c ", buf[0]);
        } else if()
        
    }

    return 0;
}
