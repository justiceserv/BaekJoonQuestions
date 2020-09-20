#include<iostream>
#include<stdlib.h>
using namespace std; 

char bulls[20][25+2];
int nbulls;
char cows[20][25+2];
int ncows;

int offspring (int b, int c) 
{
    int i, j, n, ok;
    n = 0;
    for (i = 0; i < nbulls; i++) 
    {
        if (i == b) 
            continue;
        ok = 1;
        for (j = 0; j < 25; j++) {
            if (bulls[b][j] != bulls[i][j] &&
                        cows[c][j] != bulls[i][j]) {
                ok = 0;
                break;
            }
        }
        if(ok) 
            n++;
    }
    for (i = 0; i < ncows; i++) {
        if (i == c) 
            continue;
        ok = 1;
        for (j = 0; j < 25; j++) {
            if (bulls[b][j] != cows[i][j] &&
                        cows[c][j] != cows[i][j]) {
                ok = 0;
                break;
            }
        }
        if (ok) n++;
    }
    return n;
}

int main() {
    cin >> nbulls >> ncows; 
    int i, j;
    for (i = 0; i < nbulls; i++)
        cin >> bulls[i]; 
    for (i = 0; i < ncows; i++)
        cin >> cows[i]; 
    for (i = 0; i < nbulls; i++) 
    {
        for (j = 0; j < ncows; j++) 
        {
            if (j > 0) 
                cout << " "; 
            int temp = offspring(i, j);
            cout << temp; 
        }
        cout << "\n"; 
    }
    return 0; 
}
