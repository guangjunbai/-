#include <iostream>
#include <string>

// ���ࣺ������
class Car {
protected:
    std::string brand;  // Ʒ��
    int year;  // ���

public:
    Car(const std::string& brand, int year) : brand(brand), year(year) {}

    void display() const {
        std::cout << "Ʒ��: " << brand << ", ���: " << year << std::endl;
    }
};

// �����ࣺ�����࣬ʹ��˽�м̳�
class Truck : private Car {
private:
    int payload;  // ������

public:
    Truck(const std::string& brand, int year, int payload) : Car(brand, year), payload(payload) {}
    void update(const int stuff) {
        payload += stuff;
        Car::year++;
    }
    void display() const {
        Car::display();
        std::cout << "������: " << payload << " ����" << std::endl;
    }
};

// �����ࣺ�ͳ��࣬ʹ�ñ����̳�
class Bus : protected Car {
protected:
    int passengerCapacity;  // �˿�����

public:
    Bus(const std::string& brand, int year, int capacity) : Car(brand, year), passengerCapacity(capacity) {}

    void display() const {
        Car::display();
        std::cout << "�˿�����: " << passengerCapacity << std::endl;
    }
};

// �����ࣺƤ�����࣬ʹ�ù��м̳������Ի�����Ϳͳ���
class PickupTruck : public Truck, public Bus {
public:
    PickupTruck(const std::string& brand, int year, int payload, int capacity)
        : Truck(brand, year, payload), Bus(brand, year, capacity) {}

    void display() const {
        Truck::display();
        std::cout << "�˿�����: " << Bus::passengerCapacity << std::endl;
    }
};

int main() {
    PickupTruck myPickup("����", 2022, 1000, 5);
    myPickup.display();
    myPickup.update(90);
    myPickup.display();
    return 0;
}
