#include<iostream>
using namespace std;

int main(){
    
    int no_ofelements {};
    cout<<"Enter the number of elements the array to hold: "<<endl;
    cin>>no_ofelements;
    int array [no_ofelements];
    cout<<"Enter "<<no_ofelements<<" array elements: "<<endl;
    for(int i = 0;i < no_ofelements; i ++) {
        cin>>array[i];
    }
    cout<<endl;
    cout<<"Array in normal order "<<endl;
    for(int i = 0;i < no_ofelements;i ++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Reverse Print "<<endl;
    for (int i = no_ofelements - 1;i >= 0;i --){
    cout<<array[i]<<" ";
}
    cout<<endl;
    return 0;
}