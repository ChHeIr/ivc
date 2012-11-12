#include "colors.inc"

// Die Figur guckt nach unten links
// x1 geht nach hinten rechts
// x2 nach oben
// x3 nach hinten links
camera {
	location <-25, 25, -25>
	look_at 0
	angle 36
}

light_source {
	<500,500,-1000> White
}

// Bein
merge {
	// Fuss
	box {
		0,
		<0.8, 0.3, 0.7>
		pigment {
			color Yellow
		}
	}

	// Bein
	box {
		<0.25, 0.3, 0>
		<0.8, 1.4, 0.7>
		pigment {
			color Yellow
		}
	}

	// Arsch
	cone {
		<0.8 - 0.35, 0, -1.4>
		0.35
		<0.8 - 0.35, 0.7, -1.4>
		0.35
		pigment {
			color Yellow
		}
		rotate <90, 0, 0>
	}
}