#ifndef RANDOM_NUMBER_GENERATOR_H
#define RANDOM_NUMBER_GENERATOR_H


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * Generates n random numbers within the range of upper and lower bounds and writes them to a file named "INPUT.txt".
 *
 * @param n The number of random numbers to generate.
 * @param ar An array to store the generated random numbers.
 * @param upper The upper bound of the range for the random numbers.
 * @param lower The lower bound of the range for the random numbers.
 *
 * @returns None
 */
void random_num(int n, int upper, int lower)
{
    srand(time(0));
    FILE *PTR1;
    PTR1 = fopen("input.txt","w");
    
    for(int i = 0 ; i < n ; i++ ) 
    {
        int num = ( ( rand() % ( upper - lower + 1 ) ) + lower );
        fprintf( PTR1, "%d ", num );
        
    }
    fclose(PTR1);
    
}
#endif