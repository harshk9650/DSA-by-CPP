#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool isfound = false;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isfound = true;
                cout << i + 1;
                break;
            }
        }

        if (isfound)
            break;
    }

    return 0;
}