#include <iostream>
using namespace std;
int main()
{
 int array[50], n,i;

cout<<"Enter the size of array( max 50): ";
cin>> n;
cout<<"\nEnter Elements in array:\n ";
for(i=0;i<n;i++) 
{
cin>> array[i];
}
for(i=0;i<n;i++) 
{
cout<<endl<<array[i]; 
}
return 0; 
}


