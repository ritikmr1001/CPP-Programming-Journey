 #include<iostream>
using namespace std;
int  main(){

    float profit, percentage, cp;
    cout<<"Enter the cost price of the item: ";
    cin>>cp;
    float sp;
    cout<<"Enter the selling price of the item: ";
    cin>>sp;
    if(sp > cp){
        float profit = sp - cp;
        cout<<"profit " <<profit<<endl;float percentage = (profit / cp) * 100;
        cout<<"profit =  "<<profit<<endl;
        cout<<"profit percentage ="<<percentage<<endl;
    }
    else if(sp < cp){
        float loss = cp - sp;
        cout<<"loss " <<loss<<endl;
        float lossPercentage = (loss / cp) * 100;
        cout<<"loss percentage ="<<lossPercentage<<endl;
    }
    else{   
        cout<<"no profit no loss ";
    }
}
7th
