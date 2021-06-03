#include <iostream>

using namespace std;
int main() {
    int n, arr[101], i, j, temp;
    cin >> n ;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 1; i < n; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }

    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
