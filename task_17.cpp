#include <iostream>

using namespace std;

void IntelligenceService(int arr[], int size)
{
    int height_difference = 100;
    int temp_difference = 100;
    int indexI, indexJ;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] - arr[j] < temp_difference)
            {
                temp_difference = arr[i] - arr[j];
                indexI = i;
                indexJ = j;
            }
        }

        if (temp_difference < height_difference)
        {
            height_difference = temp_difference;
        }
        temp_difference = 0;
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