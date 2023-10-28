#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // 1st star
        for (int col = 0; col < 2*n-row-2; col++)
        {
            cout << "*";
        }
        // middle pattern
        for (int col = 0; col < 2*row+1; col++)
        {
            if (col%2==0)
                cout << row+1;
            else
                cout << "*";
        }
        // last pattern
        for (int col = 0; col < 2*n-row-2; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}