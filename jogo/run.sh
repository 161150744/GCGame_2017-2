#!/bin/bash
g++ -o jogo ./Source/main.cpp ./Source/Object.cpp ./Source/Face.cpp ./Source/Aresta.cpp ./Source/Ponto.cpp ./Source/image.cpp -lGL -lglut -lGLU -lm -std=c++98
./jogo Accets/cow.obj
