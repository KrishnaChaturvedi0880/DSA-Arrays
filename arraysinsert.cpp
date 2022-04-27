#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, a;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<11; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>a;
    arr[i] = a;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<11; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}