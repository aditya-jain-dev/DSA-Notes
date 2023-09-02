#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int k = 1;
    int num = 1;
    
    for (int row = 0; row < n; row++)
    {
        k = 0;
        for (int col = 0; col < row+1; col++)
        {
            cout << num++;
            if (k<row)
            {
                cout << "*";
                k++;
            }
        }
        cout << endl;
    }
    
    int start = num-n;
    for(int row = 0; row < n; row++){
        k = 0;
        int count = start;
        for(int col = 0; col < n-row; col++){
            cout << count++;
            if (k<n-row-1)
            {
                cout << "*";
                k++;
            }
        }
        start = start - (n-row-1);
        cout << endl;
    }

}
