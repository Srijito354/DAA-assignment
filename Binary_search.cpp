#include <iostream>

using namespace std;

void binary_search(int mid, int *arr, int front, int back, int value)
{
    if (value == *(arr+mid))
    {
        cout << mid;
    }
    else if (value > *(arr+mid))
    {
        front = mid+1;
        int new_mid = (front+back)/2;
        binary_search(new_mid, arr, front, back, value);
    }
    else if (value < *(arr+mid))
    {
        back = mid-1;
        int new_mid2 = (front+back)/2;
        binary_search(new_mid2, arr, front, back, value);
    }
}

int main()
{
    int value;
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the values of the array: ";
    int i = 0;
    while (i < n)
    {
        cin >> *(arr+i);
        i++;
    }
    cout << "Enter the value you wanna search:";
    cin >> value;
    int mid = 4;
    binary_search(mid, arr, 0, 8, value);
    return 0;
}