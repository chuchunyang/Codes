#include<iostream>
#include<string>

using namespace std;

int main() {
    string target = "World";
    string message = "Hello " + target + "!";
    cout << message << endl;
    cout << message.length() << endl;
    cout << message[6] << endl;
    cout << message.find("W") << endl;
    message.replace(0, 5, "Goodbye");
    cout << message << endl;
}
