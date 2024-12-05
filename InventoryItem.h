#pragma once

#include <string>   // Подключаем библиотеку для работы со строками
#include <iostream> // Подключаем библиотеку для ввода-вывода

// Класс InventoryItem (Элемент инвентаря)
class InventoryItem {
public:
    InventoryItem() : itemName("Unnamed"), quantity(0) {} // Конструктор по умолчанию
    InventoryItem(const std::string& itemName, int quantity)
        : itemName(itemName), quantity(quantity) {}

    void displayInfo() const;

private:
    std::string itemName; // Название элемента инвентаря
    int quantity;         // Количество элемента инвентаря
};
