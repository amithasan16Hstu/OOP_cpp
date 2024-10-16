#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz_cheak,sz_set;
    cin>>sz_cheak;
    int cheak[sz_cheak];
    for(int i = 0;i<sz_cheak;i++) cin>> cheak[i];
    cin>>sz_set;
    int set[sz_set];
    for(int i = 0;i<sz_set;i++) cin>> set[i];
    sort(cheak,cheak+sz_cheak); // O(n*log(n))
    sort(set,set+sz_set);  // O(n*log(n))

    int j = 0;
    if(sz_cheak>sz_set) cout<<"NO"<<endl;
    else
    {
        
        for(int i = 0;i<sz_set;i++) //O(n)
        {
            
            if(cheak[j] == set [i]) 
            {
                j++;
            }
            
        }
    }
    if(j == sz_cheak) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
    
    //time complexity: n + n*log(n) = O(n*log(n))

}


























































// // C++ program to find whether an array
// // is subset of another array
// #include <bits/stdc++.h>
// using namespace std;

// /* Function prototypes */
// void quickSort(int* arr, int si, int ei);
// int binarySearch(int arr[], int low, int high, int x);

// /* Return 1 if arr2[] is a subset of arr1[] */
// bool isSubset(int arr1[], int arr2[], int m, int n)
// {
// 	int i = 0;

// 	quickSort(arr1, 0, m - 1);
// 	for (i = 0; i < n; i++) {
// 		if (binarySearch(arr1, 0, m - 1, arr2[i]) == -1)
// 			return 0;
// 	}

// 	/* If we reach here then all elements
// 	of arr2[] are present in arr1[] */
// 	return 1;
// }

// /* FOLLOWING FUNCTIONS ARE ONLY FOR
// 	SEARCHING AND SORTING PURPOSE */
// /* Standard Binary Search function*/
// int binarySearch(int arr[], int low, int high, int x)
// {
// 	if (high >= low) {
// 		/*low + (high - low)/2;*/
// 		int mid = (low + high) / 2;

// 		/* Check if arr[mid] is the first
// 		occurrence of x. arr[mid] is first
// 		occurrence if x is one of the following
// 		is true:
// 		(i) mid == 0 and arr[mid] == x
// 		(ii) arr[mid-1] < x and arr[mid] == x */
// 		if ((mid == 0 || x > arr[mid - 1])
// 			&& (arr[mid] == x))
// 			return mid;
// 		else if (x > arr[mid])
// 			return binarySearch(arr, (mid + 1), high, x);
// 		else
// 			return binarySearch(arr, low, (mid - 1), x);
// 	}
// 	return -1;
// }

// void exchange(int* a, int* b)
// {
// 	int temp;
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// int partition(int A[], int si, int ei)
// {
// 	int x = A[ei];
// 	int i = (si - 1);
// 	int j;

// 	for (j = si; j <= ei - 1; j++) {
// 		if (A[j] <= x) {
// 			i++;
// 			exchange(&A[i], &A[j]);
// 		}
// 	}
// 	exchange(&A[i + 1], &A[ei]);
// 	return (i + 1);
// }

// /* Implementation of Quick Sort
// A[] --> Array to be sorted
// si --> Starting index
// ei --> Ending index
// */
// void quickSort(int A[], int si, int ei)
// {
// 	int pi; /* Partitioning index */
// 	if (si < ei) {
// 		pi = partition(A, si, ei);
// 		quickSort(A, si, pi - 1);
// 		quickSort(A, pi + 1, ei);
// 	}
// }

// /*Driver code */
// int main()
// {
// 	int arr1[] = { 11, 1, 13, 21, 3, 7 };
// 	int arr2[] = { 11, 3, 7, 1 };

// 	int m = sizeof(arr1) / sizeof(arr1[0]);
// 	int n = sizeof(arr2) / sizeof(arr2[0]);

// 	if (isSubset(arr1, arr2, m, n))
// 		cout << "arr2[] is subset of arr1[] ";
// 	else
// 		cout << "arr2[] is not a subset of arr1[] ";

// 	return 0;
// }

// // This code is contributed by Shivi_Aggarwal
