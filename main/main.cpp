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
        std::cout << "Menu:\n1. Dodaj\n2. Wyswietl\n3. Rozmiar \n4. Usun \n0. Wyjscie\nTwoj wybor:";
        std::cin >> wybor;
        switch (wybor)
        {
        case 0:
            go_on = 0;
            break;
        case 1:
            List::Add(List::Create());
            break;
        case 2:
            List::Show();
            break;
        case 3:
            std::cout << "rozmiar osoby:" << List::Size()<<std::endl;
            break;
        case 4:
            List::Remove();
            break;
        default:
            break;
        }
        //system("cls");
    }

}

namespace List {
    Person* Create() {
        char buff[512];
        unsigned int str_length;
        Person* osoba = new Person;
        std::cout << "Wprowadz imie osoby: ";
        std::cin >> buff;
        str_length = std::strlen(buff);
        osoba->name = new char[str_length + 1];;
        //std::memcpy(osoba->name, buff, str_length * sizeof(char)); //nie dziala
        std::cout << std::strlen(osoba->name);
        std::cout << "Wprowadz nazwisko osoby: ";
        std::cin >> buff;
        str_length = std::strlen(buff);
        osoba->surname = new char[str_length + 1];
        //std::memcpy(static_cast<void*>(osoba->surname), buff, str_length * sizeof(char)); //nie dziala
        std::cout<<*(osoba->surname+str_length);
        std::cout<<osoba->surname;
        osoba->next = 0;
        return 0;
    }
    void Add(Person* stara) {
        if (root == 0) {
            root = stara;
        }
        else{
            Person* var;
            var = root;
            while (var->next!=0){
                var = var->next;
            }
            var->next = stara;
        }
    }
    void Show() {

    }
    void Remove() {

    }
    unsigned int Size() {

        return 0 ;
    }
}
