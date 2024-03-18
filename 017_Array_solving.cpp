// reverse array

// #include<iostream>
// using namespace std;


// int main() {
//     int arr[6] = {1, 2, 3, 4, 5, 6};

//     int start = 0, end = 5;

//     while (start < end) 
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     };

//     for (int i = 0; i < 6; i++)
//     cout<<arr[i]<<" ";

//     return 0;

// }




// Fibonacci series
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int arr[1000];
//     // first = 0;
//     // second = 1;

//     arr[0]=0;
//     arr[1]=1;

//     for(int i=2;i<=n-1;i++)
//     arr[i] = arr[i-1]+arr[i-2];

//     cout<<arr[n-1]<<" ";

// }




// array function

#include<iostream>
using namespace std;

void fun(int a[], int n)
{
    cout<<sizeof(a)<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

int main()
{
    int arr[5]={3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
}