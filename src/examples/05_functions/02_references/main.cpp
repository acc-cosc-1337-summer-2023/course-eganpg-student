
#include<iostream>
using std::cout;
int main()
{
    auto num = 5;
    cout<<"Num: "<<num<<"\n";
    cout<<"Memory number is: "<<&num<<"\n";
    int &num_ref = num;
    cout<<"Num ref stack address is: "<<&num_ref<<"\n";
    cout<<"3rd"<<"\n";  
    cout<<"Value of num via num_ref "<<num_ref<<"\n";
    cout<<"not in the stack"<<"\n";
    num_ref = 10;
    cout<<"The new value of num_ref is: "<<num_ref<<"\n";
    cout<<"The value of num is: "<<num<<"\n";
    return 0;
}