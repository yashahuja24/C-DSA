#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter elements of Arry:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the group size: ";
    cin>>k;
    int p,q=k-1;
    for(int i=0;i<n;i+=k)
    {
        p=i;
        for(int j=0;j<k/2;j++)
        {
            swap(arr[p++],arr[q--]);
        }
        q+=(3*k)/2;
    }
    cout<<"Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}