#include <iostream>
using namespace std;

int main() {
    int a[] = {8, 2, 6, 3, 1};
    int n = 5;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && a[j] < a[j - 1]; j--) {
            swap(a[j], a[j - 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
