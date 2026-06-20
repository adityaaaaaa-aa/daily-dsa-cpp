/*wap take marks as input and print grade 
below 25 - f
25-44 e
45-49 d
50-59 c
60-79 b
80-100 a*/
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks<25){

        cout<<"F";

    }
    else if(marks <=44){
        cout<<"E";
    

    }
    else if(marks <=49){
        cout<<"D";

    }
    else if(marks<=59){
        cout<<"C";


    }
    else if(marks <=79){
        cout<<"B";
    }
    else if(marks <=100){
        cout<<"A";
    }

    return 0;
}