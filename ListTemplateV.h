#ifndef LISTTEMPLATEV_H
#define LISTTEMPLATEV_H

#include <iostream>
#include <vector>
#include <variant>
#include <stdexcept>
using namespace std;

template <typename... Types>
class ListTemplateV {
private:
    vector<std::variant<Types...>> items;

public:
    void addItem(std::variant<Types...> item) {
        items.push_back(item);
    }

    void display() const {
        for (const auto& item : items) {
            std::visit([](auto&& arg) { cout << arg << " "; }, item);
        }
        cout << endl;
    }

    size_t count() const {
        return items.size();
    }

    std::variant<Types...> getItem(size_t index) const {
        if (index < items.size()) {
            return items[index];
        }
        throw std::out_of_range("Index out of range");
    }
};

#endif 
