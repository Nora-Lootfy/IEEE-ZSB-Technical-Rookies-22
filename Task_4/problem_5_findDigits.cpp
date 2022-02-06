#include <iostream>
using namespace std;

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n) {
    int num = n;
    int count = 0;
    while(num != 0)
    {
        if(num % 10 == 0)
        {
            num /= 10;
            continue;
        }
        count += (n % (num % 10) == 0) ? 1 : 0;
        num /= 10;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n;
        cin >> n;

        int result = findDigits(n);

        cout << result << "\n";
    }

    return 0;
}