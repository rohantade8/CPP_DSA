// // Star pyramid pattern problems
// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     int n;

//     cout << "Enter the number of rows: ";
//     cin >> n;

//     // Loop for each row
//     for (row = 1; row <= n; row = row + 1)
//     {
//         // Space print
//         for (col = 1; col <= n - row; col = col + 1)
//             cout<<"  ";

//         // * print
//         for (col = 1; col <= 2*row-1; col = col + 1)
//             cout<<"* ";

//         cout<<endl;
//     }

// }


// // Numbers pyramid
// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     int n;
//     cout<<"enter the input: ";
//     cin>>n;

//     for(row=1;row<=n;row=row+1)
//     {
//         //space print
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         // 1 to row
//         for(col=1;col<=row;col=col+1)
//         cout<<col<<" ";
//         //row-1 to 1
//         for(col=row-1;col>=1;col=col-1)
//         cout<<col<<" ";

//     cout<<endl;
//     }
// }

// //reverse pyramid pattern
// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(row=n;row>=1;row=row-1)
//     {
//         //space
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
    
//     //  STAR print
//         for(col=1;col<=2*row-1;col=col+1)
//         cout<<"* ";
//         cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     int n;
//     cout<<"Enter the input: ";
//     cin>>n;

//     for(row=n;row>=1;row=row-1)
//     {
//         //print *
//       for(col=1;col<=row;col=col+1)
//       cout<<"* ";

//       // print space
//       for(col=1;col<=2*n-2*row;col=col+1)
//       cout<<"  ";

//       //print *
//       for(col=1;col<=row;col=col+1)
//       cout<<"* ";

//       cout<<endl;

// }

#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter the input: ";
    cin >> n;

    for(row = 1; row <= n; row = row + 1)
    {
        // * print
        for(col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        for(col = 1; col <= 2 * n - 2 * row; col = col + 1)
            cout << "  ";

        // * print
        for(col = 1; col <= row; col = col + 1)
            cout << "* ";

        cout << endl;
    }

    for(row = n - 1; row >= 1; row = row - 1)  // Fix the loop condition and update expression
    {
        // * print
        for(col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        for(col = 1; col <= 2 * n - 2 * row; col = col + 1)
            cout << "  ";

        // * print
        for(col = 1; col <= row; col = col + 1)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
