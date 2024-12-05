#pragma once

#include "Employee.h" // Подключаем класс Employee

// Класс Groom наследует от Employee
class Groom : public Employee {
public:
    Groom() : Employee("Unnamed") {} // Конструктор по умолчанию
    Groom(const std::string& name) : Employee(name) {}

    void displayInfo() const override;
};
