#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // 1st pattern
    for (int row = 0; row < n; row++)
    {
        // 1 star
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        // space
        for (int col = 0; col < 2*n-2*row-2; col++)
        {
            cout << " ";
        }
        // 2 star
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //inverse pattern
    for (int row = 0; row < n; row++)
    {
        // 1 star
        for (int col = 0; col < n-row; col++)
        {
            cout << "*";
        }
        // space
        for (int col = 0; col < 2*row; col++)
        {
            cout << " ";
        }
        // 2 star
        for (int col = 0; col < n-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}