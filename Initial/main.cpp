#include <iostream>
#include <cmath>
#include <typeinfo>


using namespace std;

struct {
    string name;
    string department;
    int age = 20;

    bool isOld(){
        if(age>=20){
            return true;
        }
        return false;
    }

    string getDepartment(){
        if(department.length() != 0 ){
            return department;
        }else{
            return "Unknown Department";
        }

    }

}myStudent;

char checkNumber(int num){
    if (num >= 0 && num < 40){
        return 'F';
    }else if(num >= 40 && num < 45){
        return 'E';
    }else if(num >= 45 && num < 50){
        return 'D';
    }else if(num >= 50 && num < 60){
        return 'C';
    }else if(num >= 60 && num < 70){
        return 'B';
    }else{
        return 'A';
    }
}

int main()
{
    int num;
    cout << "Enter score between 0 to 100" << endl;
    cin >> num;
    cout << "Your Grade is: " << checkNumber(num) << endl;


    return 0;
}
