#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int num = 0, lt = -1, cur = 0, rt = 0, k = 1, res = 0;
    scanf("%d", &num);

    while (lt != 0) {
        lt = num / (k * 10);
        cur = (num / k) % 10;
        rt = num % k;
        k *= 10;

        if (cur > 3) {
            res += (lt + 1) * k;
        } 
        else if (cur == 3) {
            res += (lt * k) + rt + 1;
        }
        else if (cur < 3)
        {
            res += (lt * k);
        }
    }
    printf("%d\n", res);
    return 0;
}
