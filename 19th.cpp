// #include<iostream>
// using namespace std;
// int main(){ 
// int n;
// cout<<"enter a number:";
// cin>>n;
// int count=0;
// while(n!=0){
//  n=n/10;
//     count++;
// }
// cout<<count;
// return 0;
// }
// // count number of digits in a number
// #include<iostream>
//  using namespace std;
// int main(){ 
//  int n;
//  cout<<"enter a number:";
//  cin>>n;
//  int sum=0;
//  while(n!=0){
//     int ld=n%10;
//     sum=sum+ld;
//  n=n/10;
//  }
//  cout<<sum;

//  }
//  sum of digits in a  number 
#include<iostream>
 using namespace std;
int main(){ 
 int n;
 cout<<"enter a number:";
 cin>>n;
 int product=1;
 while(n!=0){
    int ld=n%10;
    product=product*ld;
 n=n/10;
 }
 cout<<product;

 }
//  product of digits in a  number