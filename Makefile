HEIGHT=800
WIDTH=800

all:
	povray +H${HEIGHT} +W${WIDTH} Figur/Bein.pov
	povray +H${HEIGHT} +W${WIDTH} Figur/Becken.pov

bein:
	povray +H${HEIGHT} +W${WIDTH} Figur/Bein.pov

becken:
	povray +H${HEIGHT} +W${WIDTH} Figur/Becken.pov
