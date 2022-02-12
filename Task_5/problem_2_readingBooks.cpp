#include <iostream>
using namespace std;

int leastNumberOfDaysForReadingBook(int n, int t, int a[])
{
    //one day at least to read a book
    int num = 1;

    for(int i = 0; i < n; i++)
    {
        t -= (a[i] < 86400) ? 86400 - a[i] : 0;
        if(t <= 0)
            break;
        num++;
    }

    return num;
}

int main()
{
    int n, t;

    cin >> n >> t;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << leastNumberOfDaysForReadingBook(n, t, a);
    return 0;
}