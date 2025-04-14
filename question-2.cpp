#include<iostream>
using namespace std;

int main()
{

    int i,j,num_1=11;

    for (i=1; i<=5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << num_1 << " ";
            num_1++;
        }
        cout << endl;
    }

    return 0;
}