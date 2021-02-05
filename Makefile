output: obj/main.o obj/Calculator.o obj/letter.o
	g++ obj/main.o obj/Calculator.o obj/letter.o -o output

obj/main.o: src/main.cpp
	g++ -c -I include/ src/main.cpp -o obj/main.o

obj/Calculator.o: src/Calculator.cpp include/Calculator.h
	g++ -c -I include/ src/Calculator.cpp -o obj/Calculator.o

obj/letter.o: src/letter.cpp include/letter.h
	g++ -c -I include/ src/letter.cpp -o obj/letter.o