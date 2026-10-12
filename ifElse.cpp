#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"you are an adult";
    }else if(age<18){
        cout<<"not an adult";
    }else{
        cout<<"age is invalid";
    }
    return 0;
}