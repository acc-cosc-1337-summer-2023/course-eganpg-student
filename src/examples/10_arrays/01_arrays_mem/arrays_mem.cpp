//write code for for stack_array and display each element to screen
#include "arrays_mem.h"
using std::cout;
//function prototype for stack_array

void use_stack_array()
{
    const auto SIZE = 3;
    int numbers[SIZE];

    for(int i=0; i < SIZE; i++)
    {
        cout<<numbers[i]<<"\n";
    }
}