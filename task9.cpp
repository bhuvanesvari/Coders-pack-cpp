#include<iostream>
using namespace std;
int main()
{
    int days,weeks,years,tot;
    cout<<"Enter the total days\n";
    cin>>tot;
    years=tot/365;
    weeks=(tot%365)/7;
    days=(tot%365)%7;
    cout<<"Year: "<<years<<"\n"<<"Week: "<<weeks<<"\n"<<"Days: "<<days;
    return 0;
}