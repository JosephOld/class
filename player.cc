#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>


class Player {
 private:
  std::string name;
  int level;
  double points;

 public:
  Player(std::string n, int l, double p) {
    name = n;
    level = l;
    points = p;
  }
};


void Input(std::vector<Player>& vec, int count) {
  std::cout << "Введите параметры ваших игроков: " << std::endl;
  for (int i = 0; i < count;  ш++) {
    std::cout << "Введите имя игрок номер " << i << std::endl;
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Введите уровень вашего игрока: " << std::endl;
    int level;
    std::cin >> level;

    std::cout << "Введите количство очков: " << std::endl;
    double points;
    std::cin >> points;

    Player ptr(name, level, points);
    vec.push_back(ptr);
  }
}


void Top3(std::vector<Player>& vec) {
  
}


int main() {
  std::cout << "Введите количесвто игроков: " << std::endl;
  int count;
  std::cin >> count;
  if (count <= 0 || std::cin.good() == false) {
    std::cout << "n/a";
    return 0;
  }
  std::cin.ignore();

  std::vector<Player> data;
}