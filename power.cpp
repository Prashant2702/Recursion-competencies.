//Objective: To calculate pth power of n i.e. np
#include<iostream>
using namespace std;

int power(int n,int p){

    if(p==0){

        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}

int main(){
int n,p;
cin>>n>>p;

cout<<power(n,p)<<endl; 
    return 0;
}