#include <iostream>
#include <cmath>

using namespace std;

void IntelligenceService(int arr[], int size)
{
    int height_difference = 100;
    int temp;
    int indexI, indexJ;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            temp = abs(arr[i] - arr[j]);

            if (temp < height_difference)
            {
                height_difference = temp;
                indexI = i + 1;
                indexJ = j + 1;
            }
        }
    }

    cout << indexI << " " << indexJ << endl;
}

int main()
{
    int size;

    cin >> size;

    int soldiers[size];

    for (int i = 0; i < size; i++)
    {
        cin >> soldiers[i];
    }

    IntelligenceService(soldiers, size);
}