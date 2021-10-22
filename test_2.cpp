#include <iostream>
#include <cmath>

using namespace std;

int dec(char a[100], int n)
{
    int sum = 0, dec;

    for (int i = 0; i < n; i++)
    {
        dec = (a[i] - 48) * pow(2, i);
        sum += dec;
    }

    return sum;
}

int main()
{
    char a[100];
    int n;
    
    cin >> n >> a;

    cout << dec(a, n);
}