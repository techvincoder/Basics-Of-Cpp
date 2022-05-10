#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int space = 1;
        while(space <= n-i){
            cout<< " ";
            space++;
        }
        int j = 1;
        int var = i;
        while(j<=i){
            cout<<var;
            var++;
            j++;
        }
        cout<< endl;
        i++;
    }
}