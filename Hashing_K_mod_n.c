#include<stdio.h>
int H_table[11];
int H_func( int H_key )
{
    int index;
    index = H_key % 10;
    H_table[index] = H_key;
}

int main()
{

    int H_key[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };

    for( int i = 0 ; i < 10 ; i++ )
    {
        H_func( H_key[i] );
    }

    for( int i = 0 ; i < 10 ; i++ )
    {
        printf("%d ", H_table[i] );
    }


}