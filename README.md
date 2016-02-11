# mate-matrix

Program dodający do siebie dwie macierze o wymiarach 5x5.  
W programie użyto klasy -macierz- oraz przeciążono operatory (dodawania, wejścia, wyjścia).  
Program także sprawdza, czy dana liczba jest pierwsza.  
Aplikacja została napisana dla potrzeb zaliczenia przedmiotu ze studiów.  

### Kompilacja i uruchomienie (Windows lub Linux)
	
##### Kompilacja 

Windows/MinGW/Cygwin:

	make
	
Kompilacja pod Linuxem - inny makefile (bo biblioteka conio.h wymaga dodania):
Zależności:
	
	apt-get install libncurses5-dev
	make -f Makefile-linux
	
##### Uruchomienie (Windows 64bit oraz Linux 64bit):	

Binaria gotowe są bez kompilacji:

	./matmat-linux.exe	
	
lub (testowane pod Cygwinem):

	./matmat-windows.exe

### Screenshot:

![kik.exe](https://raw.githubusercontent.com/collector1871/mate-matrix/master/matmat01.jpg)
![kik.exe](https://raw.githubusercontent.com/collector1871/mate-matrix/master/matmat02.jpg)