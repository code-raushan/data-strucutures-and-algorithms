#include <iostream>

using namespace std;

int main(){
    int a = 4;
    // basic if else
    if(a<3){
        cout<<"It is smaller value"<<endl;
    }else if(a>=4){
        cout<<"It is greater value"<<endl;
    }else{
        cout<<"can't say"<<endl;
    }
    // ternary operator

    a>5?cout<<"It is greater value"<<endl:cout<<"It is smaller"<<endl;

    if(a%2==0){
        cout<<a<<" is an even number"<<endl;
    }else{
        cout<<"It is an odd number"<<endl;
    }


    // printing even numbers between 1 to 100;
    int x = 100;
    for(int i = 1; i<=x; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}