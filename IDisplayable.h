#ifndef IDISPLAYBLE_H
#define IDISPLAYBLE_H

#include <string>

using namespace std;

// Інтерфейс цьогго класу визнач контракт для класів
class IDisplayable {
public:
    virtual ~IDisplayable() {}  // віртуальний деструктор для коректн видал об'єктів

    virtual void display() const = 0;  // віртуальна функц
};

#endif 