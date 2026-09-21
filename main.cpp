#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int Multiply(int a,int b)
{
    return a*b;
}

int main() {
    int x, y;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> x;

    std::cout << "Enter second number: ";
    std::cin >> y;

    std::cout << "Choose operation (+ or -): ";
    std::cin >> op;

    if (op == '+') {
        std::cout << "Result: " << sum(x, y) << std::endl;
    } else if (op == '-') {
        std::cout << "Result: " << subtract(x, y) << std::endl;
    } else if(op=='*')
    {
        std::cout << "Reslut: " <<Multiply(x,y) <<std::endl;
    } else {
        std::cout << "Invalid operation!" << std::endl;
    }

    return 0;
}
