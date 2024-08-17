//Fibonacii Numbers
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 10;
//     int a = 0;
//     int b = 1;
//     cout<<a<<" "<<b<<" ";

//     for(int i = 0; i <=n; i++){
//        int newNumber = a + b;
//        cout<<newNumber<<" ";

//        a = b;
//        b = newNumber; 
//     }
// }

//Prime Numbers
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     bool isPrime = 1;

//     for(int i = 2; i<n; i++){
//         if(n % i  == 0){
//             isPrime = 0;
//             break;
//         }
//     }
//     if(isPrime == 0){
//         cout<<"Number is not Prime";
//     }
//     else{
//         cout<<"Number is prime";
//     }
// }

//Difference of sum and product of digits
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>> n;
//     int sum = 0;
//     int product = 1;
    
//     while(n != 0){
//         int digit = n%10;
//         sum += digit;
//         product *= digit;
//         n = n/10;
//     }
//     int diff = product - sum;
//     cout<<"Diff = "<<diff;
// }

//Calculating number of 1 bits
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     int count = 0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n = n>>1;
//     }
//     cout<<count;
// }

//Decimal to Binary
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: "<<endl;
//     cin>>n;
//     int i = 0;
//     int answer = 0;
//     while(n != 0){
//         int bit = n&1;
//         answer = (bit  * (pow(10,i))) + answer ;
//         n=n>>1;
//         i++;
//     }
//     cout<<"Answer: "<<answer;
// }

// Binary to Decimal
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i = 0;
    int answer = 0;
    while(n != 0){
        int bit = n%10;
        if(bit==1){
            answer += bit * pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"Answer : "<<answer;
}