#include<iostream>
using namespace std;

int main()
{
    int j,k;

    for (int i = 1; i <= 5; i++)
    {
        for (k = 5-i; k>=1; k--)
        {
            cout << "  ";
        }
        for (j = 6-i; j<=5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}