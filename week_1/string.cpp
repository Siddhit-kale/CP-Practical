#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cin >> str;
    int count = 0, cur_max = 0;
    for(int i=0; i<str.len(); i++){
        if(str[i] != ' ')
            count++;
        else{
            if (cur_max < count){
                cur_max=count;
                count=0;            
            }
            else{count=0;}
        }
    }
    cout << cur_max;
    return 0;
}