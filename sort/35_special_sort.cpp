#include <iostream>

using namespace std;
int main(){
    int n, arr[101];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > 0 && arr[j + 1] < 0) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
