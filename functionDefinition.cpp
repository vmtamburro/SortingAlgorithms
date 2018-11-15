#include "functionPrototype.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


bool bubbleSort(vector<int> nums)
{
   bool ret = true;

    int swapCount;

    do
    {
        swapCount = 0;
        for (unsigned int index = 0; index < nums.size()-1; index ++)
        {
            if (nums[index] > nums[index + 1])
           {
                swap(nums[index], nums[index + 1]);
                swapCount++;
            }
        }
    } while (swapCount > 0);

    return ret;

}



bool selectionSort(vector<int> nums)
{
    bool ret = true;

    for (unsigned int index = 0; index < nums.size()-1; index ++)
    {
        int nMinValue = nums[index];
        int nMinIndex = index;

        for (int i = index; i<SIZE; i++)
        {
            if (nums[i]<nMinValue)
            {
                nMinValue = nums[i];
                nMinIndex = i;
            }
        }

        swap(nums[nMinIndex], nums[index]);

    }

return ret;
}




bool stdSortFunction (vector<int> nums)
{
    bool ret = true;
    std::sort(nums.begin(), nums.end());

    return ret;
}

