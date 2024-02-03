#include<iostream>
using namespace std;

// int main()
// {
//     int i;
//     for(i=101;i<=200;i=i+1)
//     {
//         cout<<i<<endl;
//     }
// }


// int main()
// {
//     char name;
//     for(name='a';name<='z';name=name+1)
//     {
//         cout<<name<<" ";
//     }
// }

// int main()
// {
//     int n,i;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for (i=n;i>=1;i=i-1)
//     {
//         cout<<i<<" ";
//     }
// }


// int main()
// {
//     int i;
//     for(i=1;i<=100;i=i+3)
//     {
//         cout<<i<<" ";
//     }
// }


// int main()
// {
//     int n,i;
//     cout<<"Enter the table: ";
//     cin>>n;

//     for(int i=1;i<=10;i=i+1)
//     {
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }


// int main()
// {
//     int n,pow,i, num;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Enter the power: ";
//     cin>>pow;
//     num=n;
//     for(i=1;1<pow;i=i+1)
//     {
//         num=num*n;
//     }
//     cout<<num;
// }


// int main()
// {
//     int n,fact=1,i;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(i=1;i<=n;i=i+1)
//     {
//         fact = fact*i;
//     }
//     cout<<fact<<endl;

// }


// int main()
// {
//     int n,i;
//     cout<<"Enter the number: ";
//     cin>>n;

//     if(n<2)
//     {
//         cout<<"Not a prime number";
//         return 0;
//     }
//     else
//     {
//         for(i=2;i<n;i=i+1)
//         {
//             if(n%i ==0)
//             {
//             cout<<"Not a prime number";
//             return 0;
//             }
//         }

//         cout<<"prime";
//         return 0;
//     }

// }

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     cout << "Fibonacci Series: ";

//     int current = 0, last = 1, previous = 0;  // Initialize variables

//     for (int i = 1; i <= n; ++i) {
//         cout << current << " ";
//         current = previous + last;  // Calculate the next term using the specified method
//         last = previous;  // Update variables for the next iteration
//         previous = current;
//     }

//     cout << endl;

//     return 0;
// }
