#include "colors.inc"
#include "screen.inc"
#include "Bein.pov"
// Die Figur guckt nach unten links
// x1 geht nach hinten rechts
// x2 nach oben
// x3 nach hinten links
camera {
	location <-25, 25, -25>
	look_at 0
	angle 25
}

plane{y, 0
	pigment{
		checker colour Yellow color Green
		scale 20
		}
		finish {
			ambient 0.2
			diffuse 0.8
		}
}

light_source {
	<500,500,-1000> White
}


	#declare erstesBeinpaar = merge {object{Bein translate<0,0,0>}
	object{Bein translate<0,0,1>}
	}
	object{Bein translate<0,0,3>}
	object{Bein translate<0,0,4>}
	
	object{Bein translate<0,0,6>}
	object{Bein translate<0,0,7>}	
	
	object{Bein translate<0,0,9>}
	object{Bein translate<0,0,10>}


object{erstesBeinpaar translate clock *x*-8}


