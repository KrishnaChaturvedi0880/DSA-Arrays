//KRISHNA CHATURVEDI 2021BTCS020
//DELETE FROM THE BEGINNING
#include <iostream>
using namespace std;

int main()
{
   

    int n;

    cout << " Enter the size of the array: ";
    cin >> n;

    int arr[100], i, t;

    cout << "\n\n Enter the " << n << " elements of the array: \n\n";
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }


    cout << "\n\n The " << n << " elements of the array, before insertion are : \n\n";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << "  "; 
    }
    

    cout << "\n\n Enter the elment to be added in the beginning \n\n";
    cin >> t; 
    n++;


    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    

    arr[0]=t;


    cout << " \n\nThe " << n+1 << " elements of the array, after insertion are : \n\n";
    for(i=0; i<n ; i++)
    {
        cout << arr[i] << "  "; 
    }
             
    cout << "\n\n";

    return 0;
}