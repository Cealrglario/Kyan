#include <iostream>

using namespace std;

class Kyan {
public:
    int kyan_function();
    int get_kyan_age(); // Changed method name to avoid conflict with member variable

private:
    int kyan_age;
};

int Kyan::kyan_function() {
    return kyan_age;
}

int Kyan::get_kyan_age() {
    return kyan_age;
}

int main() {
    Kyan kyan_object; 

    cout << "Kyan's age: " << kyan_object.get_kyan_age() << endl; 
}