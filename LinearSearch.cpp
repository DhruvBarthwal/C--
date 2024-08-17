// #include <iostream>
// using namespace std;
// int search(int arr[], int size, int key){
//     for(int i=0;i<size ;i++){
//         if(key == arr[i]){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int num[6]={2,5,7,1,9,0};
//     int key;
//     cout<<"Enter the number u want: "<<endl;
//     cin>>key;
//     bool found = search(num,6,key);
//     if(found){
//         cout<<"Yes the number is present"<<endl;
//     }
//     else{
//         cout<<"Absent"<<endl;
//     }
// }

//Reverse of an Array
// #include <iostream>
// using namespace std;

// int reverseArray(int arr[],int size){
//           int start = 0;
//           int end = size-1;
//           while(start<=end){
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//           };
//     }
// int printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[6] = {2,4,6,7,8,9};
//     reverseArray(arr,6);
//     printArray(arr,6);   
// }

//Alternate swap in array
// #include <iostream>
// using namespace std;

// int printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int swapArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//          if(i+1 != size){
//             swap(arr[i],arr[i+1]);
//              i++;
//     }
//     }
// }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     swapArray(arr,6);
//     printArray(arr,6);
// }

//
// #include <iostream>
// using namespace std;

// int uniqueItem(int arr[],int size){
//     int ans= 0;
//     for(int i=0;i<size;i++){
//         ans =ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int arr[5]= {6,2,3,3,2};
//     cout<<uniqueItem(arr,5);
// }

//Duplicate of an array
// #include <iostream>
// using namespace std;
// int duplicateItem(int arr[], int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     for(int i=1;i<size;i++){
//         ans=ans^i;
//     }
//     return ans;
// }
// int main(){
//     int arr[7]={1,2,3,4,5,6,3};
//     cout<<duplicateItem(arr,7);
// }

// Sorting two numbers
// #include <iostream>
// using namespace std;
// int sortArray(int arr[],int size){
//     int left = 0;
//     int right = size-1;
//     while(left<right){   
//         while( left < right && arr[left]==0 ){
//         left++;
//     }
//     while( left < right && arr[right]==1){
//         right--;
//     }
//     while(arr[left]==1 && arr[right]==0 && left<right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }}
 
// }
// int printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[7]={1,0,0,1,1,0,0};
//     sortArray(arr,7);
//     printArray(arr,7);
// }

// Sorting three numbers
#include <iostream>
using namespace std;
int sortArray(int arr[],int size){
    int start = 0;
    int mid = 0;
    int end = size-1;
    while(mid<end){
        while(arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        while(arr[mid]==1){
            mid++;
        }
        while(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}
int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={0,1,0,2,2,1,0,2,1,0};
    sortArray(arr,10);
    printArray(arr,10);

}

  