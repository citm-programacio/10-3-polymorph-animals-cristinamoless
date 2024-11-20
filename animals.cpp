#include <iostream>
using namespace std;

class animal {
public:
    void speak() {
        cout << "idk what to say" << endl;
    }

    virtual ~animal() {}
};

class dog : public animal {
public:
    void speak() {
        cout << "woof!!!!" << endl;
    }
};

class cat : public animal {
public:
    void speak() {
        cout << "miaaau!!!" << endl;
    }
};
int main()
{
    animal an;
    dog gos;
    cat gat;
    
    an.speak();
    gos.speak();
    gat.speak();
}
