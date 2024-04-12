run:
	clang++ src/main.cpp src/views/Property.cpp -I/Library/Frameworks/SDL2.framework/Headers -F/Library/Frameworks -framework SDL2 -o main
	./main
