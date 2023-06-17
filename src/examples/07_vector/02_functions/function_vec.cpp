#include <vector>

void vector_value_param(std::vector<int> nums)
{
    nums[0] = 20;
}

void vector_value_param(std::vector<int> &nums)
{
    nums[0] = 20;
}