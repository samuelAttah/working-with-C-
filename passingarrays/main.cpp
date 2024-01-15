#include <iostream>
#include <cmath>


using namespace std;


bool checkPerfectSquare(int num){
    bool confirm;

    if(num>0){
        int result = sqrt(num);

        if (result* result == num){
            confirm = true;

        }else{
            confirm = false;

        }
    }

    return confirm;

}

void perfectArray(int arr[]){


    for(int i=0; i < 8; i++){
        if (checkPerfectSquare(arr[i])){
            cout<<arr[i] << " is a perfect square\n" <<endl;
        }
    }



}

int main()
{
    /*int arr[10];
    arr[20]=100;
    cout << "element 20 is"<< arr[20] << endl;*/

    int myArr[]= {3,5,9,15,16,20,25,50};
    perfectArray(myArr);

    return 0;
}
