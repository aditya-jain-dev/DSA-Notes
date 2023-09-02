#include<iostream>
using namespace std;

int main(){
    int ROW;
    cout << "Enter the rows: ";
    cin >> ROW;
    int COL;
    cout << "Enter the colums: ";
    cin >> COL;
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
        {
            if (row == 0 || row == ROW-1)
            {
                cout << "* ";
            }
            else{
                if (col == 0 || col == COL-1)
                {
                    cout << "*" << " ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}