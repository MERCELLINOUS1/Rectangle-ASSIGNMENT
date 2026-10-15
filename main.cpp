#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    // Setter functions
    void setWidth(double w) {
        if (w > 0) width = w;
        else std::cout << "Invalid width!" << std::endl;
    }

    void setLength(double l) {
        if (l > 0) length = l;
        else std::cout << "Invalid length!" << std::endl;
    }

    // Getter functions
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    // Calculation functions
    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    // Creating Rectangle object
    Rectangle rect;

    // Setting dimensions using setters
    rect.setWidth(5.5);
    rect.setLength(10.0);

    // Retrieving and displaying dimensions using getters
    std::cout << "Rectangle Width: " << rect.getWidth() << std::endl;
    std::cout << "Rectangle Length: " << rect.getLength() << std::endl;

    // Calculating and displaying area and perimeter
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;

    return 0;
}