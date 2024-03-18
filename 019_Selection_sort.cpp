// {10,4,1,3,2,7} sorting by selection sort of constant

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[6]={10,4,1,3,2,7};          //We define an array arr with 6 integers.

    

//     for(int i=0;i<5;i++)            //We start a loop that goes from 0 to 4 (inclusive). This loop controls the position i from which we start finding the smallest element.

//     {
//         int index = i;                          //Inside this loop, we initialize a variable index with the value of i. This index will store the position of the smallest element found so far.

//         for(int j=i+1;j<6;j++)                  //We start another loop that goes from i+1 to 5. This loop finds the smallest element from position i to the end of the array.

//         {
//             if(arr[j]<arr[index])               //Inside this loop, if we find an element smaller than the element at position index, we update index to the position of this smaller element.

//             index=j;
//         }

//         swap(arr[i],arr[index]);            //After finding the smallest element, we swap the element at position i with the element at position 'index'.
//     }

//     for(int i=0;i<6;i++)                //We repeat this process for all positions from 0 to 4.

//     {
//         cout<<arr[i]<<" ";            //  Finally, we print the sorted array.

//     }
// }




// // selection sort fot variable
// #include<iostream>
// using namespace std;

// int main()
// {

//     int arr[1000];
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;     //size of array
//     cout<<"Enter the elemet in array: ";
//     for(int i=0;i<n;i++)
//     cin>>arr[i];

//     for(int i=0;i<n-1;i++)            //We start a loop that goes from 0 to 4 (inclusive). This loop controls the position i from which we start finding the smallest element.

//     {
//         int index = i;                          //Inside this loop, we initialize a variable index with the value of i. This index will store the position of the smallest element found so far.

//         for(int j=i+1;j<n;j++)                  //We start another loop that goes from i+1 to 5. This loop finds the smallest element from position i to the end of the array.

//         {
//             if(arr[j]<arr[index])               //Inside this loop, if we find an element smaller than the element at position index, we update index to the position of this smaller element.

//             index=j;
//         }

//         swap(arr[i],arr[index]);            //After finding the smallest element, we swap the element at position i with the element at position 'index'.
//     }

//     for(int i=0;i<n;i++)                //We repeat this process for all positions from 0 to 4.

//     {
//         cout<<arr[i]<<" ";            //  Finally, we print the sorted array.

//     }
// }