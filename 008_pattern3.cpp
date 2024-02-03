// Star print
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     {
//         for(row=1;row<=5;row=row+1)
//         {
    // SPace Print
//             for(col=1;col<=5-row;col=col+1)
//             {
//                 cout<<" ";
//             }
//      star Print
//             for(col=1;col<=row;col=col+1)
//             {
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     }
// }





// #include<iostream>
// using namespace std;

// int main()
// { 
//     int row, col;
//     int n;
//     cout<<"Input the number: ";
//     cin>>n;

//     for(row=1; row<=n; row=row+1)
//     {
//         // Space Print
//         for(col=1; col<=n-row; col=col+1)
//             cout<<" ";
        
//         // Number Print
//         for(col=1; col<=row; col=col+1)
//             cout<<row;
        
//         cout<<endl;
//     }
    
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     int n;

//     cout<<"Enter your number here: ";
//     cin>>n;

//     {
//         for(row=1;row<=n;row=row+1)
//         {   
//             for(col=1;col<=n-row;col=col+1)
//             {
//             cout<<" ";
//             }
//             for(col=1;col<=row;col=col+1)
//             {
//                 cout<<col;
//             }
//             cout<<endl;
//         }
//     }
// }


#include<iostream>
using namespace std;

int main()

{
    int row,col;

    for(row=1;row<=5;row=row+1)
    {
        
        for(col=1;col<=5-row;col=col+1)
        {
        cout<<" ";
        }

        for(char name='A';name<='A'+row-1;name=name+1)
        {
        cout<<name;
        }
        cout<<endl;
    }
}