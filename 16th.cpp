#include<iostream>
using namespace std;
int  main(){   
    int n;
    cout<<"enter a number:";
    cin>>n;
    bool flag= true;
    for(int i=2 ;i<=n/2;i++){
        if (n%i==0){
            flag = false;
            break;
        }
    }
    if (n==1)
            cout<<"Neither prime nor composite";
            else if (flag==true) cout<<"prime number";
            else cout<<"composite number";
        }
        
    // composite or prime number
    