#include <iostream>

int main() {
    int elephant_count;
    int lion_count {};
    int dog_count {10};
    int cat_count {15};
    int domesticated_animals { dog_count + cat_count };
    std::cout << "Elephant Count: " << elephant_count << std::endl;
    std::cout << "Lion Count: " << lion_count << std::endl;
    std::cout << "Dog Count: " << dog_count << std::endl;
    std::cout << "Cat Count: " << cat_count << std::endl;
    std::cout << "Domesticated Animal Count: " << domesticated_animals << std::endl;
    std::cout << std::endl;

    int apple_count(10);
    int orange_count(15);
    int fruit_count ( apple_count + orange_count );
    int narrowing_converion(2.9);
    std::cout << "Apple Count: " << apple_count << std::endl;
    std::cout << "Orange Count: " << orange_count << std::endl;
    std::cout << "Fruit Count: " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion: " << narrowing_converion << std::endl;
    std::cout << std::endl;

    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + vehicle_count;
    int narrowing_converion_count = 2.9;
    std::cout << "Bike Count: " << bike_count << std::endl;
    std::cout << "Truck Count: " << truck_count << std::endl;
    std::cout << "Vehicle Count: " << vehicle_count << std::endl;
    std::cout << "Narrowing Conversion: " << narrowing_converion_count << std::endl;
    std::cout << std::endl;

    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of truck_count: " << sizeof(truck_count) << std::endl;
    return 0;
}