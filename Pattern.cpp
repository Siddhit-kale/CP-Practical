#include<iostream>
using namespace std;
int main()
{

    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        char c='A';
        for(j=0;j<=i;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        char c='A';
        for(j=0;j<=i;j++)
        {
            cout<<c;
        }
        c++;
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        char c='A';
        for(j=0;j<=i;j++)
        {
            cout<<char(c+i);
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=5-i; k<=5; k++){
            cout <<"*";
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        int c=1;
        for(j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=5-i; k<=5; k++){
            cout <<c++;
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=5-i; k<=5; k++){
            cout <<i+1;
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        char c='A';
        for(j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=5-i; k<=5; k++){
            cout <<char(c+i);
        }
        cout<<endl;
    }    
    
    for(i=0;i<5;i++)
    {
        char c='A';
        for(j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=5-i; k<=5; k++){
            cout <<c++;
        }
        cout<<endl;
    }
    
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    
    for(i=4;i>=0;i--)
    {
        char c='A';
        for(j=0;j<=i;j++)
        {
            cout<<c++;
        }
        cout<<endl;
    }
    return 0;
}