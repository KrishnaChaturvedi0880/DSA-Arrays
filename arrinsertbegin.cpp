//KRISHNA CHATURVEDI 2021BTCS020
//INSERTION AT THE BEGINNING 
#include<iostream>
using namespace std;

int main() 
{ 
    int array[10], n,i, t;

 cout  <<  "\n\nEnter the size of array: \n\n";
 cin  >>  n;
 
 cout  <<  "\n\nEnter Elements in array:\n\n ";
 for(i=0;i<n;i++) 
 {

cin>> array[i];

 }
 cout  <<  "\n\n Enter the element at the beginning\n\n";
 cin  >>  t;
n++;

for(i=n; i>0; i--) 
{
array[i]=array[i-1]; 
}
array[0] = t;
cout<<"resultant array elements";
for(i=0;i<n;i++) 
{
cout<<endl<<array[i]; 
}
return 0; 
}
