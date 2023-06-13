#include "val_ref.h"

// int value_param(int num){
//     auto num = 0;
//     int num = 20;
// }

// void reference_param()
// {
//     auto num = 0;
//     num = 20;
// }

void const_reference_param(const int &num)
{
    // num = 20 can't modify a read only const reference parameter
}