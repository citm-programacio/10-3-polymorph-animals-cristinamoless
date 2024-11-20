#include <iostream>
using namespace std;

class animal {
public:
    virtual void speak() {
        cout << "idk what to say" << endl;
    }
    virtual void eat() {
        cout << "idk what i like to eat" << endl;
    }
    virtual ~animal() {}
};

class dog : public animal {
public:
    void speak() override {
        cout << "woof!!!!" << endl;
    }
    void eat() override {
        cout << "eating a good steak nyam" << endl;
    }
};

class cat : public animal {
public:
    void speak() override {
        cout << "miaaau!!!" << endl;
    }
    void eat() override {
        cout << "eating some fish nyam nyam" << endl;
    }
};
int main()
{
    animal an;
    cat gat;
    animal* gos = new dog;
    
    an.speak();
    an.eat();
    gos->speak();
    gos->eat();
    gat.speak();
    gat.eat();
    delete gos;
}
