#incldue<iostream>
using namespace std;


int sumofdigit(int n) 
{
    if(n == 0)  
        return 0;

    return sumofdigit(n / 10) + n % 10;
}

int main()
{
    int n;
    cin >> n;
    cout << sumofdigit(n);
}