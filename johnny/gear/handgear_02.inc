// Generated by L3P v1.3 20010120  (C) 1998-2001 Lars C. Hassing  lch@ccieurope.com
// WWW: http://home16.inet.tele.dk/hassing/l3p.html
// WWW: http://www.ldraw.org/download/software/l3p
// Date: Wed Apr 12 19:09:00 2006
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

#ifndef (Color19)
#declare Color19 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.8,0.666667,0.4> }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end
#ifndef (GreyColor19)
#declare GreyColor19 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.800000,0.666667,0.400000>  }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end

#ifndef (Color2)
#declare Color2 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.117647,0.627451,0.227451> }
	finish { ambient AMB diffuse DIF }
	#if (QUAL > 1)
		finish { phong 0.5 phong_size 40 reflection 0.08 }
		#if (BUMPS) normal { BUMPNORMAL } #end
	#end
} #if (version >= 3.1) } #end
#end
#ifndef (GreyColor2)
#declare GreyColor2 = #if (version >= 3.1) material { #end texture {
	pigment { rgb <0.117647,0.627451,0.227451>  }
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

#declare rect_dot_dat = object {
// Rectangle
// Name: rect.dat
// Author: James Jessiman
// Original LDraw Primitive
// LDRAW_ORG Primitive UPDATE 2002-02
// BFC CERTIFY CW
// 2002-4-5: TH: Added BFC statement
	mesh {
		triangle { <1,0,1>, <1,0,-1>, <-1,0,-1> }
		triangle { <-1,0,-1>, <-1,0,1>, <1,0,1> }
// 
	}
}

#declare s_slash_3846s01_dot_dat = #if (QUAL = 0) box { <-20,-14,-10>, <20,32.37,14> } #else union {
// ~Minifig Shield without Decorated Surface
// Name: s\3846s01.dat
// Author: Tore Eriksson, code
// LDRAW_ORG Subpart UPDATE 2003-03
// BFC CERTIFY CCW
// // ????-??-?? CWD Separated into subpart
// // 2003-06-08 JHR BFC compliancy
	object { _4_dash_4cyli_dot_dat matrix <4,0,0,0,0,22,0,4,0,0,0,-8> }
	object { _4_dash_4disc_dot_dat matrix <-4,0,0,0,0,-1,0,4,0,0,0,14> }
	object { _4_dash_4disc_dot_dat matrix <4,0,0,0,-1,0,0,0,4,0,18,0> }
	object { _4_dash_4cyli_dot_dat matrix <4,0,0,0,18,0,0,0,4,0,0,0> }
	object { rect_dot_dat matrix <20,0,0,0,1,0,0,0,1,0,-14,-9> }
	mesh {
		triangle { <0,32.37,-8>, <8.76,24.57,-8>, <8.76,24.57,-10> }
		triangle { <8.76,24.57,-10>, <0,32.37,-10>, <0,32.37,-8> }
		triangle { <8.76,24.57,-8>, <14.93,15.68,-8>, <14.93,15.68,-10> }
		triangle { <14.93,15.68,-10>, <8.76,24.57,-10>, <8.76,24.57,-8> }
		triangle { <14.93,15.68,-8>, <18.72,6.03,-8>, <18.72,6.03,-10> }
		triangle { <18.72,6.03,-10>, <14.93,15.68,-10>, <14.93,15.68,-8> }
		triangle { <18.72,6.03,-8>, <20,-4,-8>, <20,-4,-10> }
		triangle { <20,-4,-10>, <18.72,6.03,-10>, <18.72,6.03,-8> }
		triangle { <20,-4,-8>, <20,-14,-8>, <20,-14,-10> }
		triangle { <20,-14,-10>, <20,-4,-10>, <20,-4,-8> }
		triangle { <0,32.37,-10>, <-8.76,24.57,-10>, <-8.76,24.57,-8> }
		triangle { <-8.76,24.57,-8>, <0,32.37,-8>, <0,32.37,-10> }
		triangle { <-8.76,24.57,-10>, <-14.93,15.68,-10>, <-14.93,15.68,-8> }
		triangle { <-14.93,15.68,-8>, <-8.76,24.57,-8>, <-8.76,24.57,-10> }
		triangle { <-14.93,15.68,-10>, <-18.72,6.03,-10>, <-18.72,6.03,-8> }
		triangle { <-18.72,6.03,-8>, <-14.93,15.68,-8>, <-14.93,15.68,-10> }
		triangle { <-18.72,6.03,-10>, <-20,-4,-10>, <-20,-4,-8> }
		triangle { <-20,-4,-8>, <-18.72,6.03,-8>, <-18.72,6.03,-10> }
		triangle { <-20,-4,-10>, <-20,-14,-10>, <-20,-14,-8> }
		triangle { <-20,-14,-8>, <-20,-4,-8>, <-20,-4,-10> }
		triangle { <0,32.37,-8>, <-8.76,24.57,-8>, <8.76,24.57,-8> }
		triangle { <-8.76,24.57,-8>, <-14.93,15.68,-8>, <14.93,15.68,-8> }
		triangle { <14.93,15.68,-8>, <8.76,24.57,-8>, <-8.76,24.57,-8> }
		triangle { <-14.93,15.68,-8>, <-18.72,6.03,-8>, <18.72,6.03,-8> }
		triangle { <18.72,6.03,-8>, <14.93,15.68,-8>, <-14.93,15.68,-8> }
		triangle { <-18.72,6.03,-8>, <-20,-4,-8>, <20,-4,-8> }
		triangle { <20,-4,-8>, <18.72,6.03,-8>, <-18.72,6.03,-8> }
		triangle { <-20,-4,-8>, <-20,-14,-8>, <20,-14,-8> }
		triangle { <20,-14,-8>, <20,-4,-8>, <-20,-4,-8> }
// 
	}
}
#end

