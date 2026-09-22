#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100];
    int m, n;

    cout << "Enter the number of elements in first array: ";
    cin >> m;

    cout << "Enter the elements of first sorted array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the number of elements in second array: ";
    cin >> n;

    cout << "Enter the elements of second sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int i = m - 1;
    int j = n - 1;
    int idx = m + n - 1;

    while(i >= 0 && j >= 0)
    {
        if(a[i] > b[j])
        {
            a[idx--] = a[i--];
        }
        else
        {
            a[idx--] = b[j--];
        }
    }

    while(j >= 0)
    {
        a[idx--] = b[j--];
    }

    cout << "Merged sorted array: ";

    for(int i = 0; i < m + n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
