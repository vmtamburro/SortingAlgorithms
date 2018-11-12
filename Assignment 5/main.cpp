#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cstdio>
#include <ctime>

#include "functionPrototype.h"

using namespace std;



int main()
{
//timer declarations
std::clock_t start;
float duration;

//random number declarations
unsigned seed = time(0);
srand(seed);

int numbers[SIZE];
for (int &random_number : numbers)
{
    random_number = (rand()%(MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}

//start timer
start = std::clock();

//execute algorithm
stdSortFunction(numbers, SIZE);

//calculate duration
duration = ((std::clock() - start) * 1000) / (double) CLOCKS_PER_SEC;

//print duration
cout << "Algorithm took " << duration << " milliseconds.";


selectionSort(numbers, SIZE);

stdSortFunction(numbers, SIZE);


}
