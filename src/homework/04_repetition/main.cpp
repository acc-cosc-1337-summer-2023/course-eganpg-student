//write include statements
#include "repetition.h"
#include<iostream>

using std::cin;
using std::cout;

//write using statements

int main() 
{
	string dna;
    char choice;

    do {
        cout << "Enter a DNA string: ";
        cin >> dna;

        double gc_content = get_gc_content(dna);
        cout<<"GC content: "<<gc_content<<"\n";

        cout<<"To stop press Y or y; otherwise enter any other character?: ";
        cin>>choice;
    } while (choice != 'y' && choice != 'Y');

    return 0;
	
}
