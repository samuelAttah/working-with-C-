#include <iostream>

using namespace std;

int main()
{
    int advancedArray[3][2][3]={{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}},{{13,14,15},{16,17,18}}};

    for(int i=0; i<3; ++i){

        for(int j=0; j<2; ++j){

            for(int k=0; k<3; ++k){

                cout<<advancedArray[i][j][k] <<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }

    cout << "Hello world!" << endl;
    return 0;
}
