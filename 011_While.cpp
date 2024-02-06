//print upto n
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter your number: ";
//     cin>>n;
//     int i=1;

//     while(i<=n)     //break
//     {
//         {
//             cout<<i<<endl;
//             i++;
//         }
//     }
// }


// Multiplication table
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter your no.: ";
//     cin>>n;
//     int i=1;

//     while(i<=n)     //break
//     {
//         {
//             cout<<i*n<<endl;
//             i++;
//         }
//     }
// }



//find factors
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the Number: ";
//     cin>>n;
//     int i=1; // initalize

//     while (i<=n)     //break
//     {
//         if(n%i==0)
//         {
//             cout<<i<<endl;
//         }
//         i++;     //
//     }
    
// }



//DO WHILE

// print N Number
// #include<iostream>
// using namespace std;

// int main()

// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int i=1;

//     do{
//         cout<<i<<endl;
//         i++;
//     }
//     while (i<=n);
    
// }



// Sum of N Number
// #include<iostream>
// using namespace std;

// int main()

// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     int i=1;    //initialize

//     do{
//         cout<<n*i<<endl;
//         i++;    //update
//     }while (i<=10); //break
    
// }



// Break
// #include<iostream>
// using namespace std;
// int main()
// {
// //break

// for(int i=1;i<=10;i++)
// {
//     if(i==4)
//     break;

//     cout<<i<<" ";
// }
// } 



//break continue
// #include<iostream>
// using namespace std;
// int main()
// {
// //break continue

// for(int i=1;i<=10;i++)
// {
//     if(i==4)
//     continue;

//     cout<<i<<" ";
// }
// } 





// // Dont print 4 divisible number
// #include<iostream>
// using namespace std;
// int main()
// {
// //break continue

// for(int i=1;i<=100;i++)
// {
//     if(i%4==0)
//     continue;

//     cout<<i<<" ";
    
// }
// } 


// Switch
// #include<iostream>
// using namespace std;

// int main()

// {
//     int i;
//     cout<<"Enter the number: ";
//     cin>>i;

//     switch (i)
//     {
//         case 1:
//         cout<<"Rohit";
//         break;

//         case 2:
//         cout<<"Rohan";
//         break;

//         default:
//         cout<<"Ram";

//     }
// }


// #include<iostream>
// using namespace std;

// int main()

// {
//     int i;
//     cout<<"Enter the number: ";
//     cin>>i;

//     switch (i)
//     {
//         case 1:
//         cout<<"Monday";
//         break;

//         case 2:
//         cout<<"Tuesday";
//         break;

//         case 3:
//         cout<<"Wed";
//         break;

//         case 4:
//         cout<<"Thursday";
//         break;

//         case 5:
//         cout<<"Friday";
//         break;

//         case 6:
//         cout<<"Sat";
//         break;

//         case 7:
//         cout<<"Sun";
//         break;

//         default:
//         cout<<"Enter the valid day";

//     }
// }


// Scope of variable
// #include<iostream>
// using namespace std;


// int main()
// {

//     int n = 10;
//     int i = 30;

//     if (i==30)
//     {
//     int n=20;
//     cout<<n;
    
//     }
// }


#include<iostream>
using namespace std;


int main()
{

    int n = 10;
    int i = 30;

   for(int i=10;i<=30;i++)
    cout<<i<<" ";
}