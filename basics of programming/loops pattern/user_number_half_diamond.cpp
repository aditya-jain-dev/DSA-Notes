#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int count;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            count = n+row-1;
            cout << count;
        }
        cout << endl;
    }
    for (int row = 0; row < n-1; row++)
    {
        int countt = count-row;
        for (int col = 0; col < n-row-1; col++)
        {
            cout << countt-1;
        }
        cout << endl;
    }
    
}