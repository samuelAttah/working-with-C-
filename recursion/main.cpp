#include <iostream>
#include <cmath>

using namespace std;

int factorial(int num){
    if (num==1){
        return num;
    }
    return num*factorial(num-1);

}



int sumOfNums(int a, int b){
    if(a==b){
        return a;
    }

    return a + sumOfNums(a+1, b);



}

bool checkOddNumber(int num){
    bool confirm;
    if(num>0){
        if(num%2 !=0){
            confirm = true;
        }else{
            confirm=false;
        }
    }else{
        confirm= false;

    }

    return confirm;

}

int sumOddNumsBetweenValues(int a, int b){

    if(checkOddNumber(a)){
        if(a==b){
            return a;
        }

        return a + sumOddNumsBetweenValues(a+1, b);
    }
    return sumOddNumsBetweenValues(a+1,b);

}

int main()
{
    cout<<"Factorial of 3 is "<< factorial(3)<<endl;
    cout<< "The sum of numbers between 2 and 10 is "<< sumOfNums(2,10)<<endl;
    cout<< "The sum of odd numbers between 2 and 10 is "<< sumOddNumsBetweenValues(2,10)<<endl;
    std::cout<<std::boolalpha <<"Is 5 an Odd Number? "<<checkOddNumber(8)<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
