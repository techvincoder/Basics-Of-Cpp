#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int i;

    int sum_odd;
    sum_odd = 0;
    int sum_even;
    sum_even = 0;
    
    while (n > 0){
        i = n% 10;
        if (i%2 == 0){
            sum_even += i;
        } else {
            sum_odd += i;
        }
        n= n/10;
    }  
    cout << sum_even << " " << sum_odd;
    return 0;
    
    
}
