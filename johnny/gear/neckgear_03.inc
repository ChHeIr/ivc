// Generated by L3P v1.3 20010120  (C) 1998-2001 Lars C. Hassing  lch@ccieurope.com
// WWW: http://home16.inet.tele.dk/hassing/l3p.html
// WWW: http://www.ldraw.org/download/software/l3p
// Date: Fri Apr 14 09:37:03 2006
// Input file: LPub\LDraw\minifig_neckwear01.ldr
// ModelDir: LPub\LDraw\
// LDRAWDIR: C:\Programs\LDraw
// Commandline: l3p.exe -stdout -ca30.000000 -q2 -b0x02ffffff -o LPub\LDraw\minifig_neckwear01.ldr LPub\POV\minifig_neckwear01.pov


#declare QUAL = 2;  // Quality level, 0=BBox, 1=no refr, 2=normal, 3=studlogo

#declare SW = 0.5;  // Width of seam between two bricks

#declare STUDS = 1;  // 1=on 0=off

#declare BUMPS = 0;  // 1=on 0=off


#declare BUMPNORMAL = normal { bumps 0.01 scale 20 }
#declare AMB = 0.4;
#declare DIF = 0.4;


#declare O7071 = sqrt(0.5);

#declare L3Logo = union {
	sphere {<-59,0,-96>,6}
	cylinder {<-59,0,-96>,<59,0,-122>,6 open}
	sphere {<59,0,-122>,6}
	cylinder {<59,0,-122>,<59,0,-84>,6 open}
	sphere {<59,0,-84>,6}

	sphere {<-59,0,-36>,6}
	cylinder {<-59,0,-36>,<-59,0,1>,6 open}
	sphere {<-59,0,1>,6}
	cylinder {<0,0,-49>,<0,0,-25>,6 open}
	sphere {<0,0,-25>,6}
	sphere {<59,0,-62>,6}
	cylinder {<59,0,-62>,<59,0,-24>,6 open}
	sphere {<59,0,-24>,6}
	cylinder {<-59,0,-36>,<59,0,-62>,6 open}

	sphere {<-35.95,0,57>,6}
	torus {18.45,6 clipped_by{plane{<40,0,-9>,0}} translate<-40,0,39>}
	cylinder {<-44.05,0,21>,<35.95,0,3>,6 open}
	torus {18.45,6 clipped_by{plane{<-40,0,9>,0}} translate<40,0,21>}
	cylinder {<44.05,0,39>,<0,0,49>,6 open}
	sphere {<0,0,49>,6}
	cylinder {<0,0,49>,<0,0,34>,6 open}
	sphere {<0,0,34>,6}

	torus {18.45,6 clipped_by{plane{<40,0,-9>,0}} translate<-40,0,99>}
	cylinder {<-44.05,0,81>,<35.95,0,63>,6 open}
	torus {18.45,6 clipped_by{plane{<-40,0,9>,0}} translate<40,0,81>}
	cylinder {<44.05,0,99>,<-35.95,0,117>,6 open}

	scale 4.5/128
}


#ifndef (Color7)
#declare Color7 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.682353,0.682353,0.682353> }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end
#ifndef (GreyColor7)
#declare GreyColor7 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.682353,0.682353,0.682353>  }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end

#ifndef (Color0)
#declare Color0 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.301961,0.301961,0.301961> }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end
#ifndef (GreyColor0)
#declare GreyColor0 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.301961,0.301961,0.301961>  }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end

#declare _2_dash_4ring4_dot_dat = #if (version >= 3.1)
	disc {
		<0,0,0>, <0,1,0>, 5, 4
		clipped_by { box { <-6,-1,0>, <6,1,6> } }
	}
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 5 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 4 }
		clipped_by { box { <-6,-0.01,0>, <6,0.01,6> } }
	}
#end

#declare _4_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open }

#declare _2_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open clipped_by { box { <-2,-1,0>,<2,2,2> } } }

#declare _2_dash_4ring2_dot_dat = #if (version >= 3.1)
	disc {
		<0,0,0>, <0,1,0>, 3, 2
		clipped_by { box { <-4,-1,0>, <4,1,4> } }
	}
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 3 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 2 }
		clipped_by { box { <-4,-0.01,0>, <4,0.01,4> } }
	}
#end

#declare _2_dash_4ndis_dot_dat = #if (version >= 3.1)
	disc {
		<0,0,0>, <0,1,0>, 2, 1
		clipped_by { box { <-1,-1,0>, <1,1,1> } }
	}
#else
	difference {
		box { <-1,-0.001,0>, <1,0.001,1> }
		cylinder { <0,-1,0>, <0,1,0>, 1 }
	}
#end

#declare _1_dash_8sphe_dot_dat = sphere { <0,0,0>, 1 clipped_by { box { <0,0,0>, <2,2,2> } } }

#declare _1_dash_4con7_dot_dat = cone { <0,0,0>, 8, <0,1,0>, 7 open clipped_by { box { <0,-1,0>,<9,2,9> } } }

