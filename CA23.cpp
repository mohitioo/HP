// // // // Search an Element in an array



// // // // Given an integer array and another integer element. The task is to find if the given element is present in array or not.

// // // // Example 1:

// // // // Input:
// // // // n = 4
// // // // arr[] = {1,2,3,4}
// // // // x = 3
// // // // Output: 2
// // // // Explanation: There is one test case 
// // // // with array as {1, 2, 3 4} and element 
// // // // to be searched as 3.  Since 3 is 
// // // // present at index 2, output is 2.
// // // // Example 2:

// // // // Input:
// // // // n = 5
// // // // arr[] = {1,2,3,4,5}
// // // // x = 5
// // // // Output: 4
// // // // Explanation: For array elements 
// // // // {1,2,3,4,5} element to be searched 
// // // // is 5 and it is at index 4. So, the 
// // // // output is 4.
// // // // Your Task:
// // // // The task is to complete the function search() which takes the array arr[], its size N and the element X as inputs and returns the index of first occurrence of X in the given array. If the element X does not exist in the array, the function should return -1.

// // // // Expected Time Complexity: O(n).
// // // // Expected Auxiliary Space: O(1). 

// // // // Constraints:
// // // // 1 <= n <= 106
// // // // 0 <= arr[i] <= 106
// // // // 0 <= x <= 105

// // // // SOLUTIONS




// // // // class Solution{
// // // //     public:
// // // //     // Function to search x in arr
// // // //     // arr: input array
// // // //     // X: element to be searched for
// // // //     int search(int arr[], int N, int X)
// // // //     {
        
// // // //      for( int i=0;i<N;i++)
// // // //      {
// // // //          if(arr[i]==X)
// // // //         //  index=i;
// // // //         return i;
// // // //         //  break;
// // // //      }
// // // //     //  cout<<-1;
// // // //     return -1;
// // // //     }

// // // // };








// // // // REVERSE ARRAY




// // // // SECOND LARGEST

// // // Given an array Arr of size N, print second largest distinct element from an array.

// // // Example 1:

// // // Input: 
// // // N = 6
// // // Arr[] = {12, 35, 1, 10, 34, 1}
// // // Output: 34
// // // Explanation: The largest element of the 
// // // array is 35 and the second largest element
// // // is 34.
// // // Example 2:

// // // Input: 
// // // N = 3
// // // Arr[] = {10, 5, 10}
// // // Output: 5
// // // Explanation: The largest element of 
// // // the array is 10 and the second 
// // // largest element is 5.
// // // Your Task:
// // // You don't need to read input or print anything. Your task is to complete the function print2largest() which takes the array of integers arr and n as parameters and returns an integer denoting the answer. If 2nd largest element doesn't exist then return -1.

// // // Expected Time Complexity: O(N)
// // // Expected Auxiliary Space: O(1)

// // // Constraints:
// // // 2 ≤ N ≤ 105
// // // 1 ≤ Arri ≤ 105

// // // // SOLUTIONS


// // // //User function template for C++
// // // class Solution{
// // // public:	
// // // 	// Function returns the second
// // // 	// largest elements
// // // 	int print2largest(int arr[], int n) {
// // // 	    // code here
	    
	    
	    
	    
// // // 	    int ans=-1;
	    
// // // 	   // Largest Element
	    
// // // 	    for( int i=0;i<n;i++)
// // // 	    {
// // // 	        if(arr[i]>ans)
// // // 	        ans=arr[i];
// // // 	    }
	    
// // // 	   // Ṣecond largest
	   
// // // 	   int second= -1;
// // // 	   for(int i=0;i<n;i++)
// // // 	   {
// // // 	       if(arr[i]!=ans)
// // // 	       second= max(second,arr[i]);
// // // 	   }
// // // 	   return second;
// // // 	}
	
// // // };





// // // // MISSING NUMBER


