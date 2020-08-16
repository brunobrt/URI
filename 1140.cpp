#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    while (getline(cin, line), line != "*"){
        char first = tolower(line[0]);
        bool tautogram = true;
        for (int i = 0; i < line.size(); ++i)
            if (line[i] == ' ' && i + 1 < line.size() && tolower(line[i + 1]) != first){
                tautogram = false;
                break;
            }
        cout << (tautogram ? 'Y' : 'N') << '\n';
    }
}