// // #include<iostream>
// // using namespace std;

// // int main()
// // {

// // // For loop in advance

// //     int i;
// //     for (i=100;i<=200;i++)
// //     {
// //         cout<<i<<endl;
// //     }
// // }

// // To print the alphabet from a to z.

// // #include<iostream>
// // using namespace std;

// // int main()
// // {

// // // For loop in advance

// //     char i;
// //     for (i='a';i<='z';i++)        /*Since  i is alphabet ,so it takes the value of i in char,so if i='a'+1  so in this a vaule in ASCII in 98 and it it increasing with 1,so it will start a loop in char i.e,i=98+1 ,i.e.,i=99 so it will be reflect 'b' in character*/
// //     {
// //         cout<<i<<endl;
// //     }
// // }



// // To print the reverse number from 10 to 1

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int i;
// //     for(i=10;i>=1;i--)
// //     cout<<i<<" ";
// // }



// // Print the numer from 1 to 100 withe the span of 3;

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     for(i=1;i<=100;i=i+3)
//     cout<<i<< " ";
// // }


// // Print the table of the given number given in input

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,n;
//     cout<<"Enter the number for creating the table:";
//     cin>>n;

//     for(i=1;i<=10;i++)
//     {
//     cout<<n<<"*"<<i<<"="<<i*n<<endl;
//     }
// }


// Second way to prnt the table

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,n;
//     cout<<"Enter the number for creating the table:";
//     cin>>n;

//     for(i=n;i<=10*n;i=i+n)
//     {
//     cout<<i<<endl;
//     }
// }



// Calculate the power of a number

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int i,n,p,num;
// //     cout<<"Enter the number:";
// //     cin>>n;
// //     cout<<"Enter the power:";
// //     cin>>p;

// //     num= n;

// //     for(i=1;i<p;i++)
    
// //     {
// //         num=num*n;
// //     }
// //     cout<<num;
// // }




// // Sum of n natural number

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,n,sum;
//     cout<<"Enter the number to get the sum upto that number:";
//     cin>>n;
//     sum=0;

//     for(i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum;
// }


// Sum of n^2 natural number

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,n,sum;
//     cout<<"Enter the number to get the sum upto that number:";
//     cin>>n;
//     sum=0;

//     for(i=1;i<=n;i++)
//     {
//         sum=sum+i*i;
//     }
// //     cout<<sum;
// // }



// // Factorial of a number

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int i,n,fact=1;
// //     cout<<"Enter the number for calculating factorial of that number:";
// //     cin>>n;

// //     for(i=1;i<=n;i++)
// //     {
// //         fact=fact*i;
// //     }
// //     cout<<fact;

// // }



// // Q.WHY THE HIGER VALUE NUMBER LEADS TP GENERATE 0 FACTORIAL. eg 50!=0



// // PRIME NUMBER

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     cout<<"Enter the number to check whether the number is prime or not:";
//     cin>>n;

//     if(n<2)
//     {
//         cout<<"Not a prime number:";
//         return 0;
//     }
//     else 
//     {
//         for(i=2;i<n;i=i+1)
//         {
//             if(n%i==0)
//             {
//                 cout<<"not a prime number";
//                 return 0;
//             }
            
//         }
//         cout<<"Prime number";
//         return 0;
//     }


// }


// FIBONACCI SERIES

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    long long firstTerm = 0, secondTerm = 1, nextTerm;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 1; i <= n; ++i) {
        if (i == 1)
            cout << firstTerm << " ";
        else if (i == 2)
            cout << secondTerm << " ";
        else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
            cout << nextTerm << " ";
        }
    }

    cout << endl;

    return 0;
}





// HOMEWORK 


// Day 5/180: For Loop in advance

// Print number from 280 to 250 with the help of for loop.
// Print char from ‘A’ to ‘Z’ with the help of a for loop.
// Print char from ‘Z’ to ‘A’ with the help of a for loop.
// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
// Print Sum of square of first n natural number.
// Print Sum of cube of first n natural number
// Print n’th Fibonacci number.


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1. Print numbers from 280 to 250 with a for loop.
    cout << "Numbers from 280 to 250: ";
    for (int i = 280; i >= 250; i--) {
        cout << i << " ";
    }
    cout << endl;

    // 2. Print characters from 'A' to 'Z' with a for loop.
    cout << "Characters from 'A' to 'Z': ";
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }
    cout << endl;

    // 3. Print characters from 'Z' to 'A' with a for loop.
    cout << "Characters from 'Z' to 'A': ";
    for (char ch = 'Z'; ch >= 'A'; ch--) {
        cout << ch << " ";
    }
    cout << endl;

    // 4. Print numbers from 220 to 730 following an Arithmetic Progression (AP).
    int firstNumber = 220;
    int commonDifference = 7;
    int lastNumber = 730;
    cout << "Numbers in the AP: ";
    for (int i = firstNumber; i <= lastNumber; i += commonDifference) {
        cout << i << " ";
    }
    cout << endl;

    // 5. Print the sum of the squares of the first n natural numbers.
    int n = 5; // Change this value for a different 'n'.
    int sumOfSquares = 0;
    for (int i = 1; i <= n; i++) {
        sumOfSquares += pow(i, 2);
    }
    cout << "Sum of squares of first " << n << " natural numbers: " << sumOfSquares << endl;

    // 6. Print the sum of the cubes of the first n natural numbers.
    int sumOfCubes = 0;
    for (int i = 1; i <= n; i++) {
        sumOfCubes += pow(i, 3);
    }
    cout << "Sum of cubes of first " << n << " natural numbers: " << sumOfCubes << endl;

    // 7. Print the nth Fibonacci number.
    int fibN = 10; // Change this value for a different 'n'.
    int a = 0, b = 1, fib;
    for (int i = 2; i <= fibN; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    cout << "The " << fibN << "th Fibonacci number is: " << fib << endl;

    return 0;
}









































