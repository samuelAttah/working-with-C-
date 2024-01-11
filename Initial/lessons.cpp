#include <iostream>
#include <cmath>


using namespace std;

int cubeNum(float num){

    int result = pow(num, 3);

    return result;

}


int main()
{
    cout << cubeNum(4.0) << endl;

    return 0;
}
