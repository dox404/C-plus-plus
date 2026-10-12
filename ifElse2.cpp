#include<bits/stdc++.h>
using namespace std;
// cgrade calculator
int main(){
    float marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks<=100 && marks>=90){
        cout<<"Grade A";
    }else if(marks<90 && marks>=80){
        cout<<"Grade B";
    }else if(marks<80 && marks>=70){
    cout<<"Grade  C+";
    }else if(marks<70 && marks>=60){
        cout<< "grade C";
    }
    

}