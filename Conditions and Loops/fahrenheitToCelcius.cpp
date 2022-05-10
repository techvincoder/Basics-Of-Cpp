#include<iostream>
using namespace std;

int main(){
    int start, end , step;
    cin >> start >> end >> step;

    int currentfar = start;
    while (currentfar<=end){
        double p = (currentfar - 32) * (5.0/9);
        cout << currentfar << " " << (int)p << endl;
        currentfar = currentfar+step;
    }
}
