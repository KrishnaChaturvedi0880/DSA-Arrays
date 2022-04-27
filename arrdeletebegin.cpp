//KRISHNA CHATURVEDI 2021BTCS020
//DELETE FROM THE BEGINNING
#include <iostream>
using namespace std;

int main()
{
   

    int n;

    cout << " Enter the size of the array: ";
    cin >> n;

    int arr[n], i, pos;

    cout << "\n\n Enter the " << n << " elements of the array: \n\n";
    for(i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }


    cout << "\n\n The " << n << " elements of the array, before deletion are : \n\n";
    for(i=0; i<n; i++)
    {
        cout << arr[i] << "  "; 
    }

    for (i = 0; i <= 9; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << " \n\nThe " << n-1 << " elements of the array, after deletion are : \n\n";
    for(i=0; i<n-1; i++)
    {
        cout << arr[i] << "  "; 
    }
             
    cout << "\n\n";

    return 0;
}