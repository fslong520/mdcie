#include <iostream>
using namespace std;

int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isLeap(int y)
{
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int main()
{
    int y, m, d, k;
    cin >> y >> m >> d >> k;
    d += k;
    while (true)
    {
        int dm = days[m];
        if (m == 2 && isLeap(y)) dm = 29;
        if (d <= dm) break;
        d -= dm;
        m++;
        if (m > 12) { m = 1; y++; }
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}