// // // Missing number in array
// // // EasyAccuracy: 29.59%Submissions: 918K+Points: 2
// // // We've got offers as great as this problem! Explore Geek Week 2023

// // // banner
// // // Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// // // Example 1:

// // // Input:
// // // N = 5
// // // A[] = {1,2,3,5}
// // // Output: 4
// // // Example 2:

// // // Input:
// // // N = 10
// // // A[] = {6,1,2,8,3,4,7,10,5}
// // // Output: 9

// // // Your Task :
// // // You don't need to read input or print anything. Complete the function MissingNumber() that takes array and N as input  parameters and returns the value of the missing number.


// // // Expected Time Complexity: O(N)
// // // Expected Auxiliary Space: O(1)


// // // Constraints:
// // // 1 ≤ N ≤ 106
// // // 1 ≤ A[i] ≤ 106

// // // // SOLUTION


// // // //{ Driver Code Starts
// // // // Initial template for C++

// // // #include <bits/stdc++.h>
// // // using namespace std;




// // // // } Driver Code Ends
// // // // User function template for C++

// // // class Solution{
// // //   public:
// // //     int missingNumber(vector<int>& array, int n) {
// // //         // Your code goes here
        
// // //         // SUM OF ALL ELEMENTS IN AN ARRAY
// // //         int sum=0;
// // //         for(int i=0;i<=n-1;i++)
        
// // //             sum+=array[i];
        
// // //         // SUM OF N NUMBER
        
// // //         int ans=n*(n+1)/2;
        
// // //         return ans-sum;
// // //     }
// // // };






// // // FIBONCCI SERIES


// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// // 	// Fibonacci series

// // 	int n;
// // 	cout<<"Enter the number upto then you want the series number:";
// // 	cin>>n;
// // 	int arr[1000];  //Here the arr[n] is not taken becuase it not a best practice,because it can generate errors in the code.
    
// // 	// First element=0;
// // 	// Second element=1;

// // 	arr[0]=0;
// // 	arr[1]=1;

// // 	for( int i=2;i<=n-1;i++)
// // 	arr[i]=arr[i-1]+arr[i-2];

// //     cout<<arr[n-1];
// // }




// Cyclically rotate an array by one
// BasicAccuracy: 69.6%Submissions: 235K+Points: 1
// We've got offers as great as this problem! Explore Geek Week 2023

// banner
// Given an array, rotate the array by one position in clock-wise direction.
 

// Example 1:

// Input:
// N = 5
// A[] = {1, 2, 3, 4, 5}
// Output:
// 5 1 2 3 4
 

// Example 2:

// Input:
// N = 8
// A[] = {9, 8, 7, 6, 4, 2, 1, 3}
// Output:
// 3 9 8 7 6 4 2 1
 

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function rotate() which takes the array A[] and its size N as inputs and modify the array in place.

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1<=N<=105
// 0<=a[i]<=105


// // SOLUTION

// //User function Template for C++

// void rotate(int arr[], int n)
// {
//     int last=arr[n-1];
    
//     for( int i=n-1;i>=0;i--)
//     arr[i+1]=arr[i];
    
//     arr[0]=last;
    
// }


// // DRIVER CLASS

// //{ Driver Code Starts
// //Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;
// void rotate(int arr[], int n);

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n;
//         scanf("%d",&n);
//         int a[n] , i;
//         for(i=0;i<n;i++)
//         scanf("%d",&a[i]);
//         rotate(a, n);
//         for (i = 0; i < n; i++)
//             printf("%d ", a[i]);
//         printf("\n");
//     }
//         return 0;
// }

// // } Driver Code Ends





// Difference between pointer and array,even though their notation is almost same.
#include<iostream>
using namespace std;

void fun(int a[],int n)
{
	cout<<sizeof(a)<<endl;
	for( int i=0;i<n;i++)
	cout<<a[i]<<" ";

}

int main()
{
	int arr[5]={1,2,3,4,5};
	cout<<sizeof(arr)<<endl;
	fun(arr,5);

}