/* wap to take age as input and check if you are an adult or not */
#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age<18){
        cout<<"youy are not an adult";
    }
    else{
        cout<<"you are an adult";
    }
   
    return 0;
}