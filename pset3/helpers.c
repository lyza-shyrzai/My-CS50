/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <string.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n < 0)
        return false;
    else
    {
    	for (int i = 0; i < n; i++)
    		if (values[i] == value)
    			return true;
    }
   return false; 
}


/**
 * Sorts array of n values. (bubble sort)
 */
void sort(int values[], int n)
{
  	for(int k = 0; k < n - 1; k++)
  	{
    	int swaps = 0;
    
      	for(int i = 0; i < n - 1 - k; i++)
      	{
        	if(values[i] > values[i+1])
        	{
          		int temp = values[i+1];
          		values[i+1] = values[i];
          		values[i] = temp;
          		swaps++;
        	}
      	}
    	if(!swaps)
      	break;
    }
}