//  StoI
//
//  Created by Shayan Aryania

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string bin_string = "1234s";
    string str;
    int number = 0;
    size_t* idx = nullptr;
    number = stoi(bin_string,idx, 10);
    cout <<"Original binary string: "<< bin_string << endl;
    cout <<"Equivalent integer: "<< number << endl;
    
    
}

