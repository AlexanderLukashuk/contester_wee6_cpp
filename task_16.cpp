#include <iostream>
#include <cmath>

using namespace std;

int dec(char arr[100], int lenght)
{
    int sum = 0, dec;
    for (int i = lenght - 1; i >= 0; i--)
    {
        dec = (arr[i] - 48) * pow(2, (lenght - 1 - i));
        sum += dec;
    }
    return sum;
}

int main()
{
    char array[100];
    int lenght;
    cin >> lenght >> array;
    cout << dec(array, lenght) << endl;
}