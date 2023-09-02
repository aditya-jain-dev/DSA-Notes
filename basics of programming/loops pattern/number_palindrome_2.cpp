#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count;

    for (int row = 0; row < n; row++)
    {
        //space
        for (int col = 0; col < n-row-1; col++)
        {
            cout << " ";
        }
        //number
        count = row+1;
        for (int col = 0; col < row+1; col++)
        {
            cout << count++;
        }
        //2nd part number
        int countt = count-1;
        for (int col = 0; col < row; col++)
        {
            cout << --countt;
        }
        cout << endl;
    }
    
}