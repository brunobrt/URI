#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int inside = 0;
    int outside = 0;
    cin >> n;
    while(n--) {
        cin >> x;
        (x >= 10 && x <= 20) ? inside++ : outside++;
    }
    cout << inside << " in\n" << outside << " out" << endl;
    return 0;
}
