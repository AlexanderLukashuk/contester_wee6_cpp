#include <iostream>

using namespace std;

int min(int num1, int num2, int num3, int num4)
{
    int array[] = {num1, num2, num3, num4};
    int min = array[0];

    for (int i = 0; i < 4; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    return min;
}

int main()
{
    int number1, number2, number3, number4;
    int result;

    cin >> number1 >> number2 >> number3 >> number4;

    result = min(number1, number2, number3, number4);

    cout << result << endl;
}