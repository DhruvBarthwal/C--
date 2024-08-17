// #include <iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     cout<<arr[3]<<endl;
//     cout<<arr[0]<<endl;
//     for(int i = 0; i<6; i++){
//         cout<<arr[i]<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     cout<<"Printing array"<<endl;
//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     };
// };
// int main(){
//     int third[10] = {2,5,6,7};
//     printArray(third,10);
//     cout<<endl;
//     int fourth[10]= {3,5,9,8};
//     printArray(fourth,10);
// }

//Max and Min Values
// #include <iostream>
// using namespace std;

// int printMax(int arr[],int size){
//     int maxi = INT8_MIN;
//     for(int i=0; i<size;i++){
//         maxi = max(maxi,arr[i]);
//     };
//     return maxi;
// };
// int printMin(int arr[],int size){
//     int mini = INT8_MAX;
//     for(int i=0; i<size;i++){
//         mini= min(mini,arr[i]);
//     };
//     return mini;
// };
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     int third[100];
//     for(int i=0; i<n;i++){
//         cin>>third[i];
//     }
//     cout<<"Max value is: "<<printMax(third,n)<<endl;
//     cout<<"Min value is: "<<printMin(third,n)<<endl;
// }

//Print sum of values of Array
// #include <iostream>
// using namespace std;

// int SumArray(int arr[],int size){
//     int sum = 0;
//     for(int i=0;i<size;i++){
//         int val = arr[i];
//         sum += val;
//     }
//     return sum;
// }
// int main(){
//     int num[3]={1,6,7};
//     cout<<"SUM: "<<SumArray(num,3)<<endl;
// }