#declare _6132_dot_dat = #if (QUAL = 0) box { <-15,-14.5,-19>, <15,31,11.537> } #else union {
// Minifig Hair Beard
// Name: 6132.dat
// Author: Andrew Westrate
// LDRAW_ORG Part UPDATE 2002-06
// CATEGORY Minifig Accessory
// KEYWORDS Castle, Dragon Masters, Ninja, Harry Potter
// KEYWORDS Santa Claus, Kris Kringle, St Nick, Father Christmas
// KEYWORDS wizard, Majisto, Albus Dumbledore
// BFC NOCERTIFY
	mesh {
		triangle { <0,2.5,-18.5>, <0,9.5,-19>, <2,3.5,-18.5> }
		triangle { <3,5.25,-18.5>, <0,9.5,-19>, <2,3.5,-18.5> }
// Neck
	}
	object { _2_dash_4ring4_dot_dat matrix <2,0,0,0,1,0,0,0,2,0,0,0> }
	object { _2_dash_4ring4_dot_dat matrix <2.2,0,0,0,1,0,0,0,2.2,0,0,0> }
	object { _4_dash_4cyli_dot_dat matrix <-8,0,0,0,3,0,0,0,-8,0,-3,0> }
	object { _2_dash_4cyli_dot_dat matrix <-15,0,0,0,-4.172,0,0,0,8,0,0,3.536> }
	object { _2_dash_4ring2_dot_dat matrix <-5,0,0,0,1,0,0,0,2.667,0,0,3.536> }
	mesh {
		triangle { <-8,0,-8>, <8,0,-8>, <12,0,-10> }
		triangle { <12,0,-10>, <-12,0,-10>, <-8,0,-8> }
	}
	object { _2_dash_4ndis_dot_dat matrix <-8,0,0,0,1,0,0,0,-8,0,0,0> }
	mesh {
		triangle { <3.061,-3,-7.391>, <4.415,-4.172,-10.658>, <8.157,-4.172,-8.157> }
		triangle { <8.157,-4.172,-8.157>, <5.657,-3,-5.657>, <3.061,-3,-7.391> }
		triangle { <5.657,-3,-5.657>, <8.157,-4.172,-8.157>, <10.658,-4.172,-4.415> }
		triangle { <10.658,-4.172,-4.415>, <7.391,-3,-3.061>, <5.657,-3,-5.657> }
		triangle { <7.391,-3,-3.061>, <10.658,-4.172,-4.415>, <11.536,-4.172,0> }
		triangle { <11.536,-4.172,0>, <8,-3,0>, <7.391,-3,-3.061> }
		triangle { <8,-3,0>, <11.536,-4.172,0>, <10.658,-4.172,4.415> }
		triangle { <10.658,-4.172,4.415>, <7.391,-3,3.061>, <8,-3,0> }
		triangle { <7.391,-3,3.061>, <10.658,-4.172,4.415>, <8.157,-4.172,8.157> }
		triangle { <8.157,-4.172,8.157>, <5.657,-3,5.657>, <7.391,-3,3.061> }
		triangle { <5.657,-3,5.657>, <8.157,-4.172,8.157>, <4.415,-4.172,10.658> }
		triangle { <4.415,-4.172,10.658>, <3.061,-3,7.391>, <5.657,-3,5.657> }
		triangle { <3.061,-3,7.391>, <4.415,-4.172,10.658>, <0,-4.172,11.536> }
		triangle { <0,-4.172,11.536>, <0,-3,8>, <3.061,-3,7.391> }
		triangle { <0,-3,8>, <0,-4.172,11.536>, <-4.415,-4.172,10.658> }
		triangle { <-4.415,-4.172,10.658>, <-3.061,-3,7.391>, <0,-3,8> }
		triangle { <-3.061,-3,7.391>, <-4.415,-4.172,10.658>, <-8.157,-4.172,8.157> }
		triangle { <-8.157,-4.172,8.157>, <-5.657,-3,5.657>, <-3.061,-3,7.391> }
		triangle { <-5.657,-3,5.657>, <-8.157,-4.172,8.157>, <-10.658,-4.172,4.415> }
		triangle { <-10.658,-4.172,4.415>, <-7.391,-3,3.061>, <-5.657,-3,5.657> }
		triangle { <-7.391,-3,3.061>, <-10.658,-4.172,4.415>, <-11.536,-4.172,0> }
		triangle { <-11.536,-4.172,0>, <-8,-3,0>, <-7.391,-3,3.061> }
		triangle { <-8,-3,0>, <-11.536,-4.172,0>, <-10.658,-4.172,-4.415> }
		triangle { <-10.658,-4.172,-4.415>, <-7.391,-3,-3.061>, <-8,-3,0> }
		triangle { <-7.391,-3,-3.061>, <-10.658,-4.172,-4.415>, <-8.157,-4.172,-8.157> }
		triangle { <-8.157,-4.172,-8.157>, <-5.657,-3,-5.657>, <-7.391,-3,-3.061> }
		triangle { <-5.657,-3,-5.657>, <-8.157,-4.172,-8.157>, <-4.415,-4.172,-10.658> }
		triangle { <-4.415,-4.172,-10.658>, <-3.061,-3,-7.391>, <-5.657,-3,-5.657> }
		triangle { <-3.061,-3,-7.391>, <-4.415,-4.172,-10.658>, <0,-4.172,-11.536> }
		triangle { <0,-4.172,-11.536>, <0,-3,-8>, <-3.061,-3,-7.391> }
		triangle { <0,-3,-8>, <0,-4.172,-11.536>, <4.415,-4.172,-10.658> }
		triangle { <4.415,-4.172,-10.658>, <3.061,-3,-7.391>, <0,-3,-8> }
		triangle { <4.415,-4.172,-10.658>, <4.975,-7,-12.01>, <9.192,-7,-9.192> }
		triangle { <9.192,-7,-9.192>, <8.157,-4.172,-8.157>, <4.415,-4.172,-10.658> }
		triangle { <8.157,-4.172,-8.157>, <9.192,-7,-9.192>, <12.01,-7,-4.975> }
		triangle { <12.01,-7,-4.975>, <10.658,-4.172,-4.415>, <8.157,-4.172,-8.157> }
		triangle { <10.658,-4.172,-4.415>, <12.01,-7,-4.975>, <13,-7,0> }
		triangle { <13,-7,0>, <11.536,-4.172,0>, <10.658,-4.172,-4.415> }
		triangle { <-11.536,-4.172,0>, <-13,-7,0>, <-12.01,-7,-4.975> }
		triangle { <-12.01,-7,-4.975>, <-10.658,-4.172,-4.415>, <-11.536,-4.172,0> }
		triangle { <-10.658,-4.172,-4.415>, <-12.01,-7,-4.975>, <-9.192,-7,-9.192> }
		triangle { <-9.192,-7,-9.192>, <-8.157,-4.172,-8.157>, <-10.658,-4.172,-4.415> }
		triangle { <-8.157,-4.172,-8.157>, <-9.192,-7,-9.192>, <-4.975,-7,-12.01> }
		triangle { <-4.975,-7,-12.01>, <-4.415,-4.172,-10.658>, <-8.157,-4.172,-8.157> }
		triangle { <-4.415,-4.172,-10.658>, <-4.975,-7,-12.01>, <0,-7,-13> }
		triangle { <0,-7,-13>, <0,-4.172,-11.536>, <-4.415,-4.172,-10.658> }
		triangle { <4.415,-4.172,-10.658>, <4.975,-7,-12.01>, <0,-7,-13> }
		triangle { <0,-7,-13>, <0,-4.172,-11.536>, <4.415,-4.172,-10.658> }
		triangle { <-9,0,-10>, <-9,7,-10>, <9,7,-10> }
		triangle { <9,7,-10>, <9,0,-10>, <-9,0,-10> }
		triangle { <-7.5,17,-10>, <-8.5,16.5,-10>, <-9.5,15,-10> }
		triangle { <-9.5,15,-10>, <-9,7,-10>, <-7.5,17,-10> }
		triangle { <7.5,17,-10>, <8.5,16.5,-10>, <9.5,15,-10> }
		triangle { <9.5,15,-10>, <9,7,-10>, <7.5,17,-10> }
		triangle { <-7.5,17,-10>, <-7.5,20,-10>, <7.5,20,-10> }
		triangle { <7.5,20,-10>, <7.5,17,-10>, <-7.5,17,-10> }
		triangle { <-7.5,20,-10>, <-7.75,22,-10>, <7.75,22,-10> }
		triangle { <7.75,22,-10>, <7.5,20,-10>, <-7.5,20,-10> }
		triangle { <-7.75,22,-10>, <7.75,22,-10>, <0,27,-10> }
		triangle { <10,28,-10>, <10,30,-10>, <9,31,-10> }
		triangle { <9,31,-10>, <6,31,-10>, <10,28,-10> }
		triangle { <7.75,22,-10>, <8.75,25,-10>, <1.75,28,-10> }
		triangle { <1.75,28,-10>, <0,27,-10>, <7.75,22,-10> }
		triangle { <1.75,28,-10>, <6,31,-10>, <10,28,-10> }
		triangle { <10,28,-10>, <8.75,25,-10>, <1.75,28,-10> }
		triangle { <-10,28,-10>, <-10,30,-10>, <-9,31,-10> }
		triangle { <-9,31,-10>, <-6,31,-10>, <-10,28,-10> }
		triangle { <-7.75,22,-10>, <-8.75,25,-10>, <-1.75,28,-10> }
		triangle { <-1.75,28,-10>, <0,27,-10>, <-7.75,22,-10> }
		triangle { <-1.75,28,-10>, <-6,31,-10>, <-10,28,-10> }
		triangle { <-10,28,-10>, <-8.75,25,-10>, <-1.75,28,-10> }
		triangle { <9,7,-10>, <-9,7,-10>, <-7.5,17,-10> }
		triangle { <-7.5,17,-10>, <7.5,17,-10>, <9,7,-10> }
		triangle { <9,0,-10>, <9,7,-10>, <11,6.5,-10> }
		triangle { <11,6.5,-10>, <12,0,-10>, <9,0,-10> }
		triangle { <12,0,-14.5>, <11,6.5,-14.5>, <11,6.5,-10> }
		triangle { <11,6.5,-10>, <12,0,-10>, <12,0,-14.5> }
		triangle { <9,7,-15>, <11,6.5,-14.5>, <11,6.5,-10> }
		triangle { <11,6.5,-10>, <9,7,-10>, <9,7,-15> }
		triangle { <-9,0,-10>, <-9,7,-10>, <-11,6.5,-10> }
		triangle { <-11,6.5,-10>, <-12,0,-10>, <-9,0,-10> }
		triangle { <-12,0,-14.5>, <-11,6.5,-14.5>, <-11,6.5,-10> }
		triangle { <-11,6.5,-10>, <-12,0,-10>, <-12,0,-14.5> }
		triangle { <-9,7,-15>, <-11,6.5,-14.5>, <-11,6.5,-10> }
		triangle { <-11,6.5,-10>, <-9,7,-10>, <-9,7,-15> }
		triangle { <0,-7,-16.9375>, <2,-7,-17.5>, <0,-4,-15> }
		triangle { <0,-7,-16.9375>, <-2,-7,-17.5>, <0,-4,-15> }
		triangle { <3.75,-5.75,-17.25>, <2,-7,-17.5>, <0,-4,-15> }
		triangle { <-3.75,-5.75,-17.25>, <-2,-7,-17.5>, <0,-4,-15> }
		triangle { <-3.75,-5.75,-17.25>, <-3,-3,-15>, <0,-4,-15> }
		triangle { <-3.75,-5.75,-17.25>, <-3,-3,-15>, <-6.75,-3.25,-17> }
		triangle { <-6,0,-15>, <-3,-3,-15>, <-6.75,-3.25,-17> }
		triangle { <-6,0,-15>, <-8.75,0,-16>, <-6.75,-3.25,-17> }
		triangle { <-6,0,-15>, <-8.75,0,-16>, <-8.25,4,-15> }
		triangle { <-10,6.5,-15.25>, <-8.75,0,-16>, <-8.25,4,-15> }
		triangle { <-10,6.5,-15.25>, <-8.75,0,-16>, <-11,6.5,-14.5> }
		triangle { <-10.5,0,-15.5>, <-8.75,0,-16>, <-11,6.5,-14.5> }
		triangle { <-10.5,0,-15.5>, <-12,0,-14.5>, <-11,6.5,-14.5> }
		triangle { <-10,6.5,-15.25>, <-9,7,-15>, <-8.25,4,-15> }
		triangle { <-10,6.5,-15.25>, <-9,7,-15>, <-11,6.5,-14.5> }
		triangle { <3.75,-5.75,-17.25>, <3,-3,-15>, <0,-4,-15> }
		triangle { <0,-2,-17>, <3,-3,-15>, <0,-4,-15> }
		triangle { <0,-2,-17>, <-3,-3,-15>, <0,-4,-15> }
		triangle { <3.75,-5.75,-17.25>, <3,-3,-15>, <6.75,-3.25,-17> }
		triangle { <6,0,-15>, <3,-3,-15>, <6.75,-3.25,-17> }
		triangle { <6,0,-15>, <3,-3,-15>, <0,-2,-17> }
		triangle { <6,0,-15>, <5,3.5,-18.75>, <0,-2,-17> }
		triangle { <-6,0,-15>, <-3.75,2.25,-18.75>, <0,-2,-17> }
		triangle { <-6,0,-15>, <-3.75,2.25,-18.75>, <-8.25,4,-15> }
		triangle { <-9,7,-15>, <-3.75,2.25,-18.75>, <-8.25,4,-15> }
		triangle { <-9,7,-15>, <-3.75,2.25,-18.75>, <-9.5,15,-15> }
		triangle { <-8.5,15.25,-15.75>, <-3.75,2.25,-18.75>, <-9.5,15,-15> }
		triangle { <-8.5,15.25,-15.75>, <-3.75,2.25,-18.75>, <-7.5,17,-15.5> }
		triangle { <-8.5,15.25,-15.75>, <-8.5,16.5,-15>, <-7.5,17,-15.5> }
		triangle { <-8.5,15.25,-15.75>, <-8.5,16.5,-15>, <-9.5,15,-15> }
		triangle { <-0.5,2.75,-18>, <-3.75,2.25,-18.75>, <-7.5,17,-15.5> }
		triangle { <-0.5,2.75,-18>, <-3.5,19.25,-18.5>, <-7.5,17,-15.5> }
		triangle { <-0.5,2.75,-18>, <-3.5,19.25,-18.5>, <-0.75,24,-17> }
		triangle { <-7,27,-15>, <-3.5,19.25,-18.5>, <-0.75,24,-17> }
		triangle { <-7,27,-15>, <-3.5,19.25,-18.5>, <-7.5,20,-15> }
		triangle { <-7,27,-15>, <-7.75,22,-14.5>, <-7.5,20,-15> }
		triangle { <-7,27,-15>, <-7.75,22,-14.5>, <-8.75,25,-14> }
		triangle { <-7,27,-15>, <-10,28,-13>, <-8.75,25,-14> }
		triangle { <-7,27,-15>, <-10,28,-13>, <-10,30,-12> }
		triangle { <-7,27,-15>, <-9,31,-12>, <-10,30,-12> }
		triangle { <-7,27,-15>, <-9,31,-12>, <-6,31,-12> }
		triangle { <-7,27,-15>, <-0.75,24,-17>, <-6,31,-12> }
		triangle { <-0.75,24,-17>, <-1.75,28,-13>, <0,27,-15> }
		triangle { <-6,31,-12>, <-0.75,24,-17>, <-1.75,28,-13> }
		triangle { <-7.5,17,-15.5>, <-3.5,19.25,-18.5>, <-7.5,20,-15> }
		triangle { <0,-2,-17>, <0,1,-18.5>, <-3.75,2.25,-18.75> }
		triangle { <0,2.5,-18.5>, <0,1,-18.5>, <-0.5,2.75,-18> }
		triangle { <0,2.5,-18.5>, <0,9.5,-19>, <-0.5,2.75,-18> }
		triangle { <-0.75,24,-17>, <0,9.5,-19>, <-0.5,2.75,-18> }
		triangle { <-0.75,24,-17>, <0,9.5,-19>, <0,20,-18.25> }
		triangle { <-0.75,24,-17>, <0,24,-17>, <0,20,-18.25> }
		triangle { <-0.75,24,-17>, <0,24,-17>, <0,27,-15> }
		triangle { <-3.75,2.25,-18.75>, <0,1,-18.5>, <-0.5,2.75,-18> }
		triangle { <0,-2,-17>, <0,1,-18.5>, <5,3.5,-18.75> }
		triangle { <2,3.5,-18.5>, <0,1,-18.5>, <5,3.5,-18.75> }
		triangle { <2,3.5,-18.5>, <3,5.25,-18.5>, <5,3.5,-18.75> }
		triangle { <0,2.5,-18.5>, <0,1,-18.5>, <2,3.5,-18.5> }
		triangle { <-6,0,-15>, <-3,-3,-15>, <0,-2,-17> }
		triangle { <6,0,-15>, <8.75,0,-16>, <6.75,-3.25,-17> }
		triangle { <6,0,-15>, <8.75,0,-16>, <8.25,4,-15> }
		triangle { <6,0,-15>, <5,3.5,-18.75>, <8.25,4,-15> }
		triangle { <10,6.5,-15.25>, <8.75,0,-16>, <8.25,4,-15> }
		triangle { <10,6.5,-15.25>, <8.75,0,-16>, <11,6.5,-14.5> }
		triangle { <10.5,0,-15.5>, <8.75,0,-16>, <11,6.5,-14.5> }
		triangle { <10.5,0,-15.5>, <12,0,-14.5>, <11,6.5,-14.5> }
		triangle { <10,6.5,-15.25>, <9,7,-15>, <8.25,4,-15> }
		triangle { <5,3.5,-18.75>, <9,7,-15>, <8.25,4,-15> }
		triangle { <5,3.5,-18.75>, <9,7,-15>, <9.5,15,-15> }
		triangle { <9.5,15,-15>, <5,3.5,-18.75>, <8.5,15.25,-15.75> }
		triangle { <9.5,15,-15>, <8.5,16.5,-15>, <8.5,15.25,-15.75> }
		triangle { <7.5,17,-15.5>, <8.5,16.5,-15>, <8.5,15.25,-15.75> }
		triangle { <7.5,17,-15.5>, <5,3.5,-18.75>, <8.5,15.25,-15.75> }
		triangle { <5,3.5,-18.75>, <3,5.25,-18.5>, <7.5,17,-15.5> }
		triangle { <0,9.5,-19>, <3,5.25,-18.5>, <7.5,17,-15.5> }
		triangle { <0,9.5,-19>, <0,20,-18.25>, <7.5,17,-15.5> }
		triangle { <7.5,20,-15>, <0,20,-18.25>, <7.5,17,-15.5> }
		triangle { <7.5,20,-15>, <0,20,-18.25>, <7.75,22,-14.5> }
		triangle { <0,20,-18.25>, <7.75,22,-14.5>, <0,24,-17> }
		triangle { <8.75,25,-14>, <7.75,22,-14.5>, <0,24,-17> }
		triangle { <8.75,25,-14>, <0.75,27,-16>, <0,24,-17> }
		triangle { <8.75,25,-14>, <0.75,27,-16>, <10,28,-13> }
		triangle { <9,31,-12>, <0.75,27,-16>, <10,28,-13> }
		triangle { <10,30,-12>, <10,28,-13>, <9,31,-12> }
		triangle { <6,31,-12>, <0.75,27,-16>, <9,31,-12> }
		triangle { <6,31,-12>, <0.75,27,-16>, <1.75,28,-13> }
		triangle { <0,27,-15>, <0.75,27,-16>, <1.75,28,-13> }
		triangle { <0,27,-15>, <0.75,27,-16>, <0,24,-17> }
		triangle { <10,6.5,-15.25>, <9,7,-15>, <11,6.5,-14.5> }
// Moustache
	}
	object { _1_dash_8sphe_dot_dat matrix <8,0,0,0,0,-4.5,0,-5,0,2,-7,-13> }
	mesh {
		triangle { <9.1923,-8.9135,-9.1923>, <9.1923,-7,-9.1923>, <10,-7,-7.9> }
		triangle { <0,-11.375,-13>, <2,-12,-12.6>, <2,-7,-12.6> }
		triangle { <2,-7,-12.6>, <0,-7,-13>, <0,-11.375,-13> }
		triangle { <2,-12,-12.6>, <4.9751,-11.6195,-12.0107>, <4.9751,-7,-12.0107> }
		triangle { <4.9751,-7,-12.0107>, <2,-7,-12.6>, <2,-12,-12.6> }
		triangle { <4.9751,-11.6195,-12.0107>, <7.6568,-10.5355,-10.22>, <7.6568,-7,-10.22> }
		triangle { <7.6568,-7,-10.22>, <4.9751,-7,-12.0107>, <4.9751,-11.6195,-12.0107> }
		triangle { <7.6568,-10.5355,-10.22>, <9.1923,-8.9135,-9.1923>, <9.1923,-7,-9.1923> }
		triangle { <9.1923,-7,-9.1923>, <7.6568,-7,-10.22>, <7.6568,-10.5355,-10.22> }
		triangle { <10,-7,-7.9>, <9.1923,-8.9135,-9.1923>, <9.3912,-8.9135,-13> }
		triangle { <9.1923,-8.9135,-9.1923>, <7.6568,-10.5355,-10.22>, <7.6568,-10.5355,-13> }
		triangle { <7.6568,-10.5355,-10.22>, <5.0616,-11.6195,-11.95>, <5.0616,-11.6195,-13> }
		triangle { <5.0616,-11.6195,-11.95>, <2,-12,-12.6>, <2,-12,-13> }
		triangle { <10,-7,-13>, <9.3912,-8.9135,-13>, <10,-7,-7.9> }
		triangle { <9.3912,-8.9135,-13>, <7.6568,-10.5355,-13>, <9.1923,-8.9135,-9.1923> }
		triangle { <7.6568,-10.5355,-13>, <5.0616,-11.6195,-13>, <7.6568,-10.5355,-10.22> }
		triangle { <5.0616,-11.6195,-13>, <2,-12,-13>, <5.0616,-11.6195,-11.95> }
		triangle { <0,-11.375,-13>, <2,-12,-13>, <2,-12,-12.6> }
	}
	object { _1_dash_4con7_dot_dat matrix <0,-0.625,0,-2,0,0,0,0,-0.5625,2,-7,-13> }
	mesh {
		triangle { <12,0,-14.5>, <10,-7,-13>, <9.3912,-7,-14.7221> }
		triangle { <10.5,0,-15.5>, <12,0,-14.5>, <9.3912,-7,-14.7221> }
		triangle { <10.5,0,-15.5>, <6.75,-3.25,-17>, <7.6568,-7,-16.1819> }
		triangle { <10.5,0,-15.5>, <7.6568,-7,-16.1819>, <9.3912,-7,-14.7221> }
		triangle { <10.5,0,-15.5>, <6.75,-3.25,-17>, <8.75,0,-16> }
		triangle { <7.6568,-7,-16.1819>, <5.0616,-7,-17.1576>, <6.75,-3.25,-17> }
		triangle { <5.0616,-7,-17.1576>, <2,-7,-17.5>, <3.75,-5.75,-17.25> }
		triangle { <5.0616,-7,-17.1576>, <6.75,-3.25,-17>, <3.75,-5.75,-17.25> }
	}
	object { _1_dash_8sphe_dot_dat matrix <-8,0,0,0,0,-4.5,0,-5,0,-2,-7,-13> }
	mesh {
		triangle { <-9.1923,-8.9135,-9.1923>, <-9.1923,-7,-9.1923>, <-10,-7,-7.9> }
		triangle { <0,-11.375,-13>, <-2,-12,-12.6>, <-2,-7,-12.6> }
		triangle { <-2,-7,-12.6>, <0,-7,-13>, <0,-11.375,-13> }
		triangle { <-2,-12,-12.6>, <-4.9751,-11.6195,-12.0107>, <-4.9751,-7,-12.0107> }
		triangle { <-4.9751,-7,-12.0107>, <-2,-7,-12.6>, <-2,-12,-12.6> }
		triangle { <-4.9751,-11.6195,-12.0107>, <-7.6568,-10.5355,-10.22>, <-7.6568,-7,-10.22> }
		triangle { <-7.6568,-7,-10.22>, <-4.9751,-7,-12.0107>, <-4.9751,-11.6195,-12.0107> }
		triangle { <-7.6568,-10.5355,-10.22>, <-9.1923,-8.9135,-9.1923>, <-9.1923,-7,-9.1923> }
		triangle { <-9.1923,-7,-9.1923>, <-7.6568,-7,-10.22>, <-7.6568,-10.5355,-10.22> }
		triangle { <-10,-7,-7.9>, <-9.1923,-8.9135,-9.1923>, <-9.3912,-8.9135,-13> }
		triangle { <-9.1923,-8.9135,-9.1923>, <-7.6568,-10.5355,-10.22>, <-7.6568,-10.5355,-13> }
		triangle { <-7.6568,-10.5355,-10.22>, <-5.0616,-11.6195,-11.95>, <-5.0616,-11.6195,-13> }
		triangle { <-5.0616,-11.6195,-11.95>, <-2,-12,-12.6>, <-2,-12,-13> }
		triangle { <-10,-7,-13>, <-9.3912,-8.9135,-13>, <-10,-7,-7.9> }
		triangle { <-9.3912,-8.9135,-13>, <-7.6568,-10.5355,-13>, <-9.1923,-8.9135,-9.1923> }
		triangle { <-7.6568,-10.5355,-13>, <-5.0616,-11.6195,-13>, <-7.6568,-10.5355,-10.22> }
		triangle { <-5.0616,-11.6195,-13>, <-2,-12,-13>, <-5.0616,-11.6195,-11.95> }
		triangle { <0,-11.375,-13>, <-2,-12,-13>, <-2,-12,-12.6> }
	}
	object { _1_dash_4con7_dot_dat matrix <0,-0.625,0,2,0,0,0,0,-0.5625,-2,-7,-13> }
	mesh {
		triangle { <-12,0,-14.5>, <-10,-7,-13>, <-9.3912,-7,-14.7221> }
		triangle { <-10.5,0,-15.5>, <-12,0,-14.5>, <-9.3912,-7,-14.7221> }
		triangle { <-10.5,0,-15.5>, <-6.75,-3.25,-17>, <-7.6568,-7,-16.1819> }
		triangle { <-10.5,0,-15.5>, <-7.6568,-7,-16.1819>, <-9.3912,-7,-14.7221> }
		triangle { <-10.5,0,-15.5>, <-6.75,-3.25,-17>, <-8.75,0,-16> }
		triangle { <-7.6568,-7,-16.1819>, <-5.0616,-7,-17.1576>, <-6.75,-3.25,-17> }
		triangle { <-5.0616,-7,-17.1576>, <-2,-7,-17.5>, <-3.75,-5.75,-17.25> }
		triangle { <-5.0616,-7,-17.1576>, <-6.75,-3.25,-17>, <-3.75,-5.75,-17.25> }
// Outer edge of beard
		triangle { <9,7,-15>, <9.5,15,-15>, <9.5,15,-10> }
		triangle { <9.5,15,-10>, <9,7,-10>, <9,7,-15> }
		triangle { <8.5,16.5,-15>, <9.5,15,-15>, <9.5,15,-10> }
		triangle { <9.5,15,-10>, <8.5,16.5,-10>, <8.5,16.5,-15> }
		triangle { <8.5,16.5,-15>, <7.5,17,-15.5>, <7.5,17,-10> }
		triangle { <7.5,17,-10>, <8.5,16.5,-10>, <8.5,16.5,-15> }
		triangle { <7.5,17,-15.5>, <7.5,20,-15>, <7.5,20,-10> }
		triangle { <7.5,20,-10>, <7.5,17,-10>, <7.5,17,-15.5> }
		triangle { <7.5,20,-15>, <7.75,22,-14.5>, <7.75,22,-10> }
		triangle { <7.75,22,-10>, <7.5,20,-10>, <7.5,20,-15> }
		triangle { <7.75,22,-14.5>, <8.75,25,-14>, <8.75,25,-10> }
		triangle { <8.75,25,-10>, <7.75,22,-10>, <7.75,22,-14.5> }
		triangle { <8.75,25,-10>, <10,28,-10>, <10,28,-13> }
		triangle { <10,28,-13>, <8.75,25,-14>, <8.75,25,-10> }
		triangle { <10,30,-10>, <10,28,-10>, <10,28,-13> }
		triangle { <10,28,-13>, <10,30,-12>, <10,30,-10> }
		triangle { <10,30,-10>, <9,31,-10>, <9,31,-12> }
		triangle { <9,31,-12>, <10,30,-12>, <10,30,-10> }
		triangle { <6,31,-10>, <9,31,-10>, <9,31,-12> }
		triangle { <9,31,-12>, <6,31,-12>, <6,31,-10> }
		triangle { <6,31,-10>, <1.75,28,-10>, <1.75,28,-13> }
		triangle { <1.75,28,-13>, <6,31,-12>, <6,31,-10> }
		triangle { <0,27,-10>, <1.75,28,-10>, <1.75,28,-13> }
		triangle { <1.75,28,-13>, <0,27,-15>, <0,27,-10> }
		triangle { <-9,7,-15>, <-9.5,15,-15>, <-9.5,15,-10> }
		triangle { <-9.5,15,-10>, <-9,7,-10>, <-9,7,-15> }
		triangle { <-8.5,16.5,-15>, <-9.5,15,-15>, <-9.5,15,-10> }
		triangle { <-9.5,15,-10>, <-8.5,16.5,-10>, <-8.5,16.5,-15> }
		triangle { <-8.5,16.5,-15>, <-7.5,17,-15.5>, <-7.5,17,-10> }
		triangle { <-7.5,17,-10>, <-8.5,16.5,-10>, <-8.5,16.5,-15> }
		triangle { <-7.5,17,-15.5>, <-7.5,20,-15>, <-7.5,20,-10> }
		triangle { <-7.5,20,-10>, <-7.5,17,-10>, <-7.5,17,-15.5> }
		triangle { <-7.5,20,-15>, <-7.75,22,-14.5>, <-7.75,22,-10> }
		triangle { <-7.75,22,-10>, <-7.5,20,-10>, <-7.5,20,-15> }
		triangle { <-7.75,22,-14.5>, <-8.75,25,-14>, <-8.75,25,-10> }
		triangle { <-8.75,25,-10>, <-7.75,22,-10>, <-7.75,22,-14.5> }
		triangle { <-8.75,25,-10>, <-10,28,-10>, <-10,28,-13> }
		triangle { <-10,28,-13>, <-8.75,25,-14>, <-8.75,25,-10> }
		triangle { <-10,30,-10>, <-10,28,-10>, <-10,28,-13> }
		triangle { <-10,28,-13>, <-10,30,-12>, <-10,30,-10> }
		triangle { <-10,30,-10>, <-9,31,-10>, <-9,31,-12> }
		triangle { <-9,31,-12>, <-10,30,-12>, <-10,30,-10> }
		triangle { <-6,31,-10>, <-9,31,-10>, <-9,31,-12> }
		triangle { <-9,31,-12>, <-6,31,-12>, <-6,31,-10> }
		triangle { <-6,31,-10>, <-1.75,28,-10>, <-1.75,28,-13> }
		triangle { <-1.75,28,-13>, <-6,31,-12>, <-6,31,-10> }
		triangle { <0,27,-10>, <-1.75,28,-10>, <-1.75,28,-13> }
		triangle { <-1.75,28,-13>, <0,27,-15>, <0,27,-10> }
// Sideburns
		triangle { <14,-14.5,-5>, <13,-5,-7>, <12.0107,-14.5,-4.9751> }
		triangle { <14.75,0,0>, <14.75,-14.5,0>, <15,-4.172,3.536> }
		triangle { <14.75,0,0>, <15,0,3.536>, <15,-4.172,3.536> }
		triangle { <12,0,-10>, <13,0,-7>, <13,-5,-7> }
		triangle { <13,-5,-7>, <12,-5,-10>, <12,0,-10> }
		triangle { <12,-5,-10>, <11,-7,-6.49>, <13,-5,-7> }
		triangle { <12,-5,-10>, <11,-7,-6.49>, <10,-7,-7.9> }
		triangle { <8,0,0>, <8,0,-8>, <12,0,-10> }
		triangle { <12,0,-10>, <13,0,-7>, <8,0,0> }
		triangle { <8,0,0>, <14.75,0,0>, <14,0,-5> }
		triangle { <14,0,-5>, <13,0,-7>, <8,0,0> }
		triangle { <8,0,0>, <14.75,0,0>, <15,0,3.536> }
		triangle { <15,0,3.536>, <8,0,3.536>, <8,0,0> }
		triangle { <11,-7,-6.49>, <12.0107,-7,-4.9751>, <12.0107,-14.5,-4.9751> }
		triangle { <11,-7,-6.49>, <13,-5,-7>, <12.0107,-14.5,-4.9751> }
		triangle { <14,-14.5,-5>, <13,-5,-7>, <14,0,-5> }
		triangle { <13,0,-7>, <13,-5,-7>, <14,0,-5> }
		triangle { <12.0107,-14.5,-4.9751>, <13,-14.5,0>, <13,-7,0> }
		triangle { <13,-7,0>, <12.0107,-7,-4.9751>, <12.0107,-14.5,-4.9751> }
		triangle { <12.0107,-14.5,-4.9751>, <13,-14.5,0>, <14.75,-14.5,0> }
		triangle { <14.75,-14.5,0>, <14,-14.5,-5>, <12.0107,-14.5,-4.9751> }
		triangle { <14,0,-5>, <14.75,0,0>, <14.75,-14.5,0> }
		triangle { <14.75,-14.5,0>, <14,-14.5,-5>, <14,0,-5> }
		triangle { <13,-7,0>, <13,-14.5,0>, <12.0107,-7,4.9751> }
		triangle { <15,-4.172,3.536>, <13,-14.5,0>, <12.0107,-7,4.9751> }
		triangle { <15,-4.172,3.536>, <13.75,-4.172,6.75>, <12.0107,-7,4.9751> }
		triangle { <10.5,-4.172,9.286>, <13.75,-4.172,6.75>, <12.0107,-7,4.9751> }
		triangle { <10.5,-4.172,9.286>, <8.157,-4.172,8.157>, <12.0107,-7,4.9751> }
		triangle { <10.5,-4.172,9.286>, <8.157,-4.172,8.157>, <5.7607,-4.172,10.9751> }
		triangle { <4.415,-4.172,10.658>, <8.157,-4.172,8.157>, <5.7607,-4.172,10.9751> }
		triangle { <4.415,-4.172,10.658>, <0,-4.172,11.536>, <5.7607,-4.172,10.9751> }
		triangle { <15,-4.172,3.536>, <13,-14.5,0>, <14.75,-14.5,0> }
		triangle { <10.658,-4.172,4.415>, <12.01,-7,4.975>, <13,-7,0> }
		triangle { <13,-7,0>, <11.536,-4.172,0>, <10.658,-4.172,4.415> }
		triangle { <10.658,-4.172,4.415>, <12.0107,-7,4.9751>, <8.157,-4.172,8.157> }
		triangle { <10,-7,-13>, <12,-5,-10>, <10,-7,-7.9> }
		triangle { <10,-7,-13>, <12,-5,-10>, <12,0,-10> }
		triangle { <10,-7,-13>, <12,0,-14.5>, <12,0,-10> }
		triangle { <-14,-14.5,-5>, <-13,-5,-7>, <-12.0107,-14.5,-4.9751> }
		triangle { <-14.75,0,0>, <-14.75,-14.5,0>, <-15,-4.172,3.536> }
		triangle { <-14.75,0,0>, <-15,0,3.536>, <-15,-4.172,3.536> }
		triangle { <-12,0,-10>, <-13,0,-7>, <-13,-5,-7> }
		triangle { <-13,-5,-7>, <-12,-5,-10>, <-12,0,-10> }
		triangle { <-12,-5,-10>, <-11,-7,-6.49>, <-13,-5,-7> }
		triangle { <-12,-5,-10>, <-11,-7,-6.49>, <-10,-7,-7.9> }
		triangle { <-8,0,0>, <-8,0,-8>, <-12,0,-10> }
		triangle { <-12,0,-10>, <-13,0,-7>, <-8,0,0> }
		triangle { <-8,0,0>, <-14.75,0,0>, <-14,0,-5> }
		triangle { <-14,0,-5>, <-13,0,-7>, <-8,0,0> }
		triangle { <-8,0,0>, <-14.75,0,0>, <-15,0,3.536> }
		triangle { <-15,0,3.536>, <-8,0,3.536>, <-8,0,0> }
		triangle { <-11,-7,-6.49>, <-12.0107,-7,-4.9751>, <-12.0107,-14.5,-4.9751> }
		triangle { <-11,-7,-6.49>, <-13,-5,-7>, <-12.0107,-14.5,-4.9751> }
		triangle { <-14,-14.5,-5>, <-13,-5,-7>, <-14,0,-5> }
		triangle { <-13,0,-7>, <-13,-5,-7>, <-14,0,-5> }
		triangle { <-12.0107,-14.5,-4.9751>, <-13,-14.5,0>, <-13,-7,0> }
		triangle { <-13,-7,0>, <-12.0107,-7,-4.9751>, <-12.0107,-14.5,-4.9751> }
		triangle { <-12.0107,-14.5,-4.9751>, <-13,-14.5,0>, <-14.75,-14.5,0> }
		triangle { <-14.75,-14.5,0>, <-14,-14.5,-5>, <-12.0107,-14.5,-4.9751> }
		triangle { <-14,0,-5>, <-14.75,0,0>, <-14.75,-14.5,0> }
		triangle { <-14.75,-14.5,0>, <-14,-14.5,-5>, <-14,0,-5> }
		triangle { <-13,-7,0>, <-13,-14.5,0>, <-12.0107,-7,4.9751> }
		triangle { <-15,-4.172,3.536>, <-13,-14.5,0>, <-12.0107,-7,4.9751> }
		triangle { <-15,-4.172,3.536>, <-13.75,-4.172,6.75>, <-12.0107,-7,4.9751> }
		triangle { <-10.5,-4.172,9.286>, <-13.75,-4.172,6.75>, <-12.0107,-7,4.9751> }
		triangle { <-10.5,-4.172,9.286>, <-8.157,-4.172,8.157>, <-12.0107,-7,4.9751> }
		triangle { <-10.5,-4.172,9.286>, <-8.157,-4.172,8.157>, <-5.7607,-4.172,10.9751> }
		triangle { <-4.415,-4.172,10.658>, <-8.157,-4.172,8.157>, <-5.7607,-4.172,10.9751> }
		triangle { <-4.415,-4.172,10.658>, <0,-4.172,11.536>, <-5.7607,-4.172,10.9751> }
		triangle { <-15,-4.172,3.536>, <-13,-14.5,0>, <-14.75,-14.5,0> }
		triangle { <-10.658,-4.172,4.415>, <-12.01,-7,4.975>, <-13,-7,0> }
		triangle { <-13,-7,0>, <-11.536,-4.172,0>, <-10.658,-4.172,4.415> }
		triangle { <-10.658,-4.172,4.415>, <-12.0107,-7,4.9751>, <-8.157,-4.172,8.157> }
		triangle { <-10,-7,-13>, <-12,-5,-10>, <-10,-7,-7.9> }
		triangle { <-10,-7,-13>, <-12,-5,-10>, <-12,0,-10> }
		triangle { <-10,-7,-13>, <-12,0,-14.5>, <-12,0,-10> }
// 
	}
}
#end

#declare this_object = object {
// Untitled
// Name: minifig_neckwear01.ldr
// Author: MLCad
// Unofficial Model
// ROTATION CENTER 0 0 0 1 "Custom"
// ROTATION CONFIG 0 0
	object {
		_6132_dot_dat
		translate<0,2,0>
	}
// 
}


