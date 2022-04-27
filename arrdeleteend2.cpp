//KRISHNA CHATURVEDI 2021BTCS020
//DELETION AT THE END 
#include<iostream>
using namespace std;

int main()

{
int n;
cout  <<  "\n\n Enter the number of elements(Max:50) \n\n";
cin >> n ;

int array[50], i, a;


cout  <<  "\n\nEnter " << n <<" Array Elements: \n"  <<  endl;
for(i=0; i<n; i++)
cin  >>  array[i];

for (i = n-1 ; i <= n+1; i++)
    {
        array[i] = array[i + 1];
    }

    

cout  <<  "\nThe New Array is:\n";
for(i=0; i<n-1; i++)
cout<< array[i]<<endl;
return 0;
}