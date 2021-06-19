#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    freopen("./32_선택정렬.txt", "rt", stdin);
    int a[100];
    int n, idx, i, j, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[idx])
                idx = j;
        }
        temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
