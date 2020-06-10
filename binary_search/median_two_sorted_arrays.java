/*
 https://leetcode.com/problems/median-of-two-sorted-arrays/

There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5
*/

class Solution {
  public double findMedianSortedArrays(int[] nums1, int[] nums2) {
    double median = 0.0;
    int[] mergedArray = mergeSort(nums1, nums2);
    
    int mid = (mergedArray.length - 1) / 2;
    
    if (mergedArray.length % 2 == 0) {
      median = (mergedArray[mid] + mergedArray[mid+1]) / 2.0;
    } else {
      median = (double)mergedArray[mid];
    }
    
    return median;
  }
  
  static int[] mergeSort(int[] arr1, int[] arr2) {
    int[] mergedArray = new int[arr1.length + arr2.length];
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < arr1.length && j < arr2.length) {
      if (arr1[i] < arr2[j]) {
        mergedArray[k++] = arr1[i++];
      } else {
        mergedArray[k++] = arr2[j++];
      }
    }
    
    while (i < arr1.length) {
      mergedArray[k++] = arr1[i++];
    }
    
    while (j < arr2.length) {
      mergedArray[k++] = arr2[j++];
    }
    
    return mergedArray;
  }
}
