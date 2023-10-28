#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            count = col+1;
            cout << count;
        }
        for (int col = 0; col < row; col++)
        {
            int countt = count - col - 1;
            cout << countt;
        }
        cout << endl;
    }
    
}