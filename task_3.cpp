#include <iostream>

using namespace std;

bool myXor(bool x, bool y)
{
    if ((x == true && y == true) || (x == false && y == false))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    bool x, y;
    int result;

    cin >> x >> y;

    result = myXor(x, y);

    cout << result << endl;
}