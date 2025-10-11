compile:
	g++ FilmStorage.cc -Werror -Wall -Wextra -o 3

run:
	./3

clang-format:
	clang-format -n --style=Google *.cc