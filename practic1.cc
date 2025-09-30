#include <iostream>
#include <string>

class Fridges {
std::string model;
std::string color;
float size;

 public:
  Fridges(std::string modelValue, std::string colorValue, float sizeValue) {
    model = modelValue;
    color = colorValue;
    size = sizeValue;
  }
    void PrintInfo() 
    {
      std::cout << "Model: " << model << '\n' << "Color: " << color << '\n' << "Size: " << size << "m" << std::endl;
    }
  
};

int main() {
  Fridges Sharp("Oldest", "grey", 1.9);
  Sharp.PrintInfo();
}