#include<iostream>
using namespace std;

bool ispalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if(s[start] == s[end]) {
            end++;
            start--;
        }
        else {
            return true;
        }
    }
    return false;
}
int main() 
{
   string s;
   cin >> s;

   if(ispalindrome(s)) {
    cout <<"String is Palindrome";
   }
    else {
        cout <<"String is not Palindrome";
    }

}
