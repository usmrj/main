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


int main()
{
    bool go_on = 1;
    while (go_on){
        unsigned int wybor;
        std::cout << "Menu:\n1. Dodaj\n2. Wyswietl\n3. Rozmiar \n4. Usun \n0. Wyjscie";
        std::cin >> wybor;
        switch (wybor)
        {
        case 0:
            break;
        case 1:
            List::Add(List::Create());
            break;
        case 2:
            List::Show();
            break;
        case 3:
            std::cout << "rozmiar osoby:" << List::Size();
            break;
        case 4:
            List::Remove();
            break;
        default:
            break;
        }
    }

}

namespace List {
    Person* Create() {
        return 0;
    }
    void Add(Person* stara) {

    }
    void Show() {

    }
    void Remove() {

    }
    unsigned int Size() {

        return 0 ;
    }
}
