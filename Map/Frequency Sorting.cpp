#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Data {
    int value;
    int frequency;
};

// Merge two sorted parts
void merge(vector<Data>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<Data> L(n1);
    vector<Data> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {

        // Higher frequency first
        if (L[i].frequency > R[j].frequency) {
            arr[k] = L[i];
            i++;
        }
        else if (L[i].frequency < R[j].frequency) {
            arr[k] = R[j];
            j++;
        }
        else {
            // If frequency is same, smaller value first
            if (L[i].value < R[j].value) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
        }

        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort
void mergeSort(vector<Data>& arr, int left, int right) {

    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Map for frequency counting
    map<int, int> frequency;

    for (int x : arr) {
        frequency[x]++;
    }

    // Convert map data into vector
    vector<Data> data;

    for (auto x : frequency) {
        data.push_back({x.first, x.second});
    }

    // Merge Sort
    mergeSort(data, 0, data.size() - 1);

    cout << "\nSorted by Frequency:\n";

    for (auto x : data) {
        cout << x.value << " -> "
             << x.frequency << " times" << endl;
    }

    return 0;
}
