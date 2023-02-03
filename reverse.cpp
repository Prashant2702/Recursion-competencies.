//Print String in Reverse.
#include<iostream>
using namespace std;

void reverse(string s){

    if(s.length()==0){
        return;
    }
    //Recursive case.
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){
reverse("binod");
    return 0;
}