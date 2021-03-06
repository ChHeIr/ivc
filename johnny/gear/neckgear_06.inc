// Generated by L3P v1.3 20010120  (C) 1998-2001 Lars C. Hassing  lch@ccieurope.com
// WWW: http://home16.inet.tele.dk/hassing/l3p.html
// WWW: http://www.ldraw.org/download/software/l3p
// Date: Sat Apr 15 23:06:46 2006
// Input file: LPub\LDraw\minifig_neckwear03.ldr
// ModelDir: LPub\LDraw\
// LDRAWDIR: C:\Programs\LDraw
// Commandline: l3p.exe -stdout -ca30.000000 -q2 -b0x02ffffff -o LPub\LDraw\minifig_neckwear03.ldr LPub\POV\minifig_neckwear03.pov


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

#declare _4_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open }

#declare _4_dash_4disc_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 1 }
#else
	cylinder { <0,-0.001,0>, <0,0.001,0>, 1 }
#end

#declare _4_dash_8sphe_dot_dat = sphere { <0,0,0>, 1 clipped_by { box { <-1,0,-1>, <2,2,2> } } }

#declare box_dot_dat = box { <-1,-1,-1>, <1,1,1> }

#declare _3838_dot_dat = #if (QUAL = 0) box { <-15,-14,-10>, <15,26,25> } #else union {
// Minifig Airtanks (needs work)
// Name: 3838.dat
// Author: Leonardo Zide
// Official LCad update 98-07
// use at y = -74
// needs some 5 lines on the torus
// torus
	mesh {
		triangle { <9.41,-1.41,0>, <8.7,-1.41,-3.6>, <9.24,0,-3.83> }
		triangle { <9.24,0,-3.83>, <10,0,0>, <9.41,-1.41,0> }
		triangle { <8,-2,0>, <7.39,-2,-3.06>, <8.7,-1.41,-3.6> }
		triangle { <8.7,-1.41,-3.6>, <9.41,-1.41,0>, <8,-2,0> }
		triangle { <6.59,-1.41,0>, <6.08,-1.41,-2.52>, <7.39,-2,-3.06> }
		triangle { <7.39,-2,-3.06>, <8,-2,0>, <6.59,-1.41,0> }
		triangle { <6,0,0>, <5.54,0,-2.3>, <6.08,-1.41,-2.52> }
		triangle { <6.08,-1.41,-2.52>, <6.59,-1.41,0>, <6,0,0> }
		triangle { <6.59,1.41,0>, <6.08,1.41,-2.52>, <5.54,0,-2.3> }
		triangle { <5.54,0,-2.3>, <6,0,0>, <6.59,1.41,0> }
		triangle { <8,2,0>, <7.39,2,-3.06>, <6.08,1.41,-2.52> }
		triangle { <6.08,1.41,-2.52>, <6.59,1.41,0>, <8,2,0> }
		triangle { <9.41,1.41,0>, <8.7,1.41,-3.6>, <7.39,2,-3.06> }
		triangle { <7.39,2,-3.06>, <8,2,0>, <9.41,1.41,0> }
		triangle { <10,0,0>, <9.24,0,-3.83>, <8.7,1.41,-3.6> }
		triangle { <8.7,1.41,-3.6>, <9.41,1.41,0>, <10,0,0> }
		triangle { <8.7,-1.41,-3.6>, <6.66,-1.41,-6.66>, <7.07,0,-7.07> }
		triangle { <7.07,0,-7.07>, <9.24,0,-3.83>, <8.7,-1.41,-3.6> }
		triangle { <7.39,-2,-3.06>, <5.66,-2,-5.66>, <6.66,-1.41,-6.66> }
		triangle { <6.66,-1.41,-6.66>, <8.7,-1.41,-3.6>, <7.39,-2,-3.06> }
		triangle { <6.08,-1.41,-2.52>, <4.66,-1.41,-4.66>, <5.66,-2,-5.66> }
		triangle { <5.66,-2,-5.66>, <7.39,-2,-3.06>, <6.08,-1.41,-2.52> }
		triangle { <5.54,0,-2.3>, <4.24,0,-4.24>, <4.66,-1.41,-4.66> }
		triangle { <4.66,-1.41,-4.66>, <6.08,-1.41,-2.52>, <5.54,0,-2.3> }
		triangle { <6.08,1.41,-2.52>, <4.66,1.41,-4.66>, <4.24,0,-4.24> }
		triangle { <4.24,0,-4.24>, <5.54,0,-2.3>, <6.08,1.41,-2.52> }
		triangle { <7.39,2,-3.06>, <5.66,2,-5.66>, <4.66,1.41,-4.66> }
		triangle { <4.66,1.41,-4.66>, <6.08,1.41,-2.52>, <7.39,2,-3.06> }
		triangle { <8.7,1.41,-3.6>, <6.66,1.41,-6.66>, <5.66,2,-5.66> }
		triangle { <5.66,2,-5.66>, <7.39,2,-3.06>, <8.7,1.41,-3.6> }
		triangle { <9.24,0,-3.83>, <7.07,0,-7.07>, <6.66,1.41,-6.66> }
		triangle { <6.66,1.41,-6.66>, <8.7,1.41,-3.6>, <9.24,0,-3.83> }
		triangle { <6.66,-1.41,-6.66>, <3.6,-1.41,-8.7>, <3.83,0,-9.24> }
		triangle { <3.83,0,-9.24>, <7.07,0,-7.07>, <6.66,-1.41,-6.66> }
		triangle { <5.66,-2,-5.66>, <3.06,-2,-7.39>, <3.6,-1.41,-8.7> }
		triangle { <3.6,-1.41,-8.7>, <6.66,-1.41,-6.66>, <5.66,-2,-5.66> }
		triangle { <4.66,-1.41,-4.66>, <2.52,-1.41,-6.08>, <3.06,-2,-7.39> }
		triangle { <3.06,-2,-7.39>, <5.66,-2,-5.66>, <4.66,-1.41,-4.66> }
		triangle { <4.24,0,-4.24>, <2.3,0,-5.54>, <2.52,-1.41,-6.08> }
		triangle { <2.52,-1.41,-6.08>, <4.66,-1.41,-4.66>, <4.24,0,-4.24> }
		triangle { <4.66,1.41,-4.66>, <2.52,1.41,-6.08>, <2.3,0,-5.54> }
		triangle { <2.3,0,-5.54>, <4.24,0,-4.24>, <4.66,1.41,-4.66> }
		triangle { <5.66,2,-5.66>, <3.06,2,-7.39>, <2.52,1.41,-6.08> }
		triangle { <2.52,1.41,-6.08>, <4.66,1.41,-4.66>, <5.66,2,-5.66> }
		triangle { <6.66,1.41,-6.66>, <3.6,1.41,-8.7>, <3.06,2,-7.39> }
		triangle { <3.06,2,-7.39>, <5.66,2,-5.66>, <6.66,1.41,-6.66> }
		triangle { <7.07,0,-7.07>, <3.83,0,-9.24>, <3.6,1.41,-8.7> }
		triangle { <3.6,1.41,-8.7>, <6.66,1.41,-6.66>, <7.07,0,-7.07> }
		triangle { <3.6,-1.41,-8.7>, <0,-1.41,-9.41>, <0,0,-10> }
		triangle { <0,0,-10>, <3.83,0,-9.24>, <3.6,-1.41,-8.7> }
		triangle { <3.06,-2,-7.39>, <0,-2,-8>, <0,-1.41,-9.41> }
		triangle { <0,-1.41,-9.41>, <3.6,-1.41,-8.7>, <3.06,-2,-7.39> }
		triangle { <2.52,-1.41,-6.08>, <0,-1.41,-6.59>, <0,-2,-8> }
		triangle { <0,-2,-8>, <3.06,-2,-7.39>, <2.52,-1.41,-6.08> }
		triangle { <2.3,0,-5.54>, <0,0,-6>, <0,-1.41,-6.59> }
		triangle { <0,-1.41,-6.59>, <2.52,-1.41,-6.08>, <2.3,0,-5.54> }
		triangle { <2.52,1.41,-6.08>, <0,1.41,-6.59>, <0,0,-6> }
		triangle { <0,0,-6>, <2.3,0,-5.54>, <2.52,1.41,-6.08> }
		triangle { <3.06,2,-7.39>, <0,2,-8>, <0,1.41,-6.59> }
		triangle { <0,1.41,-6.59>, <2.52,1.41,-6.08>, <3.06,2,-7.39> }
		triangle { <3.6,1.41,-8.7>, <0,1.41,-9.41>, <0,2,-8> }
		triangle { <0,2,-8>, <3.06,2,-7.39>, <3.6,1.41,-8.7> }
		triangle { <3.83,0,-9.24>, <0,0,-10>, <0,1.41,-9.41> }
		triangle { <0,1.41,-9.41>, <3.6,1.41,-8.7>, <3.83,0,-9.24> }
		triangle { <0,-1.41,-9.41>, <-3.6,-1.41,-8.7>, <-3.83,0,-9.24> }
		triangle { <-3.83,0,-9.24>, <0,0,-10>, <0,-1.41,-9.41> }
		triangle { <0,-2,-8>, <-3.06,-2,-7.39>, <-3.6,-1.41,-8.7> }
		triangle { <-3.6,-1.41,-8.7>, <0,-1.41,-9.41>, <0,-2,-8> }
		triangle { <0,-1.41,-6.59>, <-2.52,-1.41,-6.08>, <-3.06,-2,-7.39> }
		triangle { <-3.06,-2,-7.39>, <0,-2,-8>, <0,-1.41,-6.59> }
		triangle { <0,0,-6>, <-2.3,0,-5.54>, <-2.52,-1.41,-6.08> }
		triangle { <-2.52,-1.41,-6.08>, <0,-1.41,-6.59>, <0,0,-6> }
		triangle { <0,1.41,-6.59>, <-2.52,1.41,-6.08>, <-2.3,0,-5.54> }
		triangle { <-2.3,0,-5.54>, <0,0,-6>, <0,1.41,-6.59> }
		triangle { <0,2,-8>, <-3.06,2,-7.39>, <-2.52,1.41,-6.08> }
		triangle { <-2.52,1.41,-6.08>, <0,1.41,-6.59>, <0,2,-8> }
		triangle { <0,1.41,-9.41>, <-3.6,1.41,-8.7>, <-3.06,2,-7.39> }
		triangle { <-3.06,2,-7.39>, <0,2,-8>, <0,1.41,-9.41> }
		triangle { <0,0,-10>, <-3.83,0,-9.24>, <-3.6,1.41,-8.7> }
		triangle { <-3.6,1.41,-8.7>, <0,1.41,-9.41>, <0,0,-10> }
		triangle { <-3.6,-1.41,-8.7>, <-6.66,-1.41,-6.66>, <-7.07,0,-7.07> }
		triangle { <-7.07,0,-7.07>, <-3.83,0,-9.24>, <-3.6,-1.41,-8.7> }
		triangle { <-3.06,-2,-7.39>, <-5.66,-2,-5.66>, <-6.66,-1.41,-6.66> }
		triangle { <-6.66,-1.41,-6.66>, <-3.6,-1.41,-8.7>, <-3.06,-2,-7.39> }
		triangle { <-2.52,-1.41,-6.08>, <-4.66,-1.41,-4.66>, <-5.66,-2,-5.66> }
		triangle { <-5.66,-2,-5.66>, <-3.06,-2,-7.39>, <-2.52,-1.41,-6.08> }
		triangle { <-2.3,0,-5.54>, <-4.24,0,-4.24>, <-4.66,-1.41,-4.66> }
		triangle { <-4.66,-1.41,-4.66>, <-2.52,-1.41,-6.08>, <-2.3,0,-5.54> }
		triangle { <-2.52,1.41,-6.08>, <-4.66,1.41,-4.66>, <-4.24,0,-4.24> }
		triangle { <-4.24,0,-4.24>, <-2.3,0,-5.54>, <-2.52,1.41,-6.08> }
		triangle { <-3.06,2,-7.39>, <-5.66,2,-5.66>, <-4.66,1.41,-4.66> }
		triangle { <-4.66,1.41,-4.66>, <-2.52,1.41,-6.08>, <-3.06,2,-7.39> }
		triangle { <-3.6,1.41,-8.7>, <-6.66,1.41,-6.66>, <-5.66,2,-5.66> }
		triangle { <-5.66,2,-5.66>, <-3.06,2,-7.39>, <-3.6,1.41,-8.7> }
		triangle { <-3.83,0,-9.24>, <-7.07,0,-7.07>, <-6.66,1.41,-6.66> }
		triangle { <-6.66,1.41,-6.66>, <-3.6,1.41,-8.7>, <-3.83,0,-9.24> }
		triangle { <-6.66,-1.41,-6.66>, <-8.7,-1.41,-3.6>, <-9.24,0,-3.83> }
		triangle { <-9.24,0,-3.83>, <-7.07,0,-7.07>, <-6.66,-1.41,-6.66> }
		triangle { <-5.66,-2,-5.66>, <-7.39,-2,-3.06>, <-8.7,-1.41,-3.6> }
		triangle { <-8.7,-1.41,-3.6>, <-6.66,-1.41,-6.66>, <-5.66,-2,-5.66> }
		triangle { <-4.66,-1.41,-4.66>, <-6.08,-1.41,-2.52>, <-7.39,-2,-3.06> }
		triangle { <-7.39,-2,-3.06>, <-5.66,-2,-5.66>, <-4.66,-1.41,-4.66> }
		triangle { <-4.24,0,-4.24>, <-5.54,0,-2.3>, <-6.08,-1.41,-2.52> }
		triangle { <-6.08,-1.41,-2.52>, <-4.66,-1.41,-4.66>, <-4.24,0,-4.24> }
		triangle { <-4.66,1.41,-4.66>, <-6.08,1.41,-2.52>, <-5.54,0,-2.3> }
		triangle { <-5.54,0,-2.3>, <-4.24,0,-4.24>, <-4.66,1.41,-4.66> }
		triangle { <-5.66,2,-5.66>, <-7.39,2,-3.06>, <-6.08,1.41,-2.52> }
		triangle { <-6.08,1.41,-2.52>, <-4.66,1.41,-4.66>, <-5.66,2,-5.66> }
		triangle { <-6.66,1.41,-6.66>, <-8.7,1.41,-3.6>, <-7.39,2,-3.06> }
		triangle { <-7.39,2,-3.06>, <-5.66,2,-5.66>, <-6.66,1.41,-6.66> }
		triangle { <-7.07,0,-7.07>, <-9.24,0,-3.83>, <-8.7,1.41,-3.6> }
		triangle { <-8.7,1.41,-3.6>, <-6.66,1.41,-6.66>, <-7.07,0,-7.07> }
		triangle { <-8.7,-1.41,-3.6>, <-9.41,-1.41,0>, <-10,0,0> }
		triangle { <-10,0,0>, <-9.24,0,-3.83>, <-8.7,-1.41,-3.6> }
		triangle { <-7.39,-2,-3.06>, <-8,-2,0>, <-9.41,-1.41,0> }
		triangle { <-9.41,-1.41,0>, <-8.7,-1.41,-3.6>, <-7.39,-2,-3.06> }
		triangle { <-6.08,-1.41,-2.52>, <-6.59,-1.41,0>, <-8,-2,0> }
		triangle { <-8,-2,0>, <-7.39,-2,-3.06>, <-6.08,-1.41,-2.52> }
		triangle { <-5.54,0,-2.3>, <-6,0,0>, <-6.59,-1.41,0> }
		triangle { <-6.59,-1.41,0>, <-6.08,-1.41,-2.52>, <-5.54,0,-2.3> }
		triangle { <-6.08,1.41,-2.52>, <-6.59,1.41,0>, <-6,0,0> }
		triangle { <-6,0,0>, <-5.54,0,-2.3>, <-6.08,1.41,-2.52> }
		triangle { <-7.39,2,-3.06>, <-8,2,0>, <-6.59,1.41,0> }
		triangle { <-6.59,1.41,0>, <-6.08,1.41,-2.52>, <-7.39,2,-3.06> }
		triangle { <-8.7,1.41,-3.6>, <-9.41,1.41,0>, <-8,2,0> }
		triangle { <-8,2,0>, <-7.39,2,-3.06>, <-8.7,1.41,-3.6> }
		triangle { <-9.24,0,-3.83>, <-10,0,0>, <-9.41,1.41,0> }
		triangle { <-9.41,1.41,0>, <-8.7,1.41,-3.6>, <-9.24,0,-3.83> }
// 
	}
	object { _4_dash_4cyli_dot_dat matrix <0,-2,0,0,0,20,-2,0,0,8,0,0> }
	object { _4_dash_4cyli_dot_dat matrix <0,-2,0,0,0,20,-2,0,0,-8,0,0> }
