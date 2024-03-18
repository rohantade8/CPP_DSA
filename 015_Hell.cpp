// #include<iostream>
// using namespace std;

// char convert(char name)
// {
//     char ans = name-'a'+'A';
//     return ans;
// }

// int main()
// {
//     char name;
//     cin>>name;

//     cout<<convert(name);

// }


// #include<iostream>
// #include<cmath>
// using namespace std;

// int countdigit(int n)
// {
//     int count=0;
//     while(n)
//     {
//         count++;
//         n/=10;
//     }

//     return count;
// }

// void Armstrong(int num, int digit)
// {
//     int n=num, ans=0,rem;
//     while(n)
//     {
//         rem=n%10;
//         n/=10;
//         ans = ans+pow(rem,digit);

//     }

//     if(ans==num)
//     cout<<1;
//     else
//     cout<<0;
// }

// int main()
// {
//     int num;
//     cin>>num;

//     // Count digit
//     int digit = countdigit(num);
//     // Armstrong number
//     Armstrong(num,digit);
// }



// #include <iostream>
// #include <cmath>
// using namespace std;

// int countdigit(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         count++;
//         n /= 10;
//     }

//     return count;
// }

// bool Armstrong(int num)
// {
//     int n = num, ans = 0, digit = countdigit(num);
//     while (n)
//     {
//         int rem = n % 10;
//         n /= 10;
//         ans = ans + pow(rem, digit);
//     }

//     return ans == num;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (Armstrong(num))
//         cout << num << " is an Armstrong number." << endl;
//     else
//         cout << num << " is not an Armstrong number." << endl;

//     return 0;
// }
