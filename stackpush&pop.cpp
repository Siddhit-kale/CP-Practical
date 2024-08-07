#include <stack>
#include <iostream>
using namespace std;

int main(){
    stack<string> str; 
    string str2;
    cout << "Enter String: ";
    getline(cin, str2);
    
    string result;
    for(int i = 0; i < str2.size(); i++){
        if(str2[i] != ' '){
            str.push(string(1, str2[i]));
        }
        else{
            while(!str.empty()){
                result += str.top();
                str.pop();
            }
            result += ' ';
        }
    }
    // To handle the last word if there's no space at the end
    while(!str.empty()){
        result += str.top();
        str.pop();
    }
    
    cout << result; 
    return 0;
}
