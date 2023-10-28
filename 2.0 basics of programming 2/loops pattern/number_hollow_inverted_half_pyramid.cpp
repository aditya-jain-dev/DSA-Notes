#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    for (int row = 1; row <= n; row++)
    {
        int count = row;
        for (int col = 1; col <= n-row+1; col++)
        {
            if (col == 1 || row == 1 || col == n-row+1)
                cout << count << " ";
            else
                cout << "  ";
            count = count + 1;
        }
        cout << endl;
    }
    
}