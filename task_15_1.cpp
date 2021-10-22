#include <iostream>

using namespace std;

int TimeDifference(int h, int m, int s)
{
    return ((h * 60 * 60) + (m * 60) + s);
}

int main()
{
    int hours, minutes, seconds;

    cin >> hours >> minutes >> seconds;

    int time1 = TimeDifference(hours, minutes, seconds);

    cin >> hours >> minutes >> seconds;
    
    int time2 = TimeDifference(hours, minutes, seconds);

    int difference = time2 - time1;

    hours = difference / 3600;
    minutes = (difference - hours * 3600) / 60;
    seconds = (difference - hours * 3600) - (minutes * 60);

    cout << hours << ":" << minutes << ":" << seconds << endl;
}