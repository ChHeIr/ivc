// Generated by L3P v1.3 20010120  (C) 1998-2001 Lars C. Hassing  lch@ccieurope.com
// WWW: http://home16.inet.tele.dk/hassing/l3p.html
// WWW: http://www.ldraw.org/download/software/l3p
// Date: Sun Apr 16 14:40:10 2006
// Input file: LPub\LDraw\minifig_tool02.ldr
// ModelDir: LPub\LDraw\
// LDRAWDIR: C:\Programs\LDraw
// Commandline: l3p.exe -stdout -ca30.000000 -q2 -b0x02ffffff -o LPub\LDraw\minifig_tool02.ldr LPub\POV\minifig_tool02.pov


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

#declare _4_dash_4rin13_dot_dat = object {
// Ring 13 x 1.0
// Name: 4-4rin13.dat
// Author: John Riley
// LDRAW_ORG Primitive UPDATE 2003-03
// BFC CERTIFY CCW
	mesh {
		triangle { <13,0,0>, <14,0,0>, <12.9346,0,5.3578> }
		triangle { <12.9346,0,5.3578>, <12.0107,0,4.9751>, <13,0,0> }
		triangle { <12.0107,0,4.9751>, <12.9346,0,5.3578>, <9.8994,0,9.8994> }
		triangle { <9.8994,0,9.8994>, <9.1923,0,9.1923>, <12.0107,0,4.9751> }
		triangle { <9.1923,0,9.1923>, <9.8994,0,9.8994>, <5.3578,0,12.9346> }
		triangle { <5.3578,0,12.9346>, <4.9751,0,12.0107>, <9.1923,0,9.1923> }
		triangle { <4.9751,0,12.0107>, <5.3578,0,12.9346>, <0,0,14> }
		triangle { <0,0,14>, <0,0,13>, <4.9751,0,12.0107> }
		triangle { <0,0,13>, <0,0,14>, <-5.3578,0,12.9346> }
		triangle { <-5.3578,0,12.9346>, <-4.9751,0,12.0107>, <0,0,13> }
		triangle { <-4.9751,0,12.0107>, <-5.3578,0,12.9346>, <-9.8994,0,9.8994> }
		triangle { <-9.8994,0,9.8994>, <-9.1923,0,9.1923>, <-4.9751,0,12.0107> }
		triangle { <-9.1923,0,9.1923>, <-9.8994,0,9.8994>, <-12.9346,0,5.3578> }
		triangle { <-12.9346,0,5.3578>, <-12.0107,0,4.9751>, <-9.1923,0,9.1923> }
		triangle { <-12.0107,0,4.9751>, <-12.9346,0,5.3578>, <-14,0,0> }
		triangle { <-14,0,0>, <-13,0,0>, <-12.0107,0,4.9751> }
		triangle { <-13,0,0>, <-14,0,0>, <-12.9346,0,-5.3578> }
		triangle { <-12.9346,0,-5.3578>, <-12.0107,0,-4.9751>, <-13,0,0> }
		triangle { <-12.0107,0,-4.9751>, <-12.9346,0,-5.3578>, <-9.8994,0,-9.8994> }
		triangle { <-9.8994,0,-9.8994>, <-9.1923,0,-9.1923>, <-12.0107,0,-4.9751> }
		triangle { <-9.1923,0,-9.1923>, <-9.8994,0,-9.8994>, <-5.3578,0,-12.9346> }
		triangle { <-5.3578,0,-12.9346>, <-4.9751,0,-12.0107>, <-9.1923,0,-9.1923> }
		triangle { <-4.9751,0,-12.0107>, <-5.3578,0,-12.9346>, <0,0,-14> }
		triangle { <0,0,-14>, <0,0,-13>, <-4.9751,0,-12.0107> }
		triangle { <0,0,-13>, <0,0,-14>, <5.3578,0,-12.9346> }
		triangle { <5.3578,0,-12.9346>, <4.9751,0,-12.0107>, <0,0,-13> }
		triangle { <4.9751,0,-12.0107>, <5.3578,0,-12.9346>, <9.8994,0,-9.8994> }
		triangle { <9.8994,0,-9.8994>, <9.1923,0,-9.1923>, <4.9751,0,-12.0107> }
		triangle { <9.1923,0,-9.1923>, <9.8994,0,-9.8994>, <12.9346,0,-5.3578> }
		triangle { <12.9346,0,-5.3578>, <12.0107,0,-4.9751>, <9.1923,0,-9.1923> }
		triangle { <12.0107,0,-4.9751>, <12.9346,0,-5.3578>, <14,0,0> }
		triangle { <14,0,0>, <13,0,0>, <12.0107,0,-4.9751> }
// 
	}
}

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

