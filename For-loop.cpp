// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {

// // //     // // FIRST 

// // //     // int i;
// // //     // for(i=1;i<=10;i=i+1)
// // //     // cout<<"Hello MOhit ";



// // // // SECOND

// // // // int i;
// // // // for(i=1;i<=5;i=i+1)
// // // // cout<< i ;


// // // // THIRD PRINT SQUARE FROM 1 T0 N

// // // // int n,i;
// // // // cout<<"Enter the number to get the square:";
// // // // cin>>n;
// // // // for(i=1;i<=n;i=i+1)
// // // // cout<<i*i;


// // // // FOURTH  EVEN NUMBER TO THE N
// // // // int i,n;
// // // // cout<<"Enter the number upto then what are the even number:";
// // // // cin>>n;
// // // // for(i=0;i<=n;i=i+2)
// // // // cout<<i<<endl;


// // // // HOME-WORK SOLUTIONS


// // // // Day 4/180 If-Else and For Loop


// // // // If-else
// // // // 1.Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
// // // // 2.Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
// // // // 3.Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
// // // // 4.Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

// // // //  For Loop
// // // // 1.Print “India will win the World Cup 2023”, 20 times.
// // // // 2.Print all Odd numbers from 1 to n, take n as an input from the user.
// // // // 3.Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

// // // // 1.
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int a,b;
// // // //     cout<<"Enter the value of a:";
// // // //     cin>>a;
// // // //     cout<<"Enter the value of b:";
// // // //     cin>>b;
     
// // // //     if(a>b)
// // // //     cout<<a;
// // // //     else
// // // //     cout<<b;

// // // // }

// // // // 2.

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int age;
// // // //     cout<<"Enter the age:";
// // // //     cin>>age;

// // // //     if(age>18)
// // // //     cout<<"Adult";
// // // //     else 
// // // //     cout<<"Teenager";
// // // // }

// // // // 3.

// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int i;
// // //     cout<<"Enter the month number:";
// // //     cin>>i;

// // //     // for(i=1;i<13;i=i+1)
    
// // //     if(i==1)
// // //         cout<<"Jan";
// // //     else if(i==2)
// // //         cout<<"Feb";
// // //     else if(i==3)
// // //         cout<<"March";
// // //     else if(i==4)
// // //         cout<<"April";
// // //     else if(i==5)
// // //         cout<<"May";
// // //     else if(i==6)
// // //         cout<<"June";
// // //     else if(i==7)
// // //         cout<<"july";
// // //     else if(i==8)
// // //         cout<<"August";
// // //     else if(i==9)
// // //         cout<<"September";
// // //     else if(i==10)
// // //         cout<<"Oct";
// // //     else if(i==11)
// // //         cout<<"Nov";
// // //     else if(i==12)
// // //         cout<<"Dec";
// // //     else 
// // //     cout<<"Invalid number";

    
// // // }


// // // 4.

// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // {
// //     int age;
// //     cout<<"Enter the age:";
// //     cin>>age;
    
// //     if (age<12 || age>65)
// //     cout<<"Yes  you are  eligible fro discount";
// //  else
// //  cout<<"No  you are  not eligible fro discount"; 


// // }



// // For loop

// // 1.

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     for( int i=0;i<=20;i++)
// //     cout<<"India will win the WC" <<endl;
// // }


// // 2.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i;
//     cout<<"Enter the number upto then to find the odd number:";
//     cin>>n;

//     for ( i=1;i<=n;i=i+2)
//     cout<<i;
// }


// 3.

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the number for finding the multiple of 4:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i%4==0)
        cout<<i  << " ";
        
    }
}







