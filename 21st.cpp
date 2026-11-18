//  #include<iostream>
//  using namespace std;
// int main(){ 
//  int n;
// cout<<"enter the numbeer of rows:";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//     }
// }
// to print square of stars
// // // #include<iostream>
// // //  using namespace std;
// // // int main(){ 
// // //  int n;
// // // cout<<"enter the numbeer of rows:";
// // // cin>>n;
// // // for(int i=1; i<=n; i++){
// // //     for(int j=1;j<=n;j++){
// // //         cout<<j<<" ";
// // //     }
// // //     cout<<endl;
// // //     }
// // // }
// // // pattern of numbers 1234 



// // // #include<iostream>
// // //  using namespace std;
// // // int main(){ 
// // //  int n;
// // // cout<<"enter the numbeer of rows:";
// // // cin>>n;
// // // for(int i=1; i<=n; i++){
// // //     for(int j=1;j<=n;j++){
// // //         cout<<i<<" ";
// // //     }
// // //     cout<<endl;
// // //     }
// // // }
// // // pattern of numbers 11 22 33 


// // // #include<iostream>
// // //  using namespace std;
// // // int main(){ 
// // //  int n;
// // // cout<<"enter the number of rows:";
// // // cin>>n;
// // // for(int i=1; i<=n; i++){
// // //     for(int j=1;j<=n;j++){
// // //         cout<<(char)(j+64)<<" ";
// // //     }
// // //     cout<<endl;
// // //     }
// // // }
// // // ABCD PRINT PATTERN



// #include<iostream>
//  using namespace std;
// int main(){ 
//  int n;
// cout<<"enter the number of rows:";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// }
//  printt pattern of triangles

// #include<iostream>
//   using namespace std;
//  int main(){ 
//   int n;
// cout<<"enter the number of rows:";
// cin>>n;
// for (int i=1;i<=n;i++){
//    for (int j=1;j<=i;j++){
// if(i%2!=0){
//        cout<<j<<" ";
// } else {
//     cout<<char (j+64);
// }
// }
//        cout<<endl;
// }

//     }
//  cout<<(char)(j+64)<<" ";}  main error
//   question



// #include<iostream>
//   using namespace std;
//  int main(){ 
//   int n;
// cout<<"enter the number of rows:";
//  cin>>n;
//  for(int i=1;i<=n;i++ ){
//     for(int j=1;j<=n-i+1;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
//     }
//  }
//  star triaNGLE FLIPPED 



 
//  #include<iostream>
//  using namespace std;
//  int main(){ 
// int n;
// cout<<"enter the number of rows:";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//         cout<<2*j-1<<" ";
//     }
//     cout<<endl;
// }
//  }
//  odd number triangle pattern



//  #include<iostream>
//  using namespace std;
// int main(){  int n;
// cout<<"enter the number of rows:";
//  cin>>n;
//  int a=1;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//        cout<<a<<" ";
//        a++;
//    }
//     cout<<endl;
//  }
//  }
//  number seriees triangle



//  #include<iostream>
//  using namespace std;
//  int main(){ 
//  int n;
// cout<<"enter the number of rows:";
//  cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=i;j++){
//         if((i+j)%2==0) cout<<1<<" ";
//         else cout<<0<<" ";
      
//    }
//     cout<<endl;
// }
// }
// zero one triangle pattern



// #include<iostream>
//  using namespace std;
//  int main(){ 
//  int n;
// cout<<"enter the number of rows:";
//  cin>>n;
//  int mid = n/2 +1;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//         if (i==mid || j==mid) cout<<"* " ;
//         else cout<<"  ";
//     }
//     cout<<endl;
// }
//  }
//   plus pattern printing


// #include<iostream>
//  using namespace std;
// int main(){ 
//  int n;
// cout<<"enter the number of rows:";
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n-i;j++){
//         cout<<"  ";
//     }
//     for (int j=1;j<=i;j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// }
// right side triangle printing



#include<iostream>
 using namespace std;
int main(){ 
 int n;
cout<<"enter the number of rows:";
cin>>n;
int a=1;

for (int i=1;i<=n;i++){
    for (int j=1;j<=n-i;j++){
        cout<<"  ";
    }
    for (int j=1;j<=i;j++){
        cout<<a<< " ";  
        //  (char)(j+64)<<" ";
        a++;
    }
    cout<<endl;
}
}
//  practice questions`