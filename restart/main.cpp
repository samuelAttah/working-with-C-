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


int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    bool answer = checkPerfectSquare(num);

    if(answer){
            cout << num <<" Is a Perfect Square" << endl;
        }else{
            cout << num <<" Is not a Perfect Square" << endl;
        }


    return 0;
}
