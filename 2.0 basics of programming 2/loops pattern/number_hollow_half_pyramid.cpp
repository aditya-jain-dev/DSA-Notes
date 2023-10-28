#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    for (int row = 1; row <= n; row++)
    {
        int count = 1;
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 || row == n || col == row)
                cout << count << " ";
            else
                cout << "  ";
            count = count + 1;
        }
        cout << endl;
    }
    
}