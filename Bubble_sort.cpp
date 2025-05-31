#include <iostream>

using namespace std;

void bubble_sort(int *arr, int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++)
        {
            int temp;
            if (*(arr+i) > *(arr+(i+1)))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+(i+1));
                *(arr+(i+1)) = temp;
                break;
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    int a[] = {10, 9, 34, 6, 3, 7, 4};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_sort(a, n);
    for (int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        cout << a[i] << endl;
    }
}