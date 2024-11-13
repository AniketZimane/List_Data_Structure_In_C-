#include "ListTemplateV.h"
#include <iostream>

int main() {
    ListTemplateV<int, double, string> mixedList;
    mixedList.addItem(10);
    mixedList.addItem(20.5); 
    mixedList.addItem("Hello"s);
   
    mixedList.display();
    std::cout << "Size of items in list: " << mixedList.count() << std::endl;

    return 0;
}
