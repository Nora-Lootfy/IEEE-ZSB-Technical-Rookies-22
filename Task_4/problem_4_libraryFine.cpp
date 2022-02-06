#include <iostream>
using namespace std;

/*
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    // if the return date in smaller than the due date
    if (y2 * 32 * 13 + m2 * 32 + d2 > y1 * 32 * 13 + m1 * 32 + d1)
        return 0;
    else if (y2 < y1)
        return 10000;
    else if (m2 < m1)
        return (m1 - m2) * 500;
    else
        return (d1 - d2) * 15;
}

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    int result = libraryFine(d1, m1, y1, d2, m2, y2);

    cout << result << "\n";

    return 0;
}