compile1:
	g++ FilmStorage.cc -Werror -Wall -Wextra -o 3

run1:
	./3

clang-format:
	clang-format -n --style=Google *.cc

compile2:
	g++ city.cc -Werror -Wall -Wextra -o city

run2:
	./city

compile3:
	g++ player.cc -Werror -Wall -Wextra -o player

run3:
	./player