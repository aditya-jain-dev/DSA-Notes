#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        char ch;
        for (int col = 0; col < row+1; col++)
        {
            ch = 'A' + col;
            cout << ch;
        }
        for (int col = 0; col < row; col++)
        {
            char chh = ch-col-1;
            cout << chh;
        }
        cout << endl;
    }
}