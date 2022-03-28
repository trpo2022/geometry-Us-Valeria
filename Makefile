CFLAGS = -Wall -Wextra -Werror
CCFLAGS = -Wall -Wextra -Wconversion -Wredundant-decls -Wshadow -Wno-unused-parameter

all: geometry

geometry: bin/geometry

main.o: test/main.c
	gcc -c $(CCFLAGS) -o $@ $< -lm

geometry_test.o: test/geometry_test.c
	gcc -c $(CCFLAGS) -o $@ $< -lm

test: main.o geometry_test.o
	gcc $(LDFLAGS) main.o geometry_test.o -o tests -lm

bin/geometry: obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a
	gcc $(CFLAGS) -o $@ $^ -lm

obj/src/geometry/geometry.o: src/geometry/geometry.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libgeo/libgeo.a: obj/src/libgeo/check.o 
	ar rcs $@ $^


obj/src/libgeo/check.o: src/libgeo/check.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

	
	

.PHONY: clean

clean:
	rm obj/src/libgeo/*.a obj/src/libgeo/*.o obj/src/geometry/*.o bin/geometry
	rm -f tests *.o 
