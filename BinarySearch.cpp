//Binary Search
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int key){
//     int start = 0;
//     int end = size-1;
//     int mid = (start+end)/2;
//     while(start<=end){
//         if(key==arr[mid]){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
//         mid = (start+end)/2;
//     }
//     return -1;
// }
// int main(){
//     int arr[6]={1,2,4,7,8,9};
//     cout<<"Index of the key is: "<<binarySearch(arr,7,1);
// }

//First and Last Occurence
// #include <iostream>
// using namespace std;
// int firstOcc(int arr[],int size,int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int ans =-1;
//     while(start<=end){
//         if(key==arr[mid]){
//             ans = mid;
//             end = mid-1;
//         }
//         else if(key<arr[mid]){
//             end =mid-1;
//         }
//         else if(key>arr[mid]){
//             start = mid+1;
//         }
//         mid = start +(end-start)/2;
//     }
//     return ans;
// }
// int lastOcc(int arr[],int size,int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int ans=-1;
//     while(start<=end){
//         if(key==arr[mid]){
//             ans = mid;
//             start = mid+1;
//         }
//         else if(key<arr[mid]){
//             end = mid-1;
//         }
//         else if(key>arr[mid]){
//             start = mid+1;
//         }
//         mid = start +(end-start)/2;
//     }
//     return ans;
// }
// int main(){
//     int arr[8]={1,2,2,3,4,4,4,6};
//     cout<<firstOcc(arr,8,4)<<endl;
//     cout<<lastOcc(arr,8,4);
// }

//Peak element of an Array
// #include <iostream>
// using namespace std;
// int peakElement(int arr[],int size){
//     int start = 0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start = mid+1;
//         }
//         else{
//             end =mid;
//         }
//         mid = start +(end-start)/2;
//     }
//      return start;
// }
// int main(){
//     int arr[10] = {1,2,3,4,5,6,7,5,4,3};
//     cout<<peakElement(arr,10);
// }

//Total Occurances???
// #include <iostream>
// using namespace std;
// int firstOcc(int arr[],int n,int key){
//     int s=0,e=n-1,mid=s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(key == arr[mid]){
//             mid = ans;
//             e = mid - 1;
//         }
//         else if(key<arr[mid]){
//             e = mid -1;
//         }
//         else if(key>arr[mid]){
//             s = mid+1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }
// int lastOcc(int arr[],int n,int key){
//     int s=0,e=n-1,mid=s+(e-s)/2;
//     int ans = -1;
//     while(s<=e){
//         if(key == arr[mid]){
//             mid = ans;
//             s = mid+1;
//         }
//         else if(key<arr[mid]){
//             s = mid + 1;
//         }
//         else if(key>arr[mid]){
//             e = mid - 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }
// int totalOcc(int arr[],int n,int key){
//     int first = firstOcc(arr,n,key);
//     int last = lastOcc(arr,10,2);
//     int total = (last - first)+1;
//     return total;
// }
// int main(){
//     int arr[10] = {1,2,2,2,2,3,4,5,6,7};
//     cout<<"Total no. of Occurences: "<<totalOcc(arr,10,2);
// }

//Pivot of element
// #include <iostream>
// using namespace std;
// int pivotElement(int arr[],int size){
//     int s = 0;
//     int e = size-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return e;
// }
// int main(){
//     int arr[5] = {3,8,10,17,1};
//     cout<<"Index of Pivot is : "<<pivotElement(arr,5);
// }

//Search in Roated and Sorted Array
// #include <iostream>
// using namespace std;
// int pivotElement(int arr[],int n){
//     int s=0,e=n-1,mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return e;
// }
// int binarySearch(int arr[],int s,int e,int key){
//     int start=s,end=e,mid=start+(end-start)/2;
//     while(start<=end){
//         if(key==arr[mid]){
//             return mid;
//         }
//         else if(key<arr[mid]){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }
// int findPosition(int arr[],int n,int key){
//     int pivot = pivotElement(arr,n);
//     if(key>=pivot && key<=arr[n-1]){
//         return binarySearch(arr,pivot,n-1,key);
//     }
//     else{
//         return binarySearch(arr,0,pivot-1,key);
//     }
// }
// int main(){
//     int arr[5]={7,9,1,2,3};
//     cout<<findPosition(arr,5,2);
// }

//Square root using Binary search
// #include <iostream>
// #include <math.h> 

// using namespace std;
// int binarySearch(int n){
//     int s=0,e=n;
//     int long long mid=s+(e-s)/2;
//     int long long ans = -1;
//     while(s<=e){
//         int long long square = mid*mid;
//         if( square == n){
//             return mid;
//         }
//         else if(square < n){
//             ans = mid;
//             s = mid+1;
//         }
//         else{
//             e = mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int SquareRoot(int x){
//     return binarySearch(x);
// }
// int main(){
//     int x;
//     cout<<"Enter the number: "<<endl;
//     cin>>x;
//     cout<<SquareRoot(x);
// }

//Book Allocation
// #include <iostream>
// using namespace std;
// bool isPossible(int arr[],int n,int m,int mid){
//     int studentCount=1;
//     int pageSum=0;
//     for(int i=0;i<n;i++){
//         if(pageSum + arr[i]<=mid){
//             pageSum+=arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount>m || arr[i]>mid){
//                 return false;
//             }
//                 pageSum = arr[i];
//             }
//         }
//         return true;
//  }

// int bookAlloc(int arr[],int n,int m){
//     int s=0;
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int e=sum;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(isPossible(arr,n,m,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     int arr[4]={10,20,30,40};
//     cout<<"Minimun no. of allocations: "<<bookAlloc(arr,4,2);
// }

//Book Allocation
// #include <iostream>
// using namespace std;
// bool isPossible(int arr[],int n,int m,int mid){
//     int studentCount=1;
//     int pageSum=0;
//     for(int i=0;i<n;i++){
//         if(pageSum+arr[i]<=mid){
//             pageSum+=arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount>m || arr[i]>mid){
//                 return false;
//             }
//             pageSum=arr[i];
//         }
//     }
//     return true;
// }
// int bookAllocation(int arr[],int n,int m){
//     int s=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(isPossible(arr,n,m,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
// }
// int main(){
//     int arr[4]={10,20,30,40};
//     cout<<"The minimum no. of allocations is: "<<bookAllocation(arr,4,2);
// }

//Painter's Partition
#include <iostream>
using namespace std;
int isPossible(int arr[],int n, int m, int mid){
    int painterCount=1;
    int partitionCount=0;
    for(int i=0;i<n;i++){
        if(partitionCount + arr[i]<=mid){
            partitionCount += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > m || arr[i]>mid){
                return false;
            }
            partitionCount = arr[i]; 
        }
    }
    return true;
}
int painterPartition(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    int arr[4]={5,5,5,5};
    cout<<painterPartition(arr,4,2);
}



