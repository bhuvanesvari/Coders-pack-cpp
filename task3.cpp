#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year\n";
    cin>>year;
    if(year%400==0||((year%4==0)&&(year%100!=0)))
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not a leap year";
    }
    return 0;
    
}
