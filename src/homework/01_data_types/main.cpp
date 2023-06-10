//write include statements
#include "data_types.h"


//write namespace using statement for cout
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

int main()
{
	int num;
	//added label to make input clear
	cout<<"Please enter a number to complete the task: \n";
	cin>>num;
	
	int result = multiply_numbers(num);
	cout<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<result<<"\n";



	return 0;
}
