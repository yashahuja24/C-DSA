#include<iostream>
#include<queue>
using namespace std;
void FirstNve(int arr[],int n,int k);
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
    cout<<"Enter the Window Size: ";
    cin>>k;
    FirstNve(arr,n,k);
    return 0;
}
void FirstNve(int arr[],int n,int k)
{
    int ans,i=0,j=0;
    queue<int>q;
    while(j<n)
    {
        if(arr[j]<0)
        {
            q.push(arr[j]);
        }
        if(j-i+1<k)
        {
            j++;
        }
        else if((j-i+1)==k)
        {
            if(q.empty())
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<q.front()<<" ";
                if(arr[i]==q.front())//it will move out of te window now so we can pop it now
                {
                    q.pop();
                }
            }
            i++;
            j++;
        }
    }
}