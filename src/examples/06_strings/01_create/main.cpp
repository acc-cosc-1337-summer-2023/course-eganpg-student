#include<iostream>
#include<string>

using std::cout;
using std::string;


int main()
{
    // different ways to create a string

    string lang1 = "C++";
    string s0("Initial String");
    cout<<s0<<"\n";
    string s1(s0);
    cout<<s1<<"\n";
    string s2(s0, 8, 3);
    cout<<s2<<"\n";
    string s3("Another character sequence", 3);
    cout<<s3<<"\n";
    string s4(10, 'x');
    cout<<s4<<"\n";
    string s5(10, 24);
    cout<<s5<<"\n";
    



    int num = 5;
    string lang = "c++";

    cout<<lang<<"\n";
    cout<<"Memory of num: "<<&num<<"\n";
    cout<<"Memory address of lang: "<<&lang<<"\n";
    cout<<"Memory address of C in lang: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Memory address of + in lang: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Memory address of + in lang: "<<static_cast<void*>(&lang[2])<<"\n";
    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";
    lang.append(" ");
    lang.append("i");
    lang.append("s");
    lang.append(" ");
    lang.append("a");
    lang.append(" ");
    lang.append("p");
    lang.append("o");
    lang.append("p");
    lang.append("p");
    lang.append("o");
    lang.append("p");
    lang.append("p");
    lang.append("o");
    lang.append("p");
    lang.append("p");
    lang.append("o");
    lang.append("p");
    cout<<"Size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n";
    cout<<"Memory address of slot 14 in lang: "<<static_cast<void*>(&lang[14])<<"\n";


    int num2 = 10;
    cout<<"Memory of num: "<<&num2<<"\n";


    return 0;
}