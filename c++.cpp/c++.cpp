#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void getLength(const string& str) {
    cout << "Original String: " << str << endl;
    cout << "Length: " << str.length() << endl;
}

void findIndexOf(const string& str, const string& target) {
    cout << "Original String: " << str << endl;
    cout << "Index: " << str.find(target) << endl;
}

void findLastIndexOf(const string& str, const string& target) {
    cout << "Original String: " << str << endl;
    cout << "Index: " << str.rfind(target) << endl;
}

void getSlice(const string& str, size_t start, size_t end) {
    cout << "Original String: " << str << endl;
    cout << "After slice: " << str.substr(start, end - start) << endl;
}

int main() {
    getLength("Hello World");
    findIndexOf("Hello World", "World");
    findLastIndexOf("Hello World World", "World");
    getSlice("Hello World", 0, 5);

    return 0;
}
