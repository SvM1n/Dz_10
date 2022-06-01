#include "Dom10.h"
int main()
{
    Human* h;

    Student st1("Ivanov", "Ivan", "Ivanovich", 20, 0);
    h = &st1;
    h->print();

    Boss b1("Djioev", "Artem", "Victorovich", 20, 0);
    h = &b1;
    h->print();

}