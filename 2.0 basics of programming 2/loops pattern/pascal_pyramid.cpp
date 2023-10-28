#include<iostream>
using namespace std;

/*
using binomial expression formula
(a+b)^0 => 1
(a+b)^1 => a+b
(a+b)^2 => a^2 + 2ab + b^2
(a+b)^3 => a^3 + a^2b + ab^2 + b^3
(a+b)^4
*/

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    for (int row = 1; row <= n; row++)
    {
        int count = 1;
        for (int col = 1; col <= n-row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
            count = count * (row-col)/col;
        }
        cout << endl;
    }
    
}