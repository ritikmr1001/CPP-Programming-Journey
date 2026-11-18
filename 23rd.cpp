// #include<iostream>
//  using namespace std;
//  int fact (int x){
//     int f=1;
//     for(int i=1; i<=x;i++){
//         f *=i;
//     }
//     return f;
//  }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int r;
//     cout<<"enter r:";
//     cin>>r;
//     int a =fact(n);
//     int b= fact (r);
//     int c = fact (n-r);
//     cout<<a/(b*c);

// }

//  combination formula using functions

// #include<iostream>
//  using namespace std;
//  int fact (int x){
//     int f=1;
//     for(int i=1; i<=x;i++){
//         f *=i;
//     }
//     return f;
//  }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int r;
//     cout<<"enter r:";
//     cin>>r;
//     int a =fact(n);
//     int b = fact (n-r);
//     cout<<a/(b);
    
// }

// permutation formula using functions



// //  PASCAL TRIANGLE basically based on ncr (combination funda)
// #include<iostream>
//  using namespace std;
//  int fact(int x){
//     int f =1;
//     for (int i =1;i<=x;i++){
//         f*=i;
//     }
//     return f;
//  }
//  int ncr(int n,int r ){
//     return fact(n)/(fact(r)*fact(n-r));
//     // above line is just the sorted form of combination function used in 1st prgrm
//  }
//  int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     for (int i=0;i<=n;i++) {
//         for (int j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
//     }