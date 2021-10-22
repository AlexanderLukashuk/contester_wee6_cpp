#include <iostream>
#include <cstring>

using namespace std;

void UpperCase(char arr[])
{
    int size = strlen(arr);
    char new_arr[100];

    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] = arr[i] - 32;
            cout << arr[i];
        }
        else if (arr[i] >= 65 && arr[i] <= 90)
        {
            arr[i] = arr[i] + 32;
            cout << arr[i];
        }
    }
    cout << endl;
}

int main()
{
    char array[100];

    cin >> array;

    UpperCase(array);
}