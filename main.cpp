#include <iostream>
#include <string>
using namespace std;

int main() {
    string namn;
    cout << "Vad heter du? ";
    getline(cin, namn);
    cout << "Hej " << namn << "!" << endl;
    cout << "Hej från Victor!" << endl;
    return 0;
}
