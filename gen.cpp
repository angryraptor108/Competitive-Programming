// generating a random sequence of distinct elements
#include <iostream>
#include <random>
#include <set>
using namespace std;

int rand(int a, int b){
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]){
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int n = rand(2, 10);
    cout << n << endl;

    set<int> used;

    for(int i = 0; i < n; i++){
        cout << rand(1, 10) << " ";
    }
    cout << endl;

}
