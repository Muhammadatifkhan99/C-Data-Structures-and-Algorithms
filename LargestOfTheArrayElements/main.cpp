#include<iostream>
using namespace std;

int main(){
    
    
    int a {};
    cout<<"Enter the number elements the array can hold: "<<endl;
    cin>>a;
    int array[a];
    cout<<"Enter the array elements separated by spaces: "<<endl;
    for(int i = 0; i <a;i++){
        cin>>array[i];
    }
    int largest = array[0];
    int smallest = array[0];
//    int largest = INT_MIN;
//    int smallest = INT_MAX;
    for (int i = 0; i < a; i ++){
    if (array [ i] > largest){
        largest = array[i];
    }
    if ( array[i] < smallest ){
        smallest = array[i];
    }
    }
    cout<<"The largest among the array elements is: "<<largest<<endl;
    cout<<"The smallest value is: "<<smallest<<endl;
    
    return 0;
}