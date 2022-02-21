geometry: geometry.c
	gcc -Wall -Werror -o geometry geometry.c -lm
test:
	./geometry
clean:
	rm geometry
