#include <iostream>
using namespace std;

int main() {
    
    int search;
    cin>>search;
    int flag = 0 ;
    int size,i,n,d;
    cout <<"enter the size of array="<<endl;
    cin >> size;
    int  a[size];
    
    for (i = 0; i < size; i++)
    {
        cout <<"enter the element of array=";
        cin >> a[i]; 
    }
    cout << "Enter the value you want to search is in"<<endl;
    for(i = 0; i < size; i++)
    {
        if(search ==a[i])
        {
            flag = 1;
            cout << "\n"<<i;
        }
    }
    if(flag == 0)
    {
        cout << "you enter value is not here"<<endl;
    }
    
    return 0;
}
 
