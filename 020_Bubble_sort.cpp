#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements in array: "; // Corrected the missing semicolon
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = n - 2; i >= 0; i--) // Initialized i in the loop
    {
        bool swapped = 0;
        for(int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j + 1]) // Removed the semicolon after the if condition
            {
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(swapped == 0)
            break;
    }

    for(int i = 0; i < n; i++) // Changed the scope of i to avoid conflict
        cout << arr[i] << " ";
    
    return 0; // Added return statement to indicate successful termination
}
