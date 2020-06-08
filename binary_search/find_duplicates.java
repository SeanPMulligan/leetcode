/*
Find The Duplicates
Given two sorted arrays arr1 and arr2 of passport numbers, implement a function findDuplicates
that returns an array of all passport numbers that are both in arr1 and arr2. Note that
the output array should be sorted in an ascending order.

Let N and M be the lengths of arr1 and arr2, respectively. Solve for two cases and analyze the
time & space complexities of your solutions: M ≈ N - the array lengths are approximately the
same M ≫ N - arr2 is much bigger than arr1.

Example:

input:  arr1 = [1, 2, 3, 5, 6, 7], arr2 = [3, 6, 7, 8, 20]

output: [3, 6, 7] since only these three values are both in arr1 and arr2
*/

import java.io.*;
import java.util.*;

class Solution {
  static int[] findDuplicates(int[] arr1, int[] arr2) {
    int[] result = {};
    int len = arr2.length - 1;
    
    if (arr1.length == 0 || arr2.length == 0) {
      return result;
    }
    
    for (int i = 0; i < arr1.length; i++) {
      if (i != 0 && arr1[i] == arr1[i-1]) {
        continue;
      }

      int findNum = binarySearch(arr2, 0, len, arr1[i]);
      
      if (findNum != -1) {
        int n = result.length;
        int newarr[] = new int[n + 1]; 
        
        for (int j = 0; j < n; j++) {
          newarr[j] = result[j];
        }
        
        newarr[n] = arr1[i];
        result = newarr;
      } 
    }

    System.out.println(Arrays.toString(result));
    return result;
  }
  
  static int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) { 
      int mid = l + (r - l) / 2; 
    
      // If the element is present at the 
      // middle itself 
      if (arr[mid] == x)  {
        return mid; 
      }
    
      // If element is smaller than mid, then 
      // it can only be present in left subarray 
      if (arr[mid] > x)  {
        return binarySearch(arr, l, mid - 1, x); 
      }
    
      // Else the element can only be present 
      // in right subarray 
      return binarySearch(arr, mid + 1, r, x); 
    } 
    
    // We reach here when element is not present 
    // in array 
    return -1; 
  } 

  public static void main(String[] args) {
    // int[] arr1 = {1, 2, 3, 5, 6, 7};
    int[] arr1 = {1, 2, 3, 5, 6, 7};
    int[] arr2 = {3, 6, 7, 8, 20};
    
    findDuplicates(arr1, arr2);
  }
}
