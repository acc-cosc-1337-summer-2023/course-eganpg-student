//add include statements
#include "func.h"
#include<iostream>
#include<algorithm>

//add function code here

// Experiment using <algorithm>

// int get_vector_max_value(const vector<int>& vec)
// {

//     // return the max element using algorithm
//     return *max_element(vec.begin(), vec.end());
// }

// Try the above function without the algorithm functionality

int get_vector_max_value(const vector<int>& vec)
{
    // Set the initial max value to the first number in the list
    int max = vec[0]; 

    // loop over the list, if a larger number is found update the value

    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] > max) {
            max = vec[i]; 
        }
    }

    return max;
}




vector<int> get_square_of_each_element(const vector<int>& vec)
{
    vector<int> result;
    for (int num : vec)
    {
        result.push_back(num * num);
    }
    return result;
}

