#include<iostream>
using namespace std;

void halfDiamond1(int n){
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //inverted
    for (int row = 0; row < n-1; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void halfDiamond2(int n){
    //rows = 9
    for (int row = 0; row < 2*n-1; row++)
    {
        int cond = 0;
        if (row<n)
            {
                cond = row;
            }
            else{
                cond = n - (row%n) - 2;
            }
        for (int col = 0; col <= cond; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    halfDiamond2(n);
    
}