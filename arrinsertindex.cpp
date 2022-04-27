// KRISHNA CHATURVEDI 2021BTCS020
//inserting at a particular index
#include <iostream>
using namespace std;
int main()
{
int array[20], pos, size, val; 
//Insertion at a given position
cout<<"Enter size of the array:";
cin>>size;
cout<<"\nEnter "<<size<< " elements\n";
for (int i = 0; i < size; i++)
cin>>array[i] ;
cout<<"Enter the insertion location\n";
cin>>pos;
cout<<"Enter the value to insert\n";
cin>>val;
for (int i = size -1; i >= pos-1; i--)
array[i+1] = array[i];
array[pos-1] = val;
cout<<"Resultant array is\n";
for (int i = 0; i <= size; i++)
cout<<endl<<array[i];
return 0;
}
