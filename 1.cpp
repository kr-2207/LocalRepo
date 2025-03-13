#include<bits/stdc++.h>
using namespace std;

void func(void){
    //n>2
    int n; cin >> n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not prime\n";
            return;
        }
    }
    cout<<"Is prime\n";
}

int main(){
    func();
    return 0;
}