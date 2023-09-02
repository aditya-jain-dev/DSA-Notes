#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout << "Enter the number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*row+1; col++)
        {   
            if (col%2==0)
                cout << row+1;
            else
                cout << "*";
        }
        cout << endl;
    }
    n = n-1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*n-2*row-1; col++)
        {   
            if (col%2==0)
                cout << n-row;
            else
                cout << "*";
        }
        cout << endl;
    }
}