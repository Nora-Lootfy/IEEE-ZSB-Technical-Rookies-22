#include <iostream>
#include <math.h>
using namespace std;

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */
int countDigits(long num)
{
    int count = 0;
    
    do {
    {
        count++;
    }
    }while ((num /= 10) != 0);
    
    return count;
}

void kaprekarNumbers(int p, int q) {
    bool isInvalid = true;
    for(int i = p; i <= q; i++)
    {
        long sqr = (long)i * i; 
        int count = countDigits(sqr);
        if(sqr % (long)pow(10, count/2 +count % 2) + sqr / (long)pow(10, count/2 +count % 2) == i)
        {
            isInvalid = false;
            cout << i << " ";
        }
    }
    if(isInvalid)
        cout << "INVALID RANGE"<<endl;
}

int main()
{
    int p;
    int q;
    cin >> p >> q; 

    kaprekarNumbers(p, q);

    return 0;
}