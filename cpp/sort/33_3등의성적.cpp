#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("./33_3등의성적.txt", "rt", stdin);
    int a[101];
    int n, temp, idx, cnt = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[idx]) idx = j;
        }
        temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }

    for (int i = 1; i < n; i++) {
        if (a[i] - 1 != a[i]) cnt++;
        if (cnt == 2) {
            printf("%d", a[i]);
            break;
        }
    }

    return 0;
}
