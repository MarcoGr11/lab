#ifndef IDISPLAYBLE_H
#define IDISPLAYBLE_H

#include <string>

using namespace std;

// Інтерфейс IDisplayable визначає контракт для класів, які можуть відображати інформацію про себе
class IDisplayable {
public:
    virtual ~IDisplayable() {}  // Віртуальний деструктор для коректного видалення об'єктів

    virtual void display() const = 0;  // Чисто віртуальна функція, яку повинні реалізувати всі похідні класи
};

#endif 