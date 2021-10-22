#include <iostream>

using namespace std;

char getSign(int num1, int num2)
{
    if (num1 > num2)
    {
        return '>';
    }
    else if (num1 < num2)
    {
        return '<';
    }
    else
    {
        return '=';
    }
}

int main()
{
    int number1, number2;
    char result;

    cin >> number1 >> number2;    

    result = getSign(number1, number2);

    cout << result << endl;
}