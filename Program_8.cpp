#include <iostream>
using namespace std;

class Test {
private:
    int value;

public:
    // Constructor
    Test(int v) {
        value = v;
    }

    // Inline function
    inline int getValue() {
        return value;
    }

    // Friend function
    friend void show(Test t);
};

// Friend function definition
void show(Test t) {
    cout << t.value;
}

int main() {
    Test obj(50);

    cout << obj.getValue() << endl;
    show(obj);

    return 0;
}