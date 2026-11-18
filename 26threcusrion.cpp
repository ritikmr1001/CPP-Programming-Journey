// #include<iostream>
// using namespace std;
// void print(int n){
//     if (n==0) return;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     print(n);

// }
// recursion call to print n numbers 



// #include <iostream>
// using namespace std;

// void printSum(int i, int sum, int n) {
//     if (i > n) {
//         cout << sum << '\n';
//         return;
//     }

//     printSum(i + 1, sum + i, n);
// }

// int main() {
//     int n;
//     cin >> n;

//     printSum(1, 0, n);
//     return 0;
// }
// print sum from 1 to n  


// #include<iostream>
// using namespace std;
// int fact (int n){
//     if(n==0 || n==1) return 1;
//     return n*fact (n-1);
// }
// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;
//     cout<<fact(n);
// }
// factorial using recursion



// #include<iostream>
// using namespace std;
//  int power(int a, int b){
//     if (b==0) return 1;
//     return a* power (a,b-1);
//  }
//  int main(){
//     int a;
//     cout<<"enter base:";
//     cin>>a;
//     int b;
//     cout<<"enter power:";
//     cin>>b;
//     cout<<power(a,b);
//  }
//  power base finder usiong recursion 




#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<fibo(n);

}
// fibbonacci series using recursion 

// think about logarithmic approach using recusrionnn