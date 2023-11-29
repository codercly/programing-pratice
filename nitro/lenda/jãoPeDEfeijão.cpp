#include <iostream>
#include <cmath>
using namespace std;

int verificaKaprekar(int n)
{
    int r, q, p, n2;
    bool kaprekar;
    q = 0;
    r = 0;
    p = 10;
    n2 = n * n;
    kaprekar = false;

    if (n == 1)
    {
        kaprekar = true;
    }

    while (p < n2){
        q = n2 / p;
        r = n2 % p;
        p *= 10;
        if ((q + r) == n && r != 0)
        {
            kaprekar = true;
            break;
        }
        cout << p << " " << q << " " << r;
    }

    cout << n << ": " << (kaprekar ? "S" : "N") << endl;
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {

        verificaKaprekar(n);
        
    }
    return 0;
}