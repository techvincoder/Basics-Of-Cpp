#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	int basic;
    char grade;
    cin >> basic >> grade;
    
    
    double hra;
    hra = 0.2 * basic;
    double da;
    da = 0.5 * basic;
    double pf;
    pf = 0.11 * basic;
    int allow;
    double totalsalary;
    
    
    if (grade == 'A'){
        allow = 1700; 
    } else if (grade == 'B'){
        allow = 1500;
    } else {
        allow = 1300;
    }
     totalsalary = basic + hra + da + allow - pf;
    int x = round(totalsalary);
   
    cout << x;
    return 0;
}