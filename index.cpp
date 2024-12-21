#include <iostream>
using namespace std;
int main() {
    // 1 to 100
    for(int i=1;i<=100;i++){
        cout<<i<<endl;
    }
    
    int num=1;
    for(int i=1;i<=10;++i){
        cout<<2*i<<" ";
    }
    // reverse
for(int i=100;i>=1;--i){
        cout<<i;
    }

    for(int i=10;i>=1;--i){
        cout<<2*i;
    }

    // 2 to 5 table &reverse table
    for(int i=2; i<=5;++i){
        for(int j=1;j<=10;++j){
            cout<<i*j<<endl;
        }
    }

    for (int i=5;i>=2;--i){
        for(int j=10;j>=1;--j){
            cout<<i*j<<endl;
        }
    }

    // sum 
    int sum=0;
    for(int i=1;i<=8;++i){
        sum=sum+i;
        
    }
    cout<<sum;

    // factorial
    int num=1;
    for(int i=1;i<=4;++i){
        num=num*i;
    }
    cout<<num;

    // power

    
    