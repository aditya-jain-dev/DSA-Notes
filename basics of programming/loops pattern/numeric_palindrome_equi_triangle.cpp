#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        //space
        for (int col = 0; col < n-row-1; col++)
        {
            cout << " ";
        }
        //2nd pattern
        int count;
        for (int col = 0; col < row+1; col++)
        {
            count = col+1;
            cout << count;
        }
        // 3rd pattern cotinues
        for (int col = 0; col < row; col++)
        {
            int countt = count - col -1;
            cout << countt;
        }
        cout << endl;
    }
}