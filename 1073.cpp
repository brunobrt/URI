#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    for(unsigned int i = 2; i <= n; i+=2) cout << fixed << i << "^2 = " << (int) pow(i, 2) << endl; 
    return 0;
}