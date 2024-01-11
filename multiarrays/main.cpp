#include <iostream>

using namespace std;

int main()
{
    int myArray[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}};

    for(int i=0; i<3; ++i){

        for(int j=0; j<4; ++j){

            cout<< myArray[i][j]<<" ";

        }
        cout<<"\n";
    }
    cout << "Hello world!" << endl;
    return 0;
}
