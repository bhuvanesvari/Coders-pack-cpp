#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter the elements to be swapped\n";
    cin>>a>>b;
    cout<<"Before swapping\na: "<<a<<"\nb: "<<b<<"\n";
    swap(a,b);
    cout<<"After swapping\na: "<<a<<"\nb: "<<b;
    return 0;
}
void swap(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}