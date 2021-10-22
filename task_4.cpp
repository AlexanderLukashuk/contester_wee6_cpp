#include <iostream>

using namespace std;

bool election(bool x, bool y, bool z)
{
    bool array[] = {x, y, z};
    int falseCount = 0;
    int trueCount = 0;

    for (int i = 0; i < 3; i++)
    {
        if (array[i] == true)
        {
            trueCount++;
        }
        else
        {
            falseCount++;
        }
    }

    if (trueCount > falseCount)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool x, y, z;
    int result;

    cin >> x >> y >> z;

    result = election(x, y, z);

    cout << result << endl;
}