#include <iostream>
#include <string>
#include <Rangechecker.h>

using namespace std;

int main(int argc, char** argv) {
    cout << "Lab 1" << endl << endl;

    if (argc < 4) {
        cout << "Three double arguments is needed." << endl;

        exit(EXIT_FAILURE);
    }

    string left = argv[1];
    string right = argv[2];
    string num = argv[3];

    auto *rchecker = new Rangechecker();

    rchecker->setLeft(stod(left));
    rchecker->setRight(stod(right));

    bool result = rchecker->rangecheck(stod(num));

    cout << result << endl;

    delete rchecker;

    exit(!result);
}
