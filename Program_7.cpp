#include <iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

// Initialize static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    cout << Student::count;

    return 0;
}