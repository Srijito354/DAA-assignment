#include <iostream>

using namespace std;

int linear_search()
{
    int a[] = {10, 5, 8, 6, 9, 11};
    int elem;
    cout << "Enter element to be searched: ";
    cin >> elem;
    int index;
    for (int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        if (elem == a[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int index = linear_search();
    cout << index << "\n";
    return 0;
}