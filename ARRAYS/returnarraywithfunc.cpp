#include<iostream>
using namespace std;
void func(int *array,int n);//we can return  function using pointers
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int *arr{new int[n]};
    func(arr,n);
    cout<<"Entered Elements are:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
void func(int *array,int n)//we should not make a pointer function(int *func), as if we use out of its scope , its bad practice
{
    cout<<"Enter elements of Array:-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
}