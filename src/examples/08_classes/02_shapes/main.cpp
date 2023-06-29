//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/

using std::vector;

int main() 
{
	vector<Shape*> shapes;

	Shape* shape;

	Circle circle;
	// circle.draw();
	shapes.push_back(&circle);


	return 0;
}