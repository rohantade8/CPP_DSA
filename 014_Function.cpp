// #include<iostream>
// using namespace std;

// int sum(int m,int n)    //function declare
// {
//     int ans = m+n;      //function define
//     return ans;
// }

// int mul(int m,int n)
// {
//     int ans = m*n;
//     return ans;
// }

// void fun()
// {
//     cout<<"Hello Coder Army\n";
// }

// int main()
// {
//     int m,n;
//     cout<<"Enter 2 number: ";
//     cin>>m>>n;

//     //Function call
//     cout<<sum(m,n);
//     cout<<endl;
//     cout<<mul(m,n);
//     cout<<endl;

//     fun();
// }




// #include<iostream>
// using namespace std;

// bool Prime(int n)
// {
//     if(n<2)
//     return 0;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         return 0;
//     }

//     return 1;
// }

// int Fact(int n)
// {
//     int ans = 1;
//     for(int i=1 ; i<=n ;i++)
//     ans=ans*i;

//     return ans;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter your number: ";
//     cin>>a>>b;


//     //A is prime or not
//     cout<<Prime(a)<<endl;

//     //A ka factorial
//     cout<<Fact(a)<<endl;

//     //B is prime or not
//     cout<<Prime(b)<<endl;

//     //B ka factorial 
//     cout<<Fact(b)<<endl;

//     //B-A ka prime or not
//     cout<<Prime(b-a)<<endl;

//     //B-A ka factorial 
//      cout<<Fact(b-a)<<endl;
// }


// // Swapping of two numbers
// // Pass by value
// #include<iostream>
// using namespace std;

// void swap(int a,int b)           // Pass by value
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" ";
// }

// //Pass by reference
// #include<iostream>
// using namespace std;

// void swap(int &a,int &b)         //Pass by reference
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" ";
// }


// // Function overloading
// #include<iostream>
// using namespace std;

// void swap(int &a,int &b)
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }


// void swap(float &c,float &d)
// {
//     float r = c;
//     c=d;
//     d=r;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

//     float f1=4.8 , f2=3.6;
//     swap(f1,f2);
//     cout<<f1<<" "<<f2;
// }


// In build swap function
#include<iostream>
using namespace std;



int main()
{
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" "<<endl;

    float f1=4.8,f2=3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}


