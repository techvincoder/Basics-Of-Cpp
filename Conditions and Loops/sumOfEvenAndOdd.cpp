/*

Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.

Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

Input format :
 Integer N

Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits

(Print first even sum and then odd sum separated by space)

*/


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
