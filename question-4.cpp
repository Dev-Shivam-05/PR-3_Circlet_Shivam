#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for (i = 1; i <= 5; i++)
    {
        for (k=1; k<=i-1; k++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }


    return 0;
}