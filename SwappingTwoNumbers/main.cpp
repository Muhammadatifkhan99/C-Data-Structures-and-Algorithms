#include<iostream>
using namespace std;

int main(){
    cout<<"Enter two integers to swapp them: "<<endl;
    int a{};
    int b{};
    cin>>a;
    cin>>b;
    cout<<"Before Swapp: "<<" a "<<a<<" and b: "<<b<<endl;
    int temp {}; /* nt temp {}; temp =  a; a = b; b= temp;*/
    temp = b;
    b= a;
    a= temp;
    
    cout<<"After Swapp: "<<" a "<<a<<" and b: "<<b<<endl;
    return 0;
}