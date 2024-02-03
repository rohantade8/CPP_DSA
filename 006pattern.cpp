// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;

//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5;col=col+1)
//         {
//         cout<<"*"<<" ";
//         }

//          cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
// int row,col; 

//   for(row=1;row<=5;row=row+1)
//      {
//          for(col=1;col<=5;col=col+1)
//         {
//         cout<<"10"<<" ";
//         }

//         cout<<endl;

//      }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;

//   for(row=1;row<=5;row=row+1)
//      {
//   for(row=1;row<=5;row=row+1)
//      {
//          for(col=1;col<=5;col=col+1)
//         {
//         cout<<"10"<<" ";
//         }

//         cout<<endl;

//      }
// }//         {
//         cout<"row<<"row";
//         }

//         cout<<endl;

//      }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for (row = 1; row <= 5; row = row + 1)
//     {
//         for (col = 1; col <= 5; col = col + 1)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
 
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=5;col>=1;col=col-1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;

//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5;col=col+1)
//         {
//             cout<<col*col<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     for(row=1;row<=5;row=row+1)
//     {
//         char name = 'a'+row-1;
//         for( col =1; col <= 5; col=col+1)
//         {
//             cout<<name<<" ";
//         }

//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int row;
//     char col;

//     for (row =1; row <=5;row=row+1)
//     {
//         for(col='a';col<='e';col=col+1)
//         {
//         char name = 'a'+col-'a';
//         cout << name << " ";
//         }
//         cout<<endl;
//     }
// }



#include<iostream>
using namespace std;

int main()
{
    int row,col;

    for(row;row<=5;row=row+1)
    {
        for(col=1;col<=15;col=col+1)
        {
            cout<<(row-1)*5+col<<" ";
        }
        cout<<endl;
    }
}