// tanks
	object { _4_dash_4disc_dot_dat matrix <0,0,4,0,1,0,-4,0,0,-7.5,6,17.5> }
	object { _4_dash_4disc_dot_dat matrix <0,0,4,0,1,0,-4,0,0,7.5,6,17.5> }
	object { _4_dash_4cyli_dot_dat matrix <0,0,7.5,0,26,0,-7.5,0,0,-7.5,0,17.5> }
	object { _4_dash_4cyli_dot_dat matrix <0,0,4,0,20,0,-4,0,0,-7.5,0,17.5> }
	object { _4_dash_4cyli_dot_dat matrix <0,0,7.5,0,26,0,-7.5,0,0,7.5,0,17.5> }
	object { _4_dash_4cyli_dot_dat matrix <0,0,4,0,20,0,-4,0,0,7.5,0,17.5> }
	object { _4_dash_8sphe_dot_dat matrix <0,0,-7.5,0,-7.5,0,-7.5,0,0,-7.5,0,17.5> }
	object { _4_dash_8sphe_dot_dat matrix <0,0,-7.5,0,-7.5,0,-7.5,0,0,7.5,0,17.5> }
// boxes
	object { box_dot_dat matrix <0,0,3,0,6.5,0,-11.25,0,0,0,-5,17.5> }
	object { box_dot_dat matrix <0,0,4,0,3,0,-2,0,0,7.5,-5.5,17.5> }
	object { box_dot_dat matrix <0,0,4,0,3,0,-2,0,0,-7.5,-5.5,17.5> }
	object { box_dot_dat matrix <0,0,2,0,2,0,-2,0,0,0,-12,17.5> }
