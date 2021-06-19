#include <iostream>

using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    int temps[1001];
    int arr[1001]{0};

    for (int i = 0; i < n; i++)
        cin >> temps[i];

    for (int i = 0; i < n; i++) {
        for (int j = n - 2; j >= 0; j--) {
            arr[j + 1] = arr[j];
        }
        arr[0] = temps[i];
    }


    for (int i = 0; i < s; i++)  {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
