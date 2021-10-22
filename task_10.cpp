#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int MAX_N = 200;

int countAccurance(char arr[], char ch)
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
    char letter;
    char symbol_array[MAX_N];
    int string_count;
    string characters_in = " characters in ";

    cin >> string_count;

    string results[string_count];
    char letters_array[string_count];
    int letter_count[string_count];
    string string_array[string_count];
    char result[1000];

    for (int i = 0; i < string_count; i++)
    {
        cin >> letter;
        cin >> symbol_array;

        letters_array[i] = letter;
        string_array[i] = symbol_array;
        letter_count[i] = countAccurance(symbol_array, letter);

        //cout << countAccurance(symbol_array, letter) << " " << letter << " characters in " << symbol_array << endl;
        //results[i] = countAccurance(symbol_array, letter) + " " + letter + characters_in + symbol_array;
        //result[i] = countAccurance(symbol_array, letter) + " " + letter + characters_in + symbol_array;
    }

    for (int i = 0; i < string_count; i++)
    {
        cout << letter_count[i] << " " << letters_array[i] << " characters in " << string_array[i] << endl;
    }
}