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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"The sorted array is\n ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
