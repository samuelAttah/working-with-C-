#include <iostream>
#include <cmath>


using namespace std;

double cube(double num){
    double result;
    result = pow(num, 3);

    return result;
}

int main()
{
    double number;
    cout<<"Enter a decimal type Number to get the cube"<<endl;
    cin>> number;
    cout<< "The cube of "<<number <<" is " << cube(number) <<endl;
    cout << "Hello world!" << endl;
    return 0;
}
