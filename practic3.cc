#include <iostream>
#include <string>
#include <vector>

class Movie {
  int year;
  std::string name;
  double rating;
public:
 Movie (int y, std::string n, double r) {
  year = y;
  name = n;
  rating = r;
 }
 void Print() {
  std::cout << year << name << rating << std::endl;
 }
};


void InputInfo(std::vector<Movie>&  vec) {
  std::string name;
  int year;
  double rating;

  std::cout << "Введите название: " << std::endl;
  std::cin >> name;
  std::cout << "Введите год выпуска: " << std::endl;
  std::cin >> year;
  std::cout << "Введите рейтинг: " << std::endl;
  std::cin >> rating;

  Movie film(year,name,rating);
  vec.push_back(i)
}


int main() {
  std::vector<Movie> storage;
  std:;cout << "Введите количесвто фильмов: " << std::endl;


  for ()
}