#include <iostream>
#include <string>
#include <vector>
#include <list>

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
 int GetYear() {
  return year;
 }
 std::string GetName() {
    return name;
 }
 double GetRating() {
  return rating;
 }
 void Print() {
  std::cout << year << ' ' << name << ' ' << rating << std::endl;
 }
};


void InputInfo(std::list<Movie>&  list) {
  std::string name;
  int year;
  double rating;

  std::cout << "Введите название: " << std::endl;
  getline(std::cin,name);
  std::cout << "Введите год выпуска: " << std::endl;
  std::cin >> year;
  std::cout << "Введите рейтинг: " << std::endl;
  std::cin >> rating;

  Movie film(year,name,rating);
  list.push_back(film);
}

void Sort(std::list<Movie>& list) {
  list.remove_if([](Movie film){
    return film.GetRating() < 7.5;
  });

  list.sort([](Movie a,Movie b){
    return a.GetYear() < b.GetYear();
  });
}

int main() {
  std::list<Movie> storage;

  std::cout << "Введите количесвто фильмов: " << std::endl;
  int count;
  std::cin >> count;
  std::cin.ignore();

  for (int i = 0; i < count; i++) {
    InputInfo(storage);
    std::cin.ignore();
  }

  Sort(storage);

  for (Movie i : storage) {
    i.Print();
    std::cout << std::endl;
  }
  return 0;
}