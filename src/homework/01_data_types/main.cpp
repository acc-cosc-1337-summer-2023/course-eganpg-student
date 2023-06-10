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
	// take input as num int
	cin>>num;
	// call multiply numbers function and set to result
	int result = multiply_numbers(num);
	// display result with new line
	cout<<result<<"\n";
	// create num 1 and set to 4
	int num1 = 4;
	//call multiple number function a second time and reset result to latest result
	result = multiply_numbers(num1);
	// display new result
	cout<<result<<"\n";



	return 0;
}
