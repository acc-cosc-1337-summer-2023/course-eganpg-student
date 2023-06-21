#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int num = 5;
	int num1 = 10;
	int& num_ref = num;

	cout<<"Value of num via num_ref: "<<num_ref<<"\n";
	cout<<"num value: "<<num<<"\n";
	num_ref = 20;

	cout<<"Value of num via num_ref: "<<num_ref<<"\n";
	cout<<"num value: "<<num<<"\n";

	num_ref = num1;
	cout<<"Value of num via num_ref: "<<num_ref<<"\n";
	cout<<"Value of num1: "<<num1<<"\n";

	num_ref = 100;
	cout<<"Value of num via num_ref: "<<num_ref<<"\n";
	cout<<"num value: "<<num<<"\n";
	cout<<"Value of num1: "<<num1<<"\n";

	int num3 = 50;
	int* num_ptr = &num3;
	cout<<"Memory address num_ptr points to: "<<num_ptr<<"\n";
	


	return 0;
}