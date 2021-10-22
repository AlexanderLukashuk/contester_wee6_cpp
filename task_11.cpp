#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int MAX_N = 200;

int countAccurance(char arr[MAX_N], char ch)
{
    int result = 0;
    int arrLenght = strlen(arr);

    for (int i = 0; i < arrLenght; i++)
    {
        if (arr[i] == ch)
        {
            result++;
        }
    }

    return result;
}

int main()
{
    char ch1;
    char str1[MAX_N];
    int n;

    cin >> n;

    char letters_array[n];
    int letter_count[n];
    string string_array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ch1;
        cin >> str1;

        letters_array[i] = ch1;
        string_array[i] = str1;
        letter_count[i] = countAccurance(str1, ch1);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << letter_count[i] << " " << letters_array[i] << " in " << string_array[i] << endl;
    }
}