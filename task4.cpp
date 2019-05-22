#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"The sum of the array is "<<sum;
    return 0;
}