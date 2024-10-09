#include<iostream>
using namespace std;
void LargestSize(int arr[],int n,int k);//k is the target sum
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    cout<<"Enter the elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];   
    }
    int k;
    cout<<"Enter the Target Sum: ";
    cin>>k;
    LargestSize(arr,n,k);
    return 0;
}
void LargestSize(int arr[],int n,int k)//does not include -ve integers
{
    int i=0,j=0,size=0,sum=0,maxi=0;
    while(j<n)
    {
        sum+=arr[j];
        if(sum<k)
        {
            j++;
        }
        else if(sum==k)
        {
            size=j-i+1;
            maxi=max(size,maxi);
            j++;
        }
        else if(sum>k)
        {
            while(sum>k)
            {
                sum-=arr[i];
                i++;
            }
            j++;
        }
    }
    cout<<"Max Size of Subarray is: "<<maxi<<endl;
    return;
}