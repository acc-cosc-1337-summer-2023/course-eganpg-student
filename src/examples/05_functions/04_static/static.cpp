#include "static.h"

using std::cout;
using std::endl;

void use_static()
{
    static int num = 0;
    num++;
    cout<<num<<endl;
}

void use_non_static()
{
    int num = 0;
    num++;
    cout<<num<<endl;
}