//write include statements
#include "decisions.h"
#include<iostream>

using std::string;
using std::cin; 
using std::cout;

int main() 
{	
	int grade;
	cout<<"Please enter the numerical grade: \n";
	cin>>grade;
	
	string letter_grade = get_letter_grade_using_switch(grade);

    cout<<"You got the following grade: "<<letter_grade<<"\n";
	return 0;
}