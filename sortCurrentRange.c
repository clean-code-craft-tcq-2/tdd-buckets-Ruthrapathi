#include"frequentCurrentRange.h"

int * copyInputArray(int *readings, int length)
{
  int* duplicateArray=(int *)calloc(length, sizeof (int));
  for (int iterator = 0; iterator < length; iterator++)
    {
        duplicateArray[iterator] = readings[iterator];
        
    }
    return duplicateArray;
}
