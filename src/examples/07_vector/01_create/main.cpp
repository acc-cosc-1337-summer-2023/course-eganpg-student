#include<vector>
#include<iostream>

using std::cout;
using std::vector;


int main()
{
    vector<int> nums{1, 10, 7};
    cout<<nums[0]<<"\n";
    nums[0] = 5;
    cout<<nums[0]<<"\n";

    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capacity: "<<nums.capacity()<<"\n";


    return 0;
}