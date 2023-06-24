#include <iostream>
#include <vector>
#include "func.h"

using std::cout;
using std::cin;
using std::endl;


int main() 
{
	vector<int> vec1 = {5, 7, -1, 99, -100, 10};
    vector<int> vec2 = {6, 1, 8, 9, 4};

    int choice;
    do
    {
        cout << "Menu:\n";
        cout << "1- Get max value\n";
        cout << "2- Get square of elements\n";
        cout << "3- Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int max = get_vector_max_value(vec1);
                cout<<"Max value: "<<max<<endl;
                break;
            }
            case 2:
            {
                vector<int> squared = get_square_of_each_element(vec2);
                cout << "Squared elements: ";
                for (int num : squared)
                {
                    cout << num << " ";
                }
                cout << endl;
                break;
            }
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
	
}
