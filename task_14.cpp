#include <iostream>
#include <cstring>

using namespace std;

void UpperCase(char arr[])
{
    int size = 0;

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            size++;
        }
        else if (arr[i] >= 65 && arr[i] <= 90)
        {
            size++;
        }
    }

    char new_arr[size];

    for (int i = 0, j = 0; i < 100; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            new_arr[j] = arr[i] - 32;
            j++;
        }
        else if (arr[i] >= 65 && arr[i] <= 90)
        {
            new_arr[j] = arr[i] + 32;
            j++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << new_arr[i];
    }
    cout << endl;
}

int main()
{
    char array[100];

    cin >> array;

    UpperCase(array);
}