#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter the number of elements the array can hold"<<endl;
    cin>>a;
    int array[a];
    cout<<"Enter the elements of the array: "<<endl;
   
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
    int sum {0};
    for (int i = 0;i < a; i ++){
        sum += array[i];
    }
    cout<<endl; 
    cout<<sum<<" is the sum of the array elements "<<endl;
    return 0;
}