#include<iostream>
using namespace std;

//method-1
void palindrome1(int n){
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

//method-2
void palindrome2(int n){
    int k = n; //for col printing
    for (int row = 0; row < n; row++)
    {
        int count = 1;
        for (int col = 0; col < k; col++)
        {
            //spaces
            if (col < n-1-row)
            {
                cout << " ";
            }
            //number printing upto n
            else if (col < n)
            {
                cout << count;
                count++;
            }
            else if (col == n)
            {
                count -= 2;
                cout << count;
                count--;
            }
            else{
                cout << count;
                count--;
            }
        }
        k++;
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    palindrome2(n);
}