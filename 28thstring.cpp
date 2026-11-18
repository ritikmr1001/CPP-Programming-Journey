// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"enter a string:";
//     // cin>>s;
//     getline(cin,s);
//     cout<<s;
// }
// STL- standard template library
// push_back $ append used to add charracters or add an string 
// pop_back  used to remove last character
// clear()   used to clear out a string 
// 
// + operator 
// #include<iostream>
// using namespace std;
// int main(){
// string s= "elephant";
// cout<<s<<" "<<s.length()<<endl;
// //  s = s+"yadav";
//  s = "garg"+s;
//  cout<<s<<" "<<s.length()<<endl;
// }

#include<iostream>
using namespace std;
int main(){
string s= "elephanta";
cout<<s<<endl;
int n=s.length();
int i=0;
int j =n/2 -1;
//  if we do n only then whole string will be reversed 
while(i<j){
    char temp = s[i];
    s[i]=s[j];
    s[j]= temp;
    i++;
    j--;
}
cout<<s<<endl;
}