#include <iostream>
#include <array>

using namespace std;



int main()
{
    int evenNums[]={2,4,6,8,10,12,14,16,18};
    int lengthOfArray = end(evenNums)-begin(evenNums);

    cout << "length of array is "<< lengthOfArray << endl;
    return 0;
}

