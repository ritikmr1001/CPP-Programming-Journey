// #include<iostream>
// using namespace std;
// int main(){
// int arr[5];
// cout<<"enter array elements:";
// for(int i=0;i<=4;i++){
//     cin>>arr[i];
// }
//  for (int i=0;i<=4;i++){
//     cout<<arr[i]<<" ";
//  }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr [] ={ 12,3,4,5,6,7,3,6};
//   int n= sizeof(arr)/4;
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//         sum+= arr[i];
//     }
//     cout<<sum;
//     }
    // sum of array elements 




// #include<iostream>
// using namespace std;
// int main(){
//     int arr [] ={ 12,3,4,5,6,7,3,6};
//      int n =sizeof(arr)/4;
//      int mx= arr[0];
//      for(int i=1;i<n;i++){
//         if(arr[i]>mx) mx= arr[i];
//      }
//      cout<<mx;
// }
// maxm of no.s of array



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> squares;
//     for (int i = 1; i <= n; ++i) {
//         squares.push_back(i * i);
//     }

//     for (int square : squares) {
//         cout << square << " ";
//     }
//     cout << '\n';

//     return 0;
// }

// squares of n natural number (gpt code)




// #include<iostream>
// using namespace std;
// int main(){
//     int arr [] ={ 12,3,4,5,6,7,3,6};
//      int n =sizeof(arr)/4;
//      int mx= INT_MIN; 
//      for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
//     }
//      int smx = INT_MIN;
//      for (int i=0;i<n;i++){
//         if(arr[i]!=mx) smx=max(smx,arr[i]);
       
//      }
//      cout<<smx;
// }



#include<iostream>
using namespace std;
int main(){
int a[]={12,6,7,8,5,4,3}; 
int n = sizeof(a)/4;
int b[n];
for (int i=0;i<n;i++){
    int j= n-1-i;
    b[i]=a[j];
}
for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
}
}
    // reverse order of array





