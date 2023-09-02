#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         int k = 0;
//         for (int col = 0; col < 2*n-1; col++)
//         { 
//             if (col < n-row-1)
//             {
//                 cout << "  ";
//             }
//             else if(k < row*2+1)
//             {
//                 cout << "* ";
//                 k++;
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

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
        //star
        for (int col = 0; col < row+1; col++)
        { 
            cout << "* ";
        }
        cout << endl;
    }
}