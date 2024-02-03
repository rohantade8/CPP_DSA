// Printing right angle triangle with stars
// #include<iostream>
// using namespace std;

// int main()
// {
// int row,col;
    
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }

// }

// Ascending Number Pattern
// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;

//         for(row=1;row<=5;row=row+1)
//         {
//             for(col=1;col<=row;col=col+1)
//             {
//                 cout<<col<<" ";
//             }
//             cout<<endl;
//         }
// }

// Number Pattern 2
// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     {
//         for(row=1;row<=5;row=row+1)
//         {
//             for(col=1;col<=row;col=col+1)
//             {
//                 cout<<row<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

// Reverse Number System
// #include<iostream>
// using namespace std;
//  int main()
//  {
//     int row,col;
//     {
//         for(row=1;row<=5;row=row+1)
//         {
//             for(col=row;col>=1;col=col-1)
//             {
//                 cout<<col<<" ";
//             }
//             cout<<endl;
//         }
//     }
//  }

// Alphabet pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     {
//         for(row=1;row<=5;row=row+1)
//         {
//         char name = 'a' + row - 1; // Use single quotes for characters
//             for(col=1;col<=row;col=col+1)
//             {
//                 cout<<name<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }


//Star Pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int row,col;
//     {
//         for(row=1;row<=5;row=row+1)
//         {
//             for(col=1;col<=5-(row-1);col=col+1)
//             {
//                 cout<<"*"<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }

// Number Pattern
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    {
        for(row=1;row<=5;row=row+1)
        {
            for(col=1;col<=5-(row-1);col=col+1)
            {
                cout<<col<<" ";
            }
            cout<<endl;
        }
    }
}