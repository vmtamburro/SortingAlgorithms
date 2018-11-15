/* This program randomly generates a large array of 10,000
ints and compares the sorting time between bubble sort,
selection sort, and std::sort using timers
*/

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "functionPrototype.h"
#include <vector>
using namespace std;



int main()
{

vector<int> nums(SIZE);
clock_t t;
unsigned seed = time(0);
srand(seed);

//writing random vals to vector nums
for (int &random_number : nums)
    random_number = (rand()&(MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

//timing bubble sort
t = clock();
bubbleSort(nums);
t = clock() - t;
cout << "Bubble Sort executed in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds.\n";

//timing selection sort
t = clock();
selectionSort(nums);
t = clock() - t;
cout << "Selection Sort executed in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds.\n";

//timing std::sort
t = clock();
stdSortFunction(nums);
t = clock() - t;
cout << "std::sort executed in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds.\n";


}
