#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 200;

int countAccurance(char arr [], char ch)
{
    int letter_count = 0;
    int arr_lenght = strlen(arr);

    for (int i = 0; i < arr_lenght; i++)
    {
        if (arr[i] == ch)
        {
            letter_count++;
        }
    }

    return letter_count;
}

int main()
{
    char letter1, letter2;
    char symbol_array1[SIZE];
    char symbol_array2[SIZE];

    cin >> letter1 >> letter2;

    cin >> symbol_array1;
    cin >> symbol_array2;

    cout << countAccurance(symbol_array1, letter1) << " " << letter1 << " characters in " << symbol_array1 << endl;
    cout << countAccurance(symbol_array2, letter2) << " " << letter2 << " characters in " << symbol_array2 << endl;
}