// // Decimal to Binary using operator

// #include<iostream>
// using namespace std;

// int main()

// {
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     int rem,ans=0,mul=1;

//     while(num>0)
//     {
//     //remainder
//     rem=num%2;
//     //quotient
//     num=num/2;          //     num/=2;
//     //ans
//     ans = rem*mul+ans;      //      ans+= rem*mul;
//     //multiply
//     mul=mul*10;         //      mul*=10;

//     }
//     cout<<ans<<endl;
// }


// // Decimal to Binary using bitwise

// #include<iostream>
// using namespace std;

// int main()

// {
//     int num;
//     cout<<"Enter the number: ";
//     cin>>num;
//     int rem,ans=0,mul=1;

//     while(num>0)
//     {
//     //remainder
//     rem=num&1;              // biwsie operation with 1      1101
//                             //                              0001

//     //quotient
//     num=num/2;          //     num/=2;
//     //ans
//     ans = rem*mul+ans;      //      ans+= rem*mul;
//     //multiply
//     mul=mul*10;         //      mul*=10;

//     }
//     cout<<ans<<endl;
// }


// binary to decimal
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int mul=1,ans=0,rem;

    while (num>0)
    {
        //remainder
        rem=num%10;
        //num ko divide kar do
        num = num/10;
        //ans
        ans=mul*rem+ans;
        //mul
        mul*2;
    }
    
    
    }