// bottom
	mesh {
		triangle { <7.5,26,21.5>, <5.98,26,21.18>, <4.65,26,24.4> }
		triangle { <4.65,26,24.4>, <7.5,26,25>, <7.5,26,21.5> }
		triangle { <5.98,26,21.18>, <4.7,26,20.3>, <2.25,26,22.75> }
		triangle { <2.25,26,22.75>, <4.65,26,24.4>, <5.98,26,21.18> }
		triangle { <4.7,26,20.3>, <3.82,26,19.02>, <0.6,26,20.35> }
		triangle { <0.6,26,20.35>, <2.25,26,22.75>, <4.7,26,20.3> }
		triangle { <3.82,26,19.02>, <3.5,26,17.5>, <0,26,17.5> }
		triangle { <0,26,17.5>, <0.6,26,20.35>, <3.82,26,19.02> }
		triangle { <3.5,26,17.5>, <3.82,26,15.98>, <0.6,26,14.65> }
		triangle { <0.6,26,14.65>, <0,26,17.5>, <3.5,26,17.5> }
		triangle { <3.82,26,15.98>, <4.7,26,14.7>, <2.25,26,12.25> }
		triangle { <2.25,26,12.25>, <0.6,26,14.65>, <3.82,26,15.98> }
		triangle { <4.7,26,14.7>, <5.98,26,13.82>, <4.65,26,10.6> }
		triangle { <4.65,26,10.6>, <2.25,26,12.25>, <4.7,26,14.7> }
		triangle { <5.98,26,13.82>, <7.5,26,13.5>, <7.5,26,10> }
		triangle { <7.5,26,10>, <4.65,26,10.6>, <5.98,26,13.82> }
		triangle { <7.5,26,13.5>, <9.02,26,13.82>, <10.35,26,10.6> }
		triangle { <10.35,26,10.6>, <7.5,26,10>, <7.5,26,13.5> }
		triangle { <9.02,26,13.82>, <10.3,26,14.7>, <12.75,26,12.25> }
		triangle { <12.75,26,12.25>, <10.35,26,10.6>, <9.02,26,13.82> }
		triangle { <10.3,26,14.7>, <11.18,26,15.98>, <14.4,26,14.65> }
		triangle { <14.4,26,14.65>, <12.75,26,12.25>, <10.3,26,14.7> }
		triangle { <11.18,26,15.98>, <11.5,26,17.5>, <15,26,17.5> }
		triangle { <15,26,17.5>, <14.4,26,14.65>, <11.18,26,15.98> }
		triangle { <11.5,26,17.5>, <11.18,26,19.02>, <14.4,26,20.35> }
		triangle { <14.4,26,20.35>, <15,26,17.5>, <11.5,26,17.5> }
		triangle { <11.18,26,19.02>, <10.3,26,20.3>, <12.75,26,22.75> }
		triangle { <12.75,26,22.75>, <14.4,26,20.35>, <11.18,26,19.02> }
		triangle { <10.3,26,20.3>, <9.02,26,21.18>, <10.35,26,24.4> }
		triangle { <10.35,26,24.4>, <12.75,26,22.75>, <10.3,26,20.3> }
		triangle { <9.02,26,21.18>, <7.5,26,21.5>, <7.5,26,25> }
		triangle { <7.5,26,25>, <10.35,26,24.4>, <9.02,26,21.18> }
		triangle { <-7.5,26,21.5>, <-9.02,26,21.18>, <-10.35,26,24.4> }
		triangle { <-10.35,26,24.4>, <-7.5,26,25>, <-7.5,26,21.5> }
		triangle { <-9.02,26,21.18>, <-10.3,26,20.3>, <-12.75,26,22.75> }
		triangle { <-12.75,26,22.75>, <-10.35,26,24.4>, <-9.02,26,21.18> }
		triangle { <-10.3,26,20.3>, <-11.18,26,19.02>, <-14.4,26,20.35> }
		triangle { <-14.4,26,20.35>, <-12.75,26,22.75>, <-10.3,26,20.3> }
		triangle { <-11.18,26,19.02>, <-11.5,26,17.5>, <-15,26,17.5> }
		triangle { <-15,26,17.5>, <-14.4,26,20.35>, <-11.18,26,19.02> }
		triangle { <-11.5,26,17.5>, <-11.18,26,15.98>, <-14.4,26,14.65> }
		triangle { <-14.4,26,14.65>, <-15,26,17.5>, <-11.5,26,17.5> }
		triangle { <-11.18,26,15.98>, <-10.3,26,14.7>, <-12.75,26,12.25> }
		triangle { <-12.75,26,12.25>, <-14.4,26,14.65>, <-11.18,26,15.98> }
		triangle { <-10.3,26,14.7>, <-9.02,26,13.82>, <-10.35,26,10.6> }
		triangle { <-10.35,26,10.6>, <-12.75,26,12.25>, <-10.3,26,14.7> }
		triangle { <-9.02,26,13.82>, <-7.5,26,13.5>, <-7.5,26,10> }
		triangle { <-7.5,26,10>, <-10.35,26,10.6>, <-9.02,26,13.82> }
		triangle { <-7.5,26,13.5>, <-5.98,26,13.82>, <-4.65,26,10.6> }
		triangle { <-4.65,26,10.6>, <-7.5,26,10>, <-7.5,26,13.5> }
		triangle { <-5.98,26,13.82>, <-4.7,26,14.7>, <-2.25,26,12.25> }
		triangle { <-2.25,26,12.25>, <-4.65,26,10.6>, <-5.98,26,13.82> }
		triangle { <-4.7,26,14.7>, <-3.82,26,15.98>, <-0.6,26,14.65> }
		triangle { <-0.6,26,14.65>, <-2.25,26,12.25>, <-4.7,26,14.7> }
		triangle { <-3.82,26,15.98>, <-3.5,26,17.5>, <0,26,17.5> }
		triangle { <0,26,17.5>, <-0.6,26,14.65>, <-3.82,26,15.98> }
		triangle { <-3.5,26,17.5>, <-3.82,26,19.02>, <-0.6,26,20.35> }
		triangle { <-0.6,26,20.35>, <0,26,17.5>, <-3.5,26,17.5> }
		triangle { <-3.82,26,19.02>, <-4.7,26,20.3>, <-2.25,26,22.75> }
		triangle { <-2.25,26,22.75>, <-0.6,26,20.35>, <-3.82,26,19.02> }
		triangle { <-4.7,26,20.3>, <-5.98,26,21.18>, <-4.65,26,24.4> }
		triangle { <-4.65,26,24.4>, <-2.25,26,22.75>, <-4.7,26,20.3> }
		triangle { <-5.98,26,21.18>, <-7.5,26,21.5>, <-7.5,26,25> }
		triangle { <-7.5,26,25>, <-4.65,26,24.4>, <-5.98,26,21.18> }
// edges
// 
	}
}
#end

#declare this_object = object {
// Untitled
// Name: minifig_neckwear03.ldr
// Author: MLCad
// Unofficial Model
// ROTATION CENTER 0 0 0 1 "Custom"
// ROTATION CONFIG 0 0
	object {
		_3838_dot_dat
	}
// 
}


