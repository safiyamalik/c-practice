#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    int positive = 0, negative = 0;
    int even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Positive numbers: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << " ";
            positive++;
        }
    }

    cout << "\nNegative numbers: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
            negative++;
        }
    }

    cout << "\nEven numbers: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
            even++;
        }
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
            odd++;
        }
    }

    cout << "\n\nCount of positive numbers: " << positive;
    cout << "\nCount of negative numbers: " << negative;
    cout << "\nCount of even numbers: " << even;
    cout << "\nCount of odd numbers: " << odd;

    return 0;
}
