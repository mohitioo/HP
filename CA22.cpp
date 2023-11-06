#include<iostream>
using namespace std;
int main()
{


// ARRAY 


//     int arr[5]={1,2,3,4,5}; //array declare 1st
//     for( int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//    return 0;

// int arr[]={1,2,3,4,5,6}; //array declare 2nd
//     for( int i=0;i<6;i++)
//     cout<<arr[i]<<" ";

//    return 0;


// int arr[5]={1,2,3}; //array declare 3rd
//     for( int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//    return 0;

// int arr[5]={0}; //array declare 4th
//     for( int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//    return 0;


// int arr[5]={1}; //array declare 4th
//     for( int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//    return 0;

// int arr[5]; //array declare 5th
//    cout<<"Enter the array value:";  
   
//     for( int i=0;i<5;i++)
//     cin>>arr[i];

//     for( int i=0;i<5;i++)
//     cout<<arr[i]<<" ";

//    return 0;

// how wo find the total size of array 

// int arr[5]={1,2,3,4,5};
// // int a;  
// // char a;

// cout<<sizeof(arr);  //mentione bracket with concern ,without proper bravces also it will give error.


    
// How to find the number of elements in an array witout knowing the total elements
// int arr[5]={1,2,3,4,5};


// cout<<sizeof(arr)/sizeof(arr[0]); 





// // HOW TO FIND THE MINUMUM VALUE IN THE ARRAY.

// int arr[5]={1,23,3,4,5};
// int ans=INT_MAX;

// for( int i=0;i<5;i++)
// {
//     if(arr[i]<ans)
//     ans=arr[i];
// }
// cout<<ans;
// return 0;


// HOW TO FIND THE MAXIMUM VALUE IN THE ARRAY.

int arr[5]={1,23,3,4,5};
int ans=INT_MIN;

for( int i=0;i<5;i++)
{
    if(arr[i]>ans)
    ans=arr[i];
}
cout<<ans;
return 0;

}





// HOMEWORK  

 Day 22/180 Introduction to Arrays in c++


1: Take 20 elements from user input and find its sum with the help of an array.

2: Calculate the average of elements in an array of size 18.

3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

5: Find the second largest element in an array of unique elements of size n. Where n>3.

6: Find the third smallest element in an array of unique elements size n. Where n>3.

7: What is Byte addressable?


1.#include <iostream>
using namespace std;

int main() {
    const int size = 20;
    int arr[size];
    int sum = 0;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum << endl;
    
    return 0;
}


2.#include <iostream>
using namespace std;

int main() {
    const int size = 18;
    int arr[size];
    int sum = 0;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;
    cout << "Average of elements: " << average << endl;

    return 0;
}


3.#include <iostream>
using namespace std;

int main() {
    int size, target;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> target;

    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}


4.#include <iostream>
using namespace std;

int main() {
    char charArray[26];

    for (int i = 0; i < 26; i++) {
        charArray[i] = 'a' + i;
    }

    cout << "Array of characters: ";
    for (int i = 0; i < 26; i++) {
        cout << charArray[i] << " ";
    }
    cout << endl;

    return 0;
}


5.#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 4) {
        cout << "Array size must be greater than or equal to 4." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " unique elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMax = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << secondMax << endl;
    }

    return 0;
}


6.#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 4) {
        cout << "Array size must be greater than or equal to 4." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " unique elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMin = INT_MAX, secondMin = INT_MAX, thirdMin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            thirdMin = secondMin;
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            thirdMin = secondMin;
            secondMin = arr[i];
        } else if (arr[i] < thirdMin && arr[i] != firstMin && arr[i] != secondMin) {
            thirdMin = arr[i];
        }
    }

    cout << "The third smallest element is: " << thirdMin << endl;

    return 0;
}


7."Byte addressable" refers to a computer's memory architecture, where each individual byte (8 bits) in memory has a unique address. In a byte-addressable system, you can directly access and manipulate individual bytes of memory using their unique addresses.

This is in contrast to bit-addressable or word-addressable systems, where the smallest addressable unit of memory may be larger than a byte (e.g., a word-addressable system might address memory in units of 16 or 32 bits).

Byte-addressable memory is the most common memory architecture in modern computers because it provides fine-grained access to memory locations, which is essential for efficiently storing and manipulating data in various data types and structures.
