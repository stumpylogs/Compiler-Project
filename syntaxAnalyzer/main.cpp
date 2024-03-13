// main.cpp
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
#include "SyntaxAnalyzer.h"

int main() {
    ifstream infile("codelexemes.txt");
    if (!infile){
        cout << "error opening lexemes.txt file" << endl;
        exit(-1);
    }
    SyntaxAnalyzer sa(infile);

    return 0;
}