#declare _2_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open clipped_by { box { <-2,-1,0>,<2,2,2> } } }

#declare _2_dash_4disc_dot_dat = #if (version >= 3.1)
	disc {
		<0,0,0>, <0,1,0>, 1
		clipped_by { box { <-2,-1,0>, <2,1,2> } }
	}
#else
	cylinder {
		<0,-0.001,0>, <0,0.001,0>, 1
		clipped_by { box { <-2,-1,0>, <2,1,2> } }
	}
#end

#declare rect2p_dot_dat = object {
// Rectangle with 2 Parallel Edges
// Name: rect2p.dat
// Author: Donald Sutter
// LDRAW_ORG Primitive UPDATE 2003-02
// BFC CERTIFY CW
	mesh {
		triangle { <1,0,1>, <1,0,-1>, <-1,0,-1> }
		triangle { <-1,0,-1>, <-1,0,1>, <1,0,1> }
// 
	}
}

#declare stud4a_dot_dat = difference {
	cylinder { <0,0,0>, <0,-4,0>, 8 }
	cylinder { <0,0.01,0>, <0,-4.01,0>, 6 }
}

#declare _4_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open }

#declare _4_dash_8sphe_dot_dat = sphere { <0,0,0>, 1 clipped_by { box { <-1,0,-1>, <2,2,2> } } }

#declare _4485_dot_dat = #if (QUAL = 0) box { <-14,-12,-28>, <14,9,14> } #else union {
// Minifig Cap
// Name: 4485.dat
// Author: Thomas Burger (ber00439@berk.com)
// LDRAW_ORG Part UPDATE 2004-02
// BFC CERTIFY CW
// CATEGORY Minifig Accessory
// KEYWORDS cap, hat, ballcap, baseball, sports
// // 2003-09-24 AJW Fixed gaps and inner radius; Replaced quads with primitives; BFC'd
// // 2003-12-03 FWC added meta-statements...
// brim
	object { _4_dash_4rin13_dot_dat matrix <1,0,0,0,-1,0,0,0.071,1,0,8,0> }
	object { _2_dash_4ndis_dot_dat matrix <14,0,0,0,-1,0,0,-1,-14,0,8,0> }
	object { _2_dash_4ndis_dot_dat matrix <-14,0,0,0,1,0,0,-1,-14,0,5,0> }
	object { _2_dash_4cyli_dot_dat matrix <-14,0,0,0,3,0,0,-1,-14,0,4,-14> }
	object { _2_dash_4disc_dot_dat matrix <14,0,0,0,1,0,0,-1,-14,0,4,-14> }
	object { _2_dash_4disc_dot_dat matrix <14,0,0,0,-1,0,0,-1,-14,0,7,-14> }
	object { rect2p_dot_dat matrix <0,-0.5,-7,-1,0,0,0,-1.5,0,14,6,-7> }
	object { rect2p_dot_dat matrix <0,-0.5,-7,1,0,0,0,-1.5,0,-14,6,-7> }
// inside
	#if (STUDS)
		object { stud4a_dot_dat matrix <1,0,0,0,-1,0,0,0,1,0,-4,0> }
// BFC INVERTNEXT
	#end
	object { _4_dash_4cyli_dot_dat matrix <6,0,0,0,-2,0,0,0,6,0,-4,0> }
	object { _4_dash_4cyli_dot_dat matrix <8,0,0,0,-1.5,0,0,0,8,0,-4,0> }
// BFC INVERTNEXT
	object { _4_dash_8sphe_dot_dat matrix <-13,0,0,0,-8,0,0,0.929,13,0,0,0> }
// BFC INVERTNEXT
	object { _4_dash_4cyli_dot_dat matrix <13,0,0,0,8,0,0,0.929,13,0,0,0> }
// outside
	object { _4_dash_8sphe_dot_dat matrix <-14,0,0,0,-10,0,0,1,14,0,-1,0> }
	object { _2_dash_4cyli_dot_dat matrix <14,0,0,0,9,0,0,1,14,0,-1,0> }
	object { _2_dash_4cyli_dot_dat matrix <-14,0,0,0,6,0,0,-1,-14,0,-1,0> }
// end of file
}
#end

#declare this_object = object {
// Untitled
// Name: minifig_tool02.ldr
// Author: MLCad
// Unofficial Model
// ROTATION CENTER 0 0 0 1 "Custom"
// ROTATION CONFIG 0 0
	object {
		_4485_dot_dat
		matrix <1-SW/28,0,0,0,1-SW/21,0,0,0,1-SW/42,0,SW/-14,SW/-6>
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
		#if (version >= 3.1) material #else texture #end { Color0 }
	}
// 
}

