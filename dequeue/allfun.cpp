#include <iostream>
#include <deque>
#include <algorithm> // for std::find

void printDeque(const std::deque<int>& dq) {
    for (const int& elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::deque<int> myDeque = {10, 20, 30, 40, 50};
    std::cout << "Initial deque: ";
    printDeque(myDeque);

    // Element Access
    std::cout << "First element (front): " << myDeque.front() << std::endl;
    std::cout << "Last element (back): " << myDeque.back() << std::endl;
    std::cout << "Element at position 2: " << myDeque.at(2) << std::endl;

    // Iterators
    std::cout << "Iterating through the deque: ";
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse iterating through the deque: ";
    for (auto rit = myDeque.rbegin(); rit != myDeque.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Capacity
    std::cout << "Is the deque empty? " << (myDeque.empty() ? "Yes" : "No") << std::endl;
    std::cout << "Size of the deque: " << myDeque.size() << std::endl;

    // Modifiers
    myDeque.push_back(60);
    myDeque.push_front(0);
    std::cout << "Deque after push_back and push_front: ";
    printDeque(myDeque);

    myDeque.pop_back();
    myDeque.pop_front();
    std::cout << "Deque after pop_back and pop_front: ";
    printDeque(myDeque);

    auto it = std::find(myDeque.begin(), myDeque.end(), 30);
    if (it != myDeque.end()) {
        myDeque.insert(it, 25);
    }
    std::cout << "Deque after inserting 25 before 30: ";
    printDeque(myDeque);

    it = std::find(myDeque.begin(), myDeque.end(), 25);
    if (it != myDeque.end()) {
        myDeque.erase(it);
    }
    std::cout << "Deque after erasing 25: ";
    printDeque(myDeque);

    myDeque.resize(7, 100);
    std::cout << "Deque after resizing to 7 elements (new elements initialized to 100): ";
    printDeque(myDeque);

    std::deque<int> otherDeque = {200, 300};
    myDeque.swap(otherDeque);
    std::cout << "Deque after swapping with another deque: ";
    printDeque(myDeque);
    std::cout << "Other deque after swapping: ";
    printDeque(otherDeque);

    myDeque.assign(5, 42);
    std::cout << "Deque after assigning 5 elements of 42: ";
    printDeque(myDeque);

    otherDeque.assign(myDeque.begin(), myDeque.end());
    std::cout << "Other deque after assigning from myDeque: ";
    printDeque(otherDeque);

    myDeque.clear();
    std::cout << "Deque after clear(): ";
    printDeque(myDeque);

    // Operations
    myDeque = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 9};
    std::cout << "Deque before operations: ";
    printDeque(myDeque);

    myDeque.erase(std::remove(myDeque.begin(), myDeque.end(), 6), myDeque.end());
    std::cout << "Deque after removing all 6s: ";
    printDeque(myDeque);
}
