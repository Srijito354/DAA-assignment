#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 5};
    int *b = a;
    for (int i = 0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        cout << b[i];
    }
    return 0;
}