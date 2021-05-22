#include <stdio.h>

int main() {
    freopen("input.txt", "rt", stdin);
    int c = 0, h = 0, i, pos;
    char a[100];
    scanf("%s", a);
    if (a[1] == 'H') {
        c = 1;
        pos = 1;
    } else {
        for (i = 1; a[i] != 'H'; i++) {
            c = c * 10 + (a[i] - 48);
        }
        pos = i;
        if (a[pos + 1] == '\0')
            h = 1;
        for (i = pos + 1; i < a[i] != '\0'; i++) {
            h = h * 10 + (a[i] - 48);
        }
    }
    printf("%d", c * 12 + h);
    return 0;
}