#declare _4_dash_4ndis_dot_dat = #if (version >= 3.1)
	disc {
		<0,0,0>, <0,1,0>, 2, 1
		clipped_by { box { <-1,-1,-1>, <1,1,1> } }
	}
#else
	difference {
		box { <-1,-0.001,-1>, <1,0.001,1> }
		cylinder { <0,-1,0>, <0,1,0>, 1 }
	}
#end

#declare _3846p48_dot_dat = #if (QUAL = 0) box { <-20,-14,-10>, <20,32.37,14> } #else union {
// Minifig Shield Triangular with Forestman Pattern
// Name: 3846p48.dat
// Author: Chris Dee (chris_w_dee@hotmail.com)
// LDRAW_ORG Part UPDATE 2001-01
	object { s_slash_3846s01_dot_dat matrix <1,0,0,0,1,0,0,0,1,0,0,0> }
// Border
	mesh {
		triangle { <-11.5,-10,-10>, <-20,-14,-10>, <20,-14,-10> }
		triangle { <20,-14,-10>, <11.5,-10,-10>, <-11.5,-10,-10> }
		triangle { <11.5,-10,-10>, <20,-14,-10>, <15.5,-7,-10> }
		triangle { <15.5,-7,-10>, <13,-8,-10>, <11.5,-10,-10> }
		triangle { <15.5,-7,-10>, <20,-14,-10>, <20,-4,-10> }
		triangle { <15.5,-7,-10>, <20,-4,-10>, <18.72,6.03,-10> }
		triangle { <18.72,6.03,-10>, <15,0,-10>, <15.5,-7,-10> }
		triangle { <15,0,-10>, <18.72,6.03,-10>, <14.93,15.68,-10> }
		triangle { <14.93,15.68,-10>, <13,9,-10>, <15,0,-10> }
		triangle { <13,9,-10>, <14.93,15.68,-10>, <8.76,24.57,-10> }
		triangle { <8.76,24.57,-10>, <8,18,-10>, <13,9,-10> }
		triangle { <8,18,-10>, <8.76,24.57,-10>, <0,32.37,-10> }
		triangle { <0,32.37,-10>, <0,26,-10>, <8,18,-10> }
		triangle { <-11.5,-10,-10>, <-20,-14,-10>, <-15.5,-7,-10> }
		triangle { <-15.5,-7,-10>, <-13,-8,-10>, <-11.5,-10,-10> }
		triangle { <-15.5,-7,-10>, <-20,-14,-10>, <-20,-4,-10> }
		triangle { <-15.5,-7,-10>, <-20,-4,-10>, <-18.72,6.03,-10> }
		triangle { <-18.72,6.03,-10>, <-15,0,-10>, <-15.5,-7,-10> }
		triangle { <-15,0,-10>, <-18.72,6.03,-10>, <-14.93,15.68,-10> }
		triangle { <-14.93,15.68,-10>, <-13,9,-10>, <-15,0,-10> }
		triangle { <-13,9,-10>, <-14.93,15.68,-10>, <-8.76,24.57,-10> }
		triangle { <-8.76,24.57,-10>, <-8,18,-10>, <-13,9,-10> }
		triangle { <-8,18,-10>, <-8.76,24.57,-10>, <0,32.37,-10> }
		triangle { <0,32.37,-10>, <0,26,-10>, <-8,18,-10> }
// Antler - right
	}
	mesh {
		triangle { <-14,0,-10>, <-14,-1,-10>, <-13,-1,-10> }
		triangle { <-14,0,-10>, <-13,-1,-10>, <-12,0,-10> }
		triangle { <-12,0,-10>, <-12.5,1,-10>, <-14,0,-10> }
		triangle { <-12.5,1,-10>, <-12,0,-10>, <-10,0,-10> }
		triangle { <-10,0,-10>, <-10,1,-10>, <-12.5,1,-10> }
		triangle { <-11,-4,-10>, <-11.5,-6,-10>, <-9.5,-4.5,-10> }
		triangle { <-9.5,-4.5,-10>, <-10,-3,-10>, <-11,-4,-10> }
		triangle { <-10,-3,-10>, <-9.5,-4.5,-10>, <-8,-7,-10> }
		triangle { <-8,-7,-10>, <-8.5,-4.5,-10>, <-10,-3,-10> }
		triangle { <-10,-3,-10>, <-8.5,-4.5,-10>, <-6,-5,-10> }
		triangle { <-6,-5,-10>, <-8.5,-3,-10>, <-10,-3,-10> }
		triangle { <-10,-3,-10>, <-8.5,-3,-10>, <-8.5,0,-10> }
		triangle { <-8.5,0,-10>, <-10,1,-10>, <-10,-3,-10> }
		triangle { <-10,1,-10>, <-8.5,0,-10>, <-6.5,1.5,-10> }
		triangle { <-6.5,1.5,-10>, <-8.5,2,-10>, <-10,1,-10> }
		triangle { <-11,5,-10>, <-11.5,4.5,-10>, <-11.5,3,-10> }
		triangle { <-11.5,3,-10>, <-10,3.5,-10>, <-11,5,-10> }
		triangle { <-10,3.5,-10>, <-11.5,3,-10>, <-8.5,2,-10> }
		triangle { <-8.5,2,-10>, <-8,3.5,-10>, <-10,3.5,-10> }
		triangle { <-8,3.5,-10>, <-8.5,2,-10>, <-6.5,1.5,-10> }
		triangle { <-6.5,1.5,-10>, <-6,3,-10>, <-8,3.5,-10> }
		triangle { <-6,3,-10>, <-6.5,1.5,-10>, <-4.5,0.5,-10> }
		triangle { <-4.5,0.5,-10>, <-4,2,-10>, <-6,3,-10> }
		triangle { <-5,-3,-10>, <-3.5,-1,-10>, <-3.5,1,-10> }
		triangle { <-3.5,1,-10>, <-4.5,-1,-10>, <-5,-3,-10> }
		triangle { <-4.5,-1,-10>, <-3.5,1,-10>, <-4,2,-10> }
		triangle { <-4,2,-10>, <-4.5,0.5,-10>, <-4.5,-1,-10> }
		triangle { <-4,2,-10>, <-3.5,1,-10>, <-1,2,-10> }
		triangle { <-1,2,-10>, <-3,3,-10>, <-4,2,-10> }
// Antler - left
		triangle { <4,-3.5,-10>, <3,-5,-10>, <6.5,-4,-10> }
		triangle { <6.5,-4,-10>, <6,-3,-10>, <4,-3.5,-10> }
		triangle { <6,-3,-10>, <6.5,-4,-10>, <9,-4,-10> }
		triangle { <9,-4,-10>, <8,-3,-10>, <6,-3,-10> }
		triangle { <6,-6,-10>, <7,-7.5,-10>, <8,-5,-10> }
		triangle { <8,-5,-10>, <6.5,-4,-10>, <6,-6,-10> }
		triangle { <6.5,-4,-10>, <8,-5,-10>, <11,-6,-10> }
		triangle { <11,-6,-10>, <9,-4,-10>, <6.5,-4,-10> }
		triangle { <8,-3,-10>, <9,-4,-10>, <10.5,0.5,-10> }
		triangle { <10.5,0.5,-10>, <8.5,-0.5,-10>, <8,-3,-10> }
		triangle { <10,-1,-10>, <14,-1,-10>, <12.5,0.5,-10> }
		triangle { <12.5,0.5,-10>, <10.5,0.5,-10>, <10,-1,-10> }
		triangle { <8.5,-0.5,-10>, <10.5,0.5,-10>, <9,2,-10> }
		triangle { <9,2,-10>, <7,1,-10>, <8.5,-0.5,-10> }
		triangle { <7,1,-10>, <9,2,-10>, <9,5,-10> }
		triangle { <9,5,-10>, <7,2.5,-10>, <7,1,-10> }
		triangle { <7,2.5,-10>, <9,5,-10>, <10,7,-10> }
		triangle { <10,7,-10>, <8,6,-10>, <7,2.5,-10> }
		triangle { <7,1,-10>, <7,2.5,-10>, <2.5,2.5,-10> }
		triangle { <2.5,2.5,-10>, <3,1,-10>, <7,1,-10> }
		triangle { <0.5,-2,-10>, <3,-1.5,-10>, <2,-1,-10> }
		triangle { <2,-1,-10>, <3,-1.5,-10>, <3,1,-10> }
		triangle { <3,1,-10>, <2,0,-10>, <2,-1,-10> }
		triangle { <2,0,-10>, <3,1,-10>, <2.5,2.5,-10> }
		triangle { <2.5,2.5,-10>, <0,2,-10>, <2,0,-10> }
		triangle { <0,2,-10>, <2.5,2.5,-10>, <2,4,-10> }
		triangle { <2,4,-10>, <0,4,-10>, <0,2,-10> }
		triangle { <0,2,-10>, <0,4,-10>, <-1,3,-10> }
		triangle { <-1,3,-10>, <-1,2,-10>, <0,2,-10> }
// Eye
		#if (version >= 3.1) material #else texture #end { Color0 }
	}
	object { _4_dash_4disc_dot_dat matrix <0.75,0,0,0,0,1,0,0.75,0,-2,5,-10> #if (version >= 3.1) material #else texture #end { Color0 } }
	object { _4_dash_4ndis_dot_dat matrix <0.75,0,0,0,0,1,0,0.75,0,-2,5,-10> #if (version >= 3.1) material #else texture #end { Color19 } }
// Head
	mesh {
		triangle { <-3,3,-10>, <-1,2,-10>, <-1,3,-10> }
		triangle { <-3,3,-10>, <-1,3,-10>, <0,4,-10> }
		triangle { <0,4,-10>, <-4,4,-10>, <-3,3,-10> }
		triangle { <-2.75,4,-10>, <-1.25,4,-10>, <-1.25,4.25,-10> }
		triangle { <-1.25,4.25,-10>, <-2.75,4.25,-10>, <-2.75,4,-10> }
		triangle { <-4,4,-10>, <-2.75,4,-10>, <-2.75,5,-10> }
		triangle { <-2.75,5,-10>, <-5,5,-10>, <-4,4,-10> }
		triangle { <-5,5,-10>, <-7,7.5,-10>, <-9,8,-10> }
		triangle { <-9,8,-10>, <-9.5,6.5,-10>, <-5,5,-10> }
		triangle { <-8.5,9.5,-10>, <-9,8,-10>, <-7,8,-10> }
		triangle { <-7,8,-10>, <-5.5,9.5,-10>, <-8.5,9.5,-10> }
		triangle { <-7,8,-10>, <-7,7.5,-10>, <-5,5,-10> }
		triangle { <-5,5,-10>, <-5.5,9.5,-10>, <-7,8,-10> }
		triangle { <-5.5,9.5,-10>, <-5,5,-10>, <-2.75,5,-10> }
		triangle { <-2.75,5,-10>, <-2.75,5.75,-10>, <-5.5,9.5,-10> }
		triangle { <-5.5,9.5,-10>, <-2.75,5.75,-10>, <-1.25,5.75,-10> }
		triangle { <-1.25,5.75,-10>, <-4.5,10,-10>, <-5.5,9.5,-10> }
		triangle { <-4.5,10,-10>, <-1.25,5.75,-10>, <0,10,-10> }
		triangle { <0,10,-10>, <-2,10.5,-10>, <-4.5,10,-10> }
		triangle { <0,10,-10>, <-1.25,5.75,-10>, <-1.25,4,-10> }
		triangle { <-1.25,4,-10>, <2,4,-10>, <0,10,-10> }
		triangle { <4,3.5,-10>, <7,3.5,-10>, <6,5.5,-10> }
		triangle { <6,5.5,-10>, <4.5,5.5,-10>, <4,3.5,-10> }
		triangle { <4,3.5,-10>, <4.5,5.5,-10>, <3,4.5,-10> }
		triangle { <2,4,-10>, <3,4.5,-10>, <4.5,5.5,-10> }
		triangle { <4.5,5.5,-10>, <0,10,-10>, <2,4,-10> }
		triangle { <0,10,-10>, <4.5,5.5,-10>, <6.5,7,-10> }
		triangle { <6.5,7,-10>, <8,10,-10>, <0,10,-10> }
		triangle { <0,10,-10>, <8,10,-10>, <8,15,-10> }
		triangle { <8,15,-10>, <0,10.5,-10>, <0,10,-10> }
		triangle { <0,10.5,-10>, <8,15,-10>, <6,18,-10> }
		triangle { <6,18,-10>, <3,20,-10>, <0,10.5,-10> }
		triangle { <0,10.5,-10>, <3,20,-10>, <0,21,-10> }
		triangle { <0,21,-10>, <-3,20.5,-10>, <0,10.5,-10> }
		triangle { <0,10.5,-10>, <-3,20.5,-10>, <-5,19,-10> }
		triangle { <-5,19,-10>, <-2,11,-10>, <0,10.5,-10> }
		triangle { <-2,11,-10>, <-5,19,-10>, <-7,17,-10> }
		triangle { <-7,17,-10>, <-5,10.5,-10>, <-2,11,-10> }
		triangle { <-5,10.5,-10>, <-7,17,-10>, <-7.5,15,-10> }
		triangle { <-7.5,15,-10>, <-7,12.5,-10>, <-5,10.5,-10> }
// Background
		#if (version >= 3.1) material #else texture #end { Color19 }
	}
	mesh {
		triangle { <-9,8,-10>, <-7,7.5,-10>, <-7,8,-10> }
		triangle { <-5,10.5,-10>, <-4.5,10,-10>, <-2,10.5,-10> }
		triangle { <-2,10.5,-10>, <-2,11,-10>, <-5,10.5,-10> }
		triangle { <-2,11,-10>, <-2,10.5,-10>, <0,10,-10> }
		triangle { <0,10,-10>, <0,10.5,-10>, <-2,11,-10> }
		triangle { <3,4.5,-10>, <2,4,-10>, <2.5,2.5,-10> }
		triangle { <2.5,2.5,-10>, <4,3.5,-10>, <3,4.5,-10> }
		triangle { <4,3.5,-10>, <2.5,2.5,-10>, <7,2.5,-10> }
		triangle { <7,2.5,-10>, <7,3.5,-10>, <4,3.5,-10> }
		triangle { <7,2.5,-10>, <8,6,-10>, <7,6,-10> }
		triangle { <7,3.5,-10>, <7,5.5,-10>, <6,5.5,-10> }
		triangle { <4.5,5.5,-10>, <7,5.5,-10>, <7,6,-10> }
		triangle { <7,6,-10>, <6.5,7,-10>, <4.5,5.5,-10> }
		triangle { <6.5,7,-10>, <7,6,-10>, <8,6,-10> }
		triangle { <8,6,-10>, <8,10,-10>, <6.5,7,-10> }
		triangle { <8,6,-10>, <10,7,-10>, <13,9,-10> }
		triangle { <13,9,-10>, <8,18,-10>, <8,6,-10> }
		triangle { <8,15,-10>, <8,18,-10>, <6,18,-10> }
		triangle { <6,18,-10>, <8,18,-10>, <0,26,-10> }
		triangle { <0,26,-10>, <3,20,-10>, <6,18,-10> }
		triangle { <3,20,-10>, <0,26,-10>, <0,21,-10> }
		triangle { <0,21,-10>, <0,26,-10>, <-3,20.5,-10> }
		triangle { <-3,20.5,-10>, <0,26,-10>, <-8,18,-10> }
		triangle { <-8,18,-10>, <-5,19,-10>, <-3,20.5,-10> }
		triangle { <-5,19,-10>, <-8,18,-10>, <-7,17,-10> }
		triangle { <-7,17,-10>, <-8,18,-10>, <-13,9,-10> }
		triangle { <-13,9,-10>, <-7.5,15,-10>, <-7,17,-10> }
		triangle { <-7.5,15,-10>, <-13,9,-10>, <-8.5,9.5,-10> }
		triangle { <-8.5,9.5,-10>, <-7,12.5,-10>, <-7.5,15,-10> }
		triangle { <-7,12.5,-10>, <-8.5,9.5,-10>, <-5.5,9.5,-10> }
		triangle { <-5.5,9.5,-10>, <-5,10.5,-10>, <-7,12.5,-10> }
		triangle { <-5,10.5,-10>, <-5.5,9.5,-10>, <-4.5,10,-10> }
		triangle { <-8.5,9.5,-10>, <-13,9,-10>, <-9.5,6.5,-10> }
		triangle { <-4,2,-10>, <-3,3,-10>, <-5,5,-10> }
		triangle { <-5,5,-10>, <-6,3,-10>, <-4,2,-10> }
		triangle { <-6,3,-10>, <-5,5,-10>, <-9.5,6.5,-10> }
		triangle { <-9.5,6.5,-10>, <-8,3.5,-10>, <-6,3,-10> }
		triangle { <-10,3.5,-10>, <-8,3.5,-10>, <-9.5,6.5,-10> }
		triangle { <-9.5,6.5,-10>, <-11,5,-10>, <-10,3.5,-10> }
		triangle { <-13,9,-10>, <-11.5,4.5,-10>, <-9.5,6.5,-10> }
		triangle { <-11.5,4.5,-10>, <-13,9,-10>, <-15,0,-10> }
		triangle { <-15,0,-10>, <-11.5,3,-10>, <-11.5,4.5,-10> }
		triangle { <-10,1,-10>, <-8.5,2,-10>, <-11.5,3,-10> }
		triangle { <-11.5,3,-10>, <-12.5,1,-10>, <-10,1,-10> }
		triangle { <-12.5,1,-10>, <-11.5,3,-10>, <-15,0,-10> }
		triangle { <-15,0,-10>, <-14,0,-10>, <-12.5,1,-10> }
		triangle { <-14,0,-10>, <-15,0,-10>, <-15.5,-7,-10> }
		triangle { <-15.5,-7,-10>, <-14,-1,-10>, <-14,0,-10> }
		triangle { <-14,-1,-10>, <-15.5,-7,-10>, <-11.5,-6,-10> }
		triangle { <-11.5,-6,-10>, <-13,-1,-10>, <-14,-1,-10> }
		triangle { <-10,-3,-10>, <-10,0,-10>, <-12,0,-10> }
		triangle { <-12,0,-10>, <-11,-4,-10>, <-10,-3,-10> }
		triangle { <-11,-4,-10>, <-12,0,-10>, <-13,-1,-10> }
		triangle { <-13,-1,-10>, <-11.5,-6,-10>, <-11,-4,-10> }
		triangle { <-11.5,-6,-10>, <-15.5,-7,-10>, <-13,-8,-10> }
		triangle { <-9.6,-4.5,-10>, <-11.5,-6,-10>, <-8,-7,-10> }
		triangle { <-8,-7,-10>, <-11.5,-6,-10>, <-13,-8,-10> }
		triangle { <-13,-8,-10>, <-11.5,-10,-10>, <-8,-7,-10> }
		triangle { <-8,-7,-10>, <-11.5,-10,-10>, <11.5,-10,-10> }
		triangle { <11.5,-10,-10>, <7,-7.5,-10>, <-8,-7,-10> }
		triangle { <-6,-5,-10>, <-8.5,-4.5,-10>, <-8,-7,-10> }
		triangle { <-4.5,0.5,-10>, <-6.5,1.5,-10>, <-8.5,0,-10> }
		triangle { <-8.5,0,-10>, <-4.5,-1,-10>, <-4.5,0.5,-10> }
		triangle { <-4.5,-1,-10>, <-8.5,0,-10>, <-8.5,-3,-10> }
		triangle { <-8.5,-3,-10>, <-5,-3,-10>, <-4.5,-1,-10> }
		triangle { <-5,-3,-10>, <-8.5,-3,-10>, <-6,-5,-10> }
		triangle { <0,2,-10>, <-1,2,-10>, <-3.5,1,-10> }
		triangle { <-3.5,1,-10>, <2,0,-10>, <0,2,-10> }
		triangle { <2,0,-10>, <-3.5,1,-10>, <-3.5,-1,-10> }
		triangle { <-3.5,-1,-10>, <2,-1,-10>, <2,0,-10> }
		triangle { <2,-1,-10>, <-3.5,-1,-10>, <-5,-3,-10> }
		triangle { <-5,-3,-10>, <0.5,-2,-10>, <2,-1,-10> }
		triangle { <8.5,-0.5,-10>, <7,1,-10>, <3,1,-10> }
		triangle { <3,1,-10>, <8,-3,-10>, <8.5,-0.5,-10> }
		triangle { <8,-3,-10>, <3,1,-10>, <3,-1.5,-10> }
		triangle { <3,-1.5,-10>, <6,-3,-10>, <8,-3,-10> }
		triangle { <6,-3,-10>, <3,-1.5,-10>, <0.5,-2,-10> }
		triangle { <0.5,-2,-10>, <4,-3.5,-10>, <6,-3,-10> }
		triangle { <4,-3.5,-10>, <0.5,-2,-10>, <-5,-3,-10> }
		triangle { <-5,-3,-10>, <-6,-5,-10>, <4,-3.5,-10> }
		triangle { <4,-3.5,-10>, <-6,-5,-10>, <-8,-7,-10> }
		triangle { <-8,-7,-10>, <3,-5,-10>, <4,-3.5,-10> }
		triangle { <6.5,-4,-10>, <3,-5,-10>, <6,-6,-10> }
		triangle { <6,-6,-10>, <3,-5,-10>, <-8,-7,-10> }
		triangle { <-8,-7,-10>, <7,-7.5,-10>, <6,-6,-10> }
		triangle { <11,-6,-10>, <8,-5,-10>, <7,-7.5,-10> }
		triangle { <7,-7.5,-10>, <11.5,-10,-10>, <11,-6,-10> }
		triangle { <11,-6,-10>, <11.5,-10,-10>, <13,-8,-10> }
		triangle { <11,-6,-10>, <13,-8,-10>, <15.5,-7,-10> }
		triangle { <15.5,-7,-10>, <14,-1,-10>, <11,-6,-10> }
		triangle { <14,-1,-10>, <15.5,-7,-10>, <15,0,-10> }
		triangle { <9,5,-10>, <9,2,-10>, <10.5,0.5,-10> }
		triangle { <10.5,0.5,-10>, <10,7,-10>, <9,5,-10> }
		triangle { <10,7,-10>, <10.5,0.5,-10>, <12.5,0.5,-10> }
		triangle { <12.5,0.5,-10>, <13,9,-10>, <10,7,-10> }
		triangle { <13,9,-10>, <12.5,0.5,-10>, <14,-1,-10> }
		triangle { <14,-1,-10>, <15,0,-10>, <13,9,-10> }
		triangle { <10,-1,-10>, <9,-4,-10>, <11,-6,-10> }
		triangle { <11,-6,-10>, <14,-1,-10>, <10,-1,-10> }
// 
		#if (version >= 3.1) material #else texture #end { Color2 }
	}
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
		_3846p48_dot_dat
		translate<0,-10,0>
	}
// 
}


