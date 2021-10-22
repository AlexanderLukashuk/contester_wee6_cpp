#include <iostream>

using namespace std;

void numberOfPositivesElements()
{
    int positivesElementsCount = -1;
    int tempPositiveElements = 0;
    int rowIndex = 0;
    int numberEqual = 1;

    int rows, columns;

    cin >> columns >> rows;

    int arr[columns][rows];

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (arr[i][j] > 0)
            {
                tempPositiveElements++;
            }
        }

        if (tempPositiveElements > positivesElementsCount)
        {
            positivesElementsCount = tempPositiveElements;
            rowIndex = i;
            tempPositiveElements = 0;
        }
        else if (tempPositiveElements == positivesElementsCount)
        {
            numberEqual++;
            tempPositiveElements = 0;
        }
    }

    if (numberEqual == columns)
    {
        cout << "Numbers are equal" << endl;
    }
    else
    {
        cout << rowIndex << endl;
    }
}

int main()
{
    numberOfPositivesElements();
}