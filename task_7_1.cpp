#include <iostream>

using namespace std;

void Checker(int n, int m, int arr[100][100])
{
    int equal = 0, checker[100], count = 0, amount = 0, biggestpos = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > 0)
            {
                amount++;
            }
        }
        checker[count] = amount;
        count++;
        amount = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (checker[0] == checker[i])
            equal++;
    }
    
    int max = checker[0];

    if (equal == n)
    {
        cout << "Numbers are equal";
    }
    else
    {

        for (int i = 1; i < n; i++)
        {
            if (max <= checker[i])
            {
                max = checker[i];
                biggestpos++;
            }
        }
        cout << biggestpos;
    }
}
int main()
{
    int array[100][100], n, m;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    Checker(n, m, array);
}