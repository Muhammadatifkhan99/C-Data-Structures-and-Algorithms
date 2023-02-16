#include<iostream>
using namespace std;

int main (){
    int no_ofelements{};
    cin>>no_ofelements;
    int array [no_ofelements];
    for (int i = 0;i < no_ofelements; i ++){
        cin>>array[i];
    }
    cout<<endl;
    cout<<"Before Reverse: "<<endl;
    for(int i = 0;i < no_ofelements ; i ++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    
    int start {};
    int end {no_ofelements - 1};
    while ( start <= end)
    {
        swap (array[start],array[end]);
        start++;
        end --;
    }
    cout<<"After Reverse: "<<endl;
    for (int i = 0;i< no_ofelements; i ++){
        cout<<array[i]<<" ";
    
    }
    cout<<endl;
    
    
    
    
    
    
    return 0;
}