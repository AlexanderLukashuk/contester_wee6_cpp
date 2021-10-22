#include <iostream>

using namespace std;

void UpperCase(char arr[])
{
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] = arr[i] - 32;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    char array[100];

    cin >> array;

    UpperCase(array);
}