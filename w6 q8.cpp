#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}

