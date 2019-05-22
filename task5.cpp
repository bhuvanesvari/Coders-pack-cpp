#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n,l,s;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    l=a[0];
    for(int i=1;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    cout<<"Largest element: "<<l<<"\n";
    s=a[0];
    for(int i=1;i<n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
        }
    }
    cout<<"Smallest element:"<<s<<"\n";
    return 0;
}
