all:
	g++ main.cpp personnages.cpp  -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio && ./a.out
	
