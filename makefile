plot.png: calor.dat grafica.py
	python grafica.py

%.dat : a.out
	./a.out 

a.out: calor.cpp
	g++ calor.cpp
