#include "frequentCurrentRange.h"
#include <assert.h>

/*infers the number of ranges when all enteries are same*/
void TEST_CASE_01()
{
	float readingsArray[]={4,4,4,4};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	printf ("\nTC_01 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 1);
}

/*"infers the number of ranges when NULL"*/
void TEST_CASE_02()
{
	float *readingsArray = NULL;
    int numOfReadings = 0;
	printf ("\nTC_02 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 0);
}

/*"infers the number of ranges when mixed values*/
void TEST_CASE_03()
{
	float readingsArray[]={3, 3, 5, 4, 10, 11, 12};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	printf ("\nTC_03 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 2);
}

/*"infers the number of ranges when mixed values in flaot*/
void TEST_CASE_04()
{
	float readingsArray[]={3.7, 1.2, 2.5, 4.5, 1.1, 11.2, 12.1,10.5,20,20.5};
    int numOfReadings = sizeof(readingsArray)/sizeof(readingsArray[0]);
	printf ("\nTC_04 \nInput Array : ");
	printArray (readingsArray, numOfReadings);
    assert(detectRanges(readingsArray, numOfReadings) == 5);
}

int main()
{
	TEST_CASE_01();
	TEST_CASE_02();
	TEST_CASE_03();
	TEST_CASE_04();
	return 0;
}
