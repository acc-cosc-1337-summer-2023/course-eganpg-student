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

    //empty vector

    vector<int> nums0;
    nums0.push_back(5); // add one element to the vector

    vector<int> nums3(5,10);

    for(auto n: nums3)
    {
        cout<<n;
    }
    cout<<"\n";


    return 0;
}