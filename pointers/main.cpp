#include <iostream>

using namespace std;

int main()
{
    //string name = "David";
    float x = 10.7;

    float &rx=x;
    rx=11.9;

    int num = 300;

    const int &rnum=num;

    rnum=500;

    cout<< "value of rx is "<<rx<< endl;
    cout<< "value of x is "<<x<< endl;
    cout<< "value of rnum is "<<rnum<< endl;
    cout << "Hello world!" << endl;
    return 0;
}
