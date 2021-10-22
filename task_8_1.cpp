#include <iostream>

using namespace std;

void Checker(int n, int m, int arr[100][100])
{
    int streak = 1, mem[100], equal = 1;
    
    mem[0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == arr[i][j + 1])
            {
                streak++;
            }
            else if (arr[i][j] != arr[i][j + 1] && mem[i] <= streak)
            {
                mem[i] = streak;
                streak = 1;
            }
        }
        streak = 1;
    }

    if (mem[0] == 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (mem[0] == mem[i])
            {
                equal++;
            }
        }
    }
    
    if (equal == n - 1)
    {
        cout << "No series of equal elements" << endl;
    }
    else
    {
        int max = mem[0], c = 1;
        for (int i = 0; i < n; i++)
        {
            if (max < mem[i])
            {
                max = mem[i];
                c = i + 1;
            }
        }
        cout << "Longest series is in the string " << c << endl;
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