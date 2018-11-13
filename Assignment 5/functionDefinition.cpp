#include "functionPrototype.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;




bool bubbleSort(int numbers[], const int SIZE)
{
    bool ret = true;
    int swapCount;

    do
    {
        swapCount = 0;
        for (int index = 0; index < (SIZE-1); index ++)
        {
            if (numbers[index] > numbers[index + 1])
           {
                swap(numbers[index], numbers[index + 1]);
                swapCount++;
            }
        }
    } while (swapCount > 0);

    return ret;
}

bool selectionSort(int numbers[], const int SIZE)
{
    bool ret = true;

    for (int index = 0; index < SIZE; index ++)
    {
        int nMinValue = numbers[index];
        int nMinIndex = index;

        for (int i = index; i<SIZE; i++)
        {
            if (numbers[i]<nMinValue)
            {
                nMinValue = numbers[i];
                nMinIndex = i;
            }
        }

        swap(numbers[nMinIndex], numbers[index]);

    }

return ret;
}

bool stdSortFunction (int numbers[], const int SIZE)
{
    bool ret = true;
    sort(numbers, numbers + SIZE);

    return ret;
}
