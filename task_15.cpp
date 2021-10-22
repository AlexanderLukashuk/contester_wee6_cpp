#include <iostream>

using namespace std;

int TimeDifference(int first_time[], int second_time[])
{
    int seconds_of_time1 = (first_time[0] * 60 * 60) + (first_time[1] * 60) + first_time[2];
    int seconds_of_time2 = (second_time[0] * 60 * 60) + (second_time[1] * 60) + second_time[2];
    
    int difference = seconds_of_time2 - seconds_of_time1;

    return difference;
}

int main()
{
    int size = 3;
    int arr1[size];
    int arr2[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    int seconds = TimeDifference(arr1, arr2);

    int hours = seconds / 3600;
    int minutes = (seconds - hours * 3600) / 60;
    seconds = (seconds - hours * 3600) - (minutes * 60);

    cout << hours << ":" << minutes << ":" << seconds << endl;
}