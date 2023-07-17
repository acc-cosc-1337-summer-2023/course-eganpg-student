//add function(s) code here
//cpp
#include "arrays.h"
#include<iostream>

ArrayList::ArrayList(int* array_list, int capacity) :
    elements(array_list)
{
    this->capacity = capacity;
}

void ArrayList::Add(int value)
{
    if(current_index < capacity)
    {
        elements[current_index] = value;
        current_index++;
    }
}

int ArrayList::Get_First_Index_Of(int value)
{
    auto index = -1;
    auto local_current_index = 0;
    
    while(local_current_index < current_index)
    {
        if(elements[local_current_index] == value)
        {
            index = local_current_index;
            break;
        }

        local_current_index++;
    }

    return index;
}

int ArrayList::Get_Value_At_Index(int index)
{
    int value = -1;

    if(index >= 0 && index < current_index)
    {
        value = elements[index];
    }

    return value;
}

void ArrayList::Delete(int value)
{
    auto index = Get_First_Index_Of(value);

    std::cout<<"The index is "<<index<<"\n";

    if(index != -1)
    {
        AdjustElements(index);
    }
}

void ArrayList::AdjustElements(int index)
{
    for(int i = index; i < current_index - 1; i++)
    {
        elements[i] = elements[i + 1];
    }
    current_index--;
}

// void ArrayList::Print() 
// {
//     for (int i = 0; i < current_index; i++) {
//         std::cout << elements[i] << ' ';
//     }
//     std::cout << '\n';
// }