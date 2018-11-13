/* This program randomly generates a large array of 10,000
ints and compares the sorting time between bubble sort,
selection sort, and std::sort using timers
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

#include <stdio.h>
#include <time.h>
#include <math.h>

#include "functionPrototype.h"

using namespace std;



int main()
{
unsigned seed = time(0);
srand(seed);

int numbers[SIZE];
    for (int &random_number : numbers)
        random_number = (rand()%(MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

int numbersFirstCopy[SIZE];
    for (int count = 0; count < SIZE; count ++)
        numbersFirstCopy[count] = numbers[count];

int numbersSecondCopy[SIZE];
    for (int count = 0; count < SIZE; count ++)
        numbersSecondCopy[count] = numbers[count];

clock_t t;

t = clock();
bubbleSort(numbers, SIZE);
t = clock() - t;
cout << "Bubble Sort executed in " << (((float)t)*1000)/CLOCKS_PER_SEC << " milliseconds.\n";

t = clock();
selectionSort(numbersFirstCopy, SIZE);
t = clock()-t;
cout << "Selection Sort executed in " << (((float)t) * 1000) / CLOCKS_PER_SEC << " milliseconds.\n";

t = clock();
stdSortFunction(numbersSecondCopy, SIZE);
t = clock()-t;
cout << "std::sort executed in " << (((float)t) * 1000) / CLOCKS_PER_SEC << " milliseconds.\n";
}
