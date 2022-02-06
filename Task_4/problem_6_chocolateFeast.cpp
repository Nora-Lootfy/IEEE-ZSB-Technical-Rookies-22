#include <iostream>
using namespace std;

/*
 * Complete the 'chocolateFeast' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER c
 *  3. INTEGER m
 */

int chocolateFeast(int n, int c, int m) {
    int num = n / c;
    int t = num % m + num / m;
    num += num / m;
    
    while(t >= m)
    {
        num += t / m;
        t = t % m + t / m;
    }
    
    return num;
}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n, c, m;
        cin >> n >> c >> m;
        
        int result = chocolateFeast(n, c, m);

        cout << result << "\n";
    }
    return 0;
}