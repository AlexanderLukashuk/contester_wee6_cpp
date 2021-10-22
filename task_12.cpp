#include <iostream>
#include <string>

using namespace std;

char* toUpper(char *arr)
{
    int size = strlen(arr);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] = arr[i] - 32;
        }
    }

    return arr;
}

int main()
{
    char array[100];

    cin >> array;

    char* new_array = toUpper(array);

    for (int i = 0; i < strlen(new_array); i++)
    {
        cout << new_array[i];
    }
    cout << endl;


}