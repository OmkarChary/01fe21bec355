#include<stdio.h>
#include<stdlib.h>
#include "rand_num.h"

#define MAX_SIZE 10

int * PUSH( int *top , int stack[] , int elem )
{
    if( top < &stack[MAX_SIZE] )
    {
        *top = elem;
        top++;
        printf("%x\n",top);
        return top;
    }
    else
    {
        printf( "Stack has reached its maxminum capacity \n");
        return top;
    }
    
}
int * POP( int *top , int stack[] )
{
     
    if( top == &stack[0] )
    {
        printf( " Stack is empty \n" );
    }
    else if( top >= &stack[0] )
    {
        top--;  
    }
    return top;
}

void display( int stack[] , int *top )
{
    int *ptr;
    ptr = &stack[0];
    
    if( ptr == top )
    {
        printf( " The Stack is empty! \n");
    }
    else
    {
        do
        { 
            printf( " %d \n" , *ptr );
            ptr++;

        }while( ptr < top );
    }
} 


/**
 * Main function that reads input from a file and performs stack operations based on user choice.
 *
 * @returns 0 on successful execution.
 */
int main()
{
    int choice;
    int stack[MAX_SIZE];
    int *top;
    random_num( 10, 10, 0 );
    FILE *PTR1;
    top = stack; // insert and increment
    int elem;
    PTR1 = fopen( " input.txt ", " r ");
    
    while( 1 )
    {
        printf( "1)PUSH\n2)POP\n3)Display\n4)Exit\n" );
        printf( "Enter Choice:\n" );
        scanf( "%d" , &choice );
        switch( choice )
        {
            case 1: 
                    printf( " Enter the element \n" );
                    fscanf( PTR1, "%d", &elem );
                    top = PUSH( top , stack , elem );
                    break;
            case 2:
                    top = POP( top , stack );
                    break;
            case 3: 
                    display( stack , top );
                    break; 
            default:
                    exit(0);


        }
    }
    fclose(PTR1);
}