
//KRISHNA CHATURVEDI 2021BTCS020
//INSERTION AT THE END 
#include<iostream>
using namespace std;

int main()

{

int array[10], i, a;


cout  <<  "Enter 5 Array Elements: "  <<  endl;
for(i=0; i<5; i++)
cin  >>  array[i];


cout  <<  "\nEnter Element to Insert: ";
cin>>a;
 
 array[i] = a;


cout  <<  "\nThe New Array is:\n";
for(i=0; i<6; i++)
cout<< array[i]<<endl;
return 0;
}