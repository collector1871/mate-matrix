# mate-matrix

Program dodający do siebie dwie macierze o wymiarach 5x5.  
W programie użyto klasy -macierz- oraz przeciążono operatory (dodawania, wejścia, wyjścia).  
Program także sprawdza, czy dana liczba jest pierwsza.  
Aplikacja została napisana dla potrzeb zaliczenia przedmiotu ze studiów.  

### Kompilacja i uruchomienie (Windows lub Linux)
	
##### Kompilacja Windows/MinGW:

	make
	
Kompilacja pod Linuxem - inny makefile (biblioteka conio.h wymaga dodania):

Zależności:
	
	apt-get install libncurses5-dev
	make -f Makefile-linux
	
##### Uruchomienie (Windows 64bit oraz Linux 64bit):	

Binaria gotowe są bez kompilacji:

	./matmat-windows.exe
	
lub:

	./matmat-linux.exe
		
### Screenshot: