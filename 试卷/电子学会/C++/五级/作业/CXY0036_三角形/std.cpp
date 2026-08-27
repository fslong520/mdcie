#include <iostream>
#include <cstring>
using namespace std;

char g[1100][2200];

void draw(int x, int y, int n) {
    if (n == 1) {
        g[x][y+1] = '/'; g[x][y+2] = '\\';
        g[x+1][y] = '/'; g[x+1][y+3] = '\\';
        g[x+1][y+1] = '_'; g[x+1][y+2] = '_';
        return;
    }
    int h = 1 << (n-1);
    draw(x, y + h, n-1);
    draw(x + h, y, n-1);
    draw(x + h, y + 2*h, n-1);
}

int main() {
    int n;
    while (cin >> n && n) {
        int rows = 1 << n, cols = 1 << (n+1);
        memset(g, ' ', sizeof(g));
        draw(0, 0, n);
        for (int i = 0; i < rows; i++) {
            int end = cols - 1;
            while (end >= 0 && g[i][end] == ' ') end--;
            for (int j = 0; j <= end; j++) cout << g[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
