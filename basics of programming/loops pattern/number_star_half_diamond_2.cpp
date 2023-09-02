#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int count = 0;
        for (int col = 0; col < row+1; col++)
        {
            if (col == 0)
                cout << "* ";
            else
            {
                cout << col << " ";
                count++;
            }
        }

        for (int col = 0; col < row; col++)
        {
            if (col == row-1)
                cout << "* ";
            else
            {
                cout << --count << " ";
            }
        }
        cout << endl;
    }


    for (int row = 0; row < n-1; row++)
    {
        int count = 0;
        for (int col = 0; col < n-row-1; col++)
        {
            if (col == 0)
                cout << "* ";
            else
            {
                cout << col << " ";
                count++;
            }
        }

        for (int col = 0; col < n-row-2; col++)
        {
            if (col == n-row-3)
                cout << "* ";
            else
            {
                cout << --count << " ";
            }
        }
        cout << endl;
    }
    
}