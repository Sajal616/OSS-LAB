#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string to be reversed: ";
    cin>>s;
    int n=s.length();
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        ++start;
        --end;
    }
    cout<<"Reversed String: "<<s;
    return 0;
}
