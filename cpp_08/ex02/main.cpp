#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    // Testing push and top
    std::cout << "Pushing elements onto the stack:\n";
    mstack.push(10);
    std::cout << "Pushed: 10, Top: " << mstack.top() << std::endl;
    
    mstack.push(42);
    std::cout << "Pushed: 42, Top: " << mstack.top() << std::endl;
    
    mstack.push(77);
    std::cout << "Pushed: 77, Top: " << mstack.top() << std::endl;
    
    // Testing pop
    mstack.pop();
    std::cout << "After popping, Top: " << mstack.top() << ", Size: " << mstack.size() << std::endl;

    // Filling stack with additional elements
    std::cout << "Adding more elements to test iteration:\n";
    for (int i = 1; i <= 5; ++i) {
        mstack.push(i * 100);
        std::cout << "Pushed: " << i * 100 << ", Current Size: " << mstack.size() << std::endl;
    }
    
    // Testing iteration
    std::cout << "Iterating through mstack:\n";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Testing copy constructor
    std::cout << "Creating a copy of mstack (using copy constructor):\n";
    MutantStack<int> mstackCopy(mstack);

    // Testing the copied stack
    std::cout << "Iterating through the copied stack:\n";
    for (MutantStack<int>::iterator it = mstackCopy.begin(); it != mstackCopy.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Testing assignment operator
    MutantStack<int> mstackAssigned;
    mstackAssigned = mstack;  // Assign mstack to mstackAssigned
    std::cout << "Iterating through the assigned stack:\n";
    for (MutantStack<int>::iterator it = mstackAssigned.begin(); it != mstackAssigned.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Final state of original stack
    std::cout << "Final state of the original mstack after all operations:\n";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
