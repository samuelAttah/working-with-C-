#include <iostream>

using namespace std;

char getMax(char first, char second){
    char answer;
    if(first>second){
        answer=first;
    }else{
        answer=second;
    }

    return answer;
}

int main()
{
    cout << "The greater character is " <<getMax('Z', 'X') <<endl;
    return 0;
}
