album.png:album.txt
	python grafica.py
album.txt:album
	./album > album.txt
album:album.cpp
	c++ album.cpp -o album
clean:
	rm album
	rm album.txt
