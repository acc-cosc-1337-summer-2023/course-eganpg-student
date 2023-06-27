//circle.h
#include "shape.cpp"
#include<iostream>
class Circle: public Shape
{
    void draw(){std::cout<<"Draw Circle...\n";}
};