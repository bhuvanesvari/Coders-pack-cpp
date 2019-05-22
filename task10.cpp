#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[50];
    cout<<"Enter the string\n";
    cin.get(s1,50);
    for(int i=0;i<strlen(s1);i++){
    if(int(s1[i])>=65&&int(s1[i])<=90)
    {
        s1[i]=s1[i]+32;
    }}
    cout<<s1;
    return 0;
}