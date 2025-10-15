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
  double GetPoints() {
    return points;
  }
  std::string GetName() {
    return name;
  }
};


void Input(std::vector<Player>& vec, int count) {
  std::cout << "Введите параметры ваших игроков: " << std::endl;
  for (int i = 0; i < count;  i++) {
    std::cout << "Введите имя игрока номер " << i + 1 << std::endl;
    std::string name;
    std::cin.ignore();
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
  std::sort(vec.begin(),vec.end(),[](Player a,Player b) {
    return a.GetPoints() > b.GetPoints();
  });
}


void Print(std::vector<Player>& vec) {
  for (int i = 0; i < 3; ++i) {
    std::cout << i + 1 << ' ' <<  "место: " << vec.at(i).GetName() << std::endl;
  }
}


int main() {
  std::cout << "Введите количесвто игроков: " << std::endl;
  int count;
  std::cin >> count;
  if (count <= 0 || std::cin.good() == false) {
    std::cout << "n/a";
    return 0;
  }

  std::vector<Player> data;
  Input(data,count);
  std::cin.ignore();
  Top3(data);
  Print(data);

  return 0;
}