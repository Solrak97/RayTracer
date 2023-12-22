build:
	rm -rf bin
	mkdir bin
	g++ $(shell find . -name '*.cpp') -o bin/raytracer