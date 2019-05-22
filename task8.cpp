#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the two strings\n";
    getline(cin,s1);
    getline(cin,s2);
    int n1=s1.length();
    int n2=s2.length();
    if(n1!=n2)
    {
        cout<<"Not an anagram";
    }
    else
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"Anagram";
        }
        else
        {
            cout<<"Not an anagram";
        }
        
    }
    return 0;
    
}