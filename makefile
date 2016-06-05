all:
	g++ -o peopledetect peopledetect.cpp dominantColor.cpp `pkg-config --cflags --libs opencv`


