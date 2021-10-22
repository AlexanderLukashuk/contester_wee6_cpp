#include <iostream>

using namespace std;

void numberOfPositivesElements(int arr1[], int arr2[], int size)
{
    int positivesElementsArr1 = 0;
    int positivesElementsArr2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr1[i] > 0)
        {
            positivesElementsArr1++;
        }

        if (arr2[i] > 0)
        {
            positivesElementsArr2++;
        }
    }

    if (positivesElementsArr1 > positivesElementsArr2)
    {
        cout << "Number of positives in the first array is greater" << endl;
    }
    else if (positivesElementsArr1 < positivesElementsArr2)
    {
        cout << "Number of positives in the second array is greater" << endl;
    }
    else
    {
        cout << "Numbers are equal" << endl;
    }
}

int main()
{
    int size;

    cin >> size;

    int array1[size];
    int array2[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }

    for (int i = 0; i < size; i++)
    {
        cin >> array2[i];
    }

    numberOfPositivesElements(array1, array2, size);
}