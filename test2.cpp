#include <iostream>
using namespace std;

void change(int &val) {
    cout << val << endl;
    val = 0;
}

int main() {
    int variable = 100;
    cout << "Variable is " << variable << endl;
    change(variable);
    cout << "Variable is " << variable << endl;

}

