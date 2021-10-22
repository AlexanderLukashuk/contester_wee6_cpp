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

    for (int i = 0; i < n; i++)
    {
        cin >> ch1;
        cin >> str1;

        cout << countAccurance(str1, ch1) << " " << ch1 << " in " << str1 << endl;
    }
}