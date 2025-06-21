#include <iostream>
using namespace std;

int calculateStringValue(string s) {
    //Write your code here
    int ans=0;
    for(char i: s)
        ans+=i-'a'+1;
    return ans;
}

//Do not edit this part of code 
 int main() {
    string s;
    cin >> s;
    int result = calculateStringValue(s);
    cout << result;
    return 0;
}