#include <iostream>

using namespace std;

void CheckMathExpression(char arr[], int n)
{
    bool check;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/') && (arr[i + 1] == '+' || arr[i + 1] == '-' || arr[i + 1] == '*' || arr[i + 1] == '/'))
        {
            check = false;
            break;
        }
        else if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
        {
            check = true;
        }
        else if (arr[i] >= 48 && arr[i] <= 57)
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }

    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n;
    char math_expression[100];

    cin >> n >> math_expression;

    CheckMathExpression(math_expression, n);
}