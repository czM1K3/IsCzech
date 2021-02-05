output: obj/main.o obj/Calculator.o obj/Letter.o
	g++ obj/main.o obj/Calculator.o obj/Letter.o -o output

obj/main.o: src/main.cpp
	g++ -c -I include/ src/main.cpp -o obj/main.o

obj/Calculator.o: src/Calculator.cpp include/Calculator.h
	g++ -c -I include/ src/Calculator.cpp -o obj/Calculator.o

obj/Letter.o: src/Letter.cpp include/Letter.h
	g++ -c -I include/ src/Letter.cpp -o obj/Letter.o