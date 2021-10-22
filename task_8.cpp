#include <iostream>

using namespace std;

void LongestSeries()
{
    int columns, rows;

    cin >> columns >> rows;

    int array[columns][rows];
    int series;
    int max_element;
    int long_sequence = 0;
    int row_index;

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < columns; i++)
    {
        series = 1;
        max_element = 1;
        for (int j = 0; j < rows; j++)
        {
            if (series == array[i][j])
            {
                series++;
            }
            else if (max_element < series)
            {
                max_element = series;
                series = 1;
            }
        }

        if (max_element > long_sequence)
        {
            long_sequence = max_element;
            row_index = i;
        }
    }

    if (row_index != 0)
    {
        cout << "Longest series is in the string " << row_index << endl;
    }
    else
    {
        cout << "No series of equal elements" << endl;
    }
}

int main()
{
    LongestSeries();
}