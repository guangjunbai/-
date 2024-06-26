#include <iostream>
#include <string>

// 基类：汽车类
class Car {
protected:
    std::string brand;  // 品牌
    int year;  // 年份

public:
    Car(const std::string& brand, int year) : brand(brand), year(year) {}

    void display() const {
        std::cout << "品牌: " << brand << ", 年份: " << year << std::endl;
    }
};

// 派生类：货车类，使用私有继承
class Truck : private Car {
private:
    int payload;  // 载重量

public:
    Truck(const std::string& brand, int year, int payload) : Car(brand, year), payload(payload) {}
    void update(const int stuff) {
        payload += stuff;
        Car::year++;
    }
    void display() const {
        Car::display();
        std::cout << "载重量: " << payload << " 公斤" << std::endl;
    }
};

// 派生类：客车类，使用保护继承
class Bus : protected Car {
protected:
    int passengerCapacity;  // 乘客容量

public:
    Bus(const std::string& brand, int year, int capacity) : Car(brand, year), passengerCapacity(capacity) {}

    void display() const {
        Car::display();
        std::cout << "乘客容量: " << passengerCapacity << std::endl;
    }
};

// 派生类：皮卡车类，使用公有继承派生自货车类和客车类
class PickupTruck : public Truck, public Bus {
public:
    PickupTruck(const std::string& brand, int year, int payload, int capacity)
        : Truck(brand, year, payload), Bus(brand, year, capacity) {}

    void display() const {
        Truck::display();
        std::cout << "乘客容量: " << Bus::passengerCapacity << std::endl;
    }
};

int main() {
    PickupTruck myPickup("福特", 2022, 1000, 5);
    myPickup.display();
    myPickup.update(90);
    myPickup.display();
    return 0;
}
