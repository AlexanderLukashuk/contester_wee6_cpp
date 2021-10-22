#include <iostream>

using namespace std;

int TimeDifference(int h, int m, int s)
{
    if ( h >= 12)
    {
        h -=12;
    }

    return ((h * 60 * 60) + (m * 60) + s);
}

int main()
{
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    cin >> hours1 >> minutes1 >> seconds1;
    cin >> hours2 >> minutes2 >> seconds2;

    int time1 = TimeDifference(hours1, minutes1, seconds1);

    int time2 = TimeDifference(hours2, minutes2, seconds2);

    int difference = time2 - time1;

    int hours = difference / 3600;
    int minutes = (difference - hours * 3600) / 60;
    int seconds = (difference - hours * 3600) - (minutes * 60);

    cout << difference / 3600 << ":" << (difference - hours * 3600) / 60 << ":" << seconds << endl;
}