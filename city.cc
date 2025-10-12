#include <iostream>
#include <list>
#include <vector>
#include <string>


class City {
 private:
  std::string name;
  int population;
  double squere;

 public:
  City(std::string n,int p,double s) {
    name = n;
    population = p;
    squere = s;
  }

  std::string GetName() {
    return name;
  }
  int GetPop() {
    return population;
  }
  double GetSquere() {
    return squere;
  }

  void Print() {
  std::cout << name << ' ' << "Плотность населения: " << population / squere << std::endl;
 }
};


void Input(std::list<City>& list, int count) {
  for (int i = 0; i < count; i++) {
    std::cout << "Введите название: " << std::endl;
    std::string name;
    std::cin >> name;

   std::cout << "Введите население города: " << std::endl;
   int pop;
   std::cin >> pop;

   std::cout << "Введите площадь города: " << std::endl;
   double squere;
   std::cin >> squere;

   City town(name, pop, squere);
   list.push_back(town);
  }
}


void Sort(std::list<City>& list) {
  list.sort([](City a, City b) {
    return a.GetPop() / a.GetSquere() < b.GetPop() / b.GetSquere();
  });
}


int main() {
  std::cout << "Введите количесвто городов: " << std::endl;
  int count;
  std::cin >> count;

  std::list<City> data;

  Input(data, count);
  Sort(data);
  for (City I : data) {
    I.Print();
  }
}