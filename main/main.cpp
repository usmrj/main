#include <iostream>

struct Person {
    char* name;
    char* surname;
    Person* next;
};

namespace List {
    Person* root = 0;
    Person* Create();
    void Add(Person* stara);
    void Show();
    void Remove();
    unsigned int Size();

}

}

int main()
{
}

