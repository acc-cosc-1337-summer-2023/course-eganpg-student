
#include<iostream>
using std::cout;
int main()
{
    auto num = 5;
    cout<<"Memory number is: "<<&num<<"\n";
    int &num_ref = num; //save the address of num into num_ref
    cout<<"Value of num via num_ref "<<num_ref<<"\n";
    return 0;
}