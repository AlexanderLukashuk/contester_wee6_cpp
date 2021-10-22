#include <iostream>

using namespace std;

double power(double num, int pow)
{
    double tempNum = num;

    for (int i = 1; i < pow; i++)
    {
        num *= tempNum;
    }

    return num;
}

int main()
{
    double number;
    int pow;
    double result;

    cin >> number >> pow;

    result = power(number, pow);

    cout << result << endl;
}