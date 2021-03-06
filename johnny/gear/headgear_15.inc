// Generated by L3P v1.3 20010120  (C) 1998-2001 Lars C. Hassing  lch@ccieurope.com
// WWW: http://home16.inet.tele.dk/hassing/l3p.html
// WWW: http://www.ldraw.org/download/software/l3p
// Date: Sun Apr 16 14:40:27 2006
// Input file: LPub\LDraw\minifig_tool03.ldr
// ModelDir: LPub\LDraw\
// LDRAWDIR: C:\Programs\LDraw
// Commandline: l3p.exe -stdout -ca30.000000 -q2 -b0x02ffffff -o LPub\LDraw\minifig_tool03.ldr LPub\POV\minifig_tool03.pov


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

#declare _4_dash_4disc_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 1 }
#else
	cylinder { <0,-0.001,0>, <0,0.001,0>, 1 }
#end

#declare _4_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open }

#declare ring2_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 3, 2 }
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 3 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 2 }
	}
#end

#declare ring4_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 5, 4 }
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 5 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 4 }
	}
#end

#declare ring7_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 8, 7 }
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 8 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 7 }
	}
#end

#declare _3878_dot_dat = #if (QUAL = 0) box { <-20,-16,-20>, <20,5,20> } #else union {
// Minifig Top Hat
// Name: 3878.DAT
// Author: Chris Dee (chris_w_dee@hotmail.com)
// Official LCAD Part - 2000-02 Update
// Inside
	object { _4_dash_4disc_dot_dat matrix <11,0,0,0,1,0,0,0,11,0,-14,0> }
	object { _4_dash_4cyli_dot_dat matrix <6,0,0,0,14,0,0,0,6,0,-14,0> }
	object { ring2_dot_dat matrix <3,0,0,0,1,0,0,0,3,0,0,0> }
	object { _4_dash_4cyli_dot_dat matrix <9,0,0,0,14,0,0,0,9,0,-14,0> }
	object { _4_dash_4cyli_dot_dat matrix <11,0,0,0,14.994,0,0,0,11,0,-14,0> }
	mesh {
		triangle { <-4.21,0.994,10.163>, <-4.415,1.172,10.658>, <-8.157,1.172,8.157> }
		triangle { <-8.157,1.172,8.157>, <-7.778,0.994,7.778>, <-4.21,0.994,10.163> }
		triangle { <-7.778,0.994,7.778>, <-8.157,1.172,8.157>, <-10.658,1.172,4.415> }
		triangle { <-10.658,1.172,4.415>, <-10.163,0.994,4.21>, <-7.778,0.994,7.778> }
		triangle { <-10.163,0.994,4.21>, <-10.658,1.172,4.415>, <-11.536,1.172,0> }
		triangle { <-11.536,1.172,0>, <-11,0.994,0>, <-10.163,0.994,4.21> }
		triangle { <-11,0.994,0>, <-11.536,1.172,0>, <-10.658,1.172,-4.415> }
		triangle { <-10.658,1.172,-4.415>, <-10.163,0.994,-4.21>, <-11,0.994,0> }
		triangle { <-10.163,0.994,-4.21>, <-10.658,1.172,-4.415>, <-8.157,1.172,-8.157> }
		triangle { <-8.157,1.172,-8.157>, <-7.778,0.994,-7.778>, <-10.163,0.994,-4.21> }
		triangle { <-7.778,0.994,-7.778>, <-8.157,1.172,-8.157>, <-4.415,1.172,-10.658> }
		triangle { <-4.415,1.172,-10.658>, <-4.21,0.994,-10.163>, <-7.778,0.994,-7.778> }
		triangle { <-4.21,0.994,-10.163>, <-4.415,1.172,-10.658>, <0,1.172,-11.536> }
		triangle { <0,1.172,-11.536>, <0,0.994,-11>, <-4.21,0.994,-10.163> }
		triangle { <0,0.994,-11>, <0,1.172,-11.536>, <4.415,1.172,-10.658> }
		triangle { <4.415,1.172,-10.658>, <4.21,0.994,-10.163>, <0,0.994,-11> }
		triangle { <4.21,0.994,-10.163>, <4.415,1.172,-10.658>, <8.157,1.172,-8.157> }
		triangle { <8.157,1.172,-8.157>, <7.778,0.994,-7.778>, <4.21,0.994,-10.163> }
		triangle { <7.778,0.994,-7.778>, <8.157,1.172,-8.157>, <10.658,1.172,-4.415> }
		triangle { <10.658,1.172,-4.415>, <10.163,0.994,-4.21>, <7.778,0.994,-7.778> }
		triangle { <10.163,0.994,-4.21>, <10.658,1.172,-4.415>, <11.536,1.172,0> }
		triangle { <11.536,1.172,0>, <11,0.994,0>, <10.163,0.994,-4.21> }
		triangle { <11,0.994,0>, <11.536,1.172,0>, <10.658,1.172,4.415> }
		triangle { <10.658,1.172,4.415>, <10.163,0.994,4.21>, <11,0.994,0> }
		triangle { <10.163,0.994,4.21>, <10.658,1.172,4.415>, <8.157,1.172,8.157> }
		triangle { <8.157,1.172,8.157>, <7.778,0.994,7.778>, <10.163,0.994,4.21> }
		triangle { <7.778,0.994,7.778>, <8.157,1.172,8.157>, <4.415,1.172,10.658> }
		triangle { <4.415,1.172,10.658>, <4.21,0.994,10.163>, <7.778,0.994,7.778> }
		triangle { <4.21,0.994,10.163>, <4.415,1.172,10.658>, <0,1.172,11.536> }
		triangle { <0,1.172,11.536>, <0,0.994,11>, <4.21,0.994,10.163> }
		triangle { <0,0.994,11>, <0,1.172,11.536>, <-4.415,1.172,10.658> }
		triangle { <-4.415,1.172,10.658>, <-4.21,0.994,10.163>, <0,0.994,11> }
		triangle { <-4.415,1.172,10.658>, <-4.975,4,12.01>, <-9.192,4,9.192> }
		triangle { <-9.192,4,9.192>, <-8.157,1.172,8.157>, <-4.415,1.172,10.658> }
		triangle { <-8.157,1.172,8.157>, <-9.192,4,9.192>, <-12.01,4,4.975> }
		triangle { <-12.01,4,4.975>, <-10.658,1.172,4.415>, <-8.157,1.172,8.157> }
		triangle { <-10.658,1.172,4.415>, <-12.01,4,4.975>, <-13,4,0> }
		triangle { <-13,4,0>, <-11.536,1.172,0>, <-10.658,1.172,4.415> }
		triangle { <-11.536,1.172,0>, <-13,4,0>, <-12.01,4,-4.975> }
		triangle { <-12.01,4,-4.975>, <-10.658,1.172,-4.415>, <-11.536,1.172,0> }
		triangle { <-10.658,1.172,-4.415>, <-12.01,4,-4.975>, <-9.192,4,-9.192> }
		triangle { <-9.192,4,-9.192>, <-8.157,1.172,-8.157>, <-10.658,1.172,-4.415> }
		triangle { <-8.157,1.172,-8.157>, <-9.192,4,-9.192>, <-4.975,4,-12.01> }
		triangle { <-4.975,4,-12.01>, <-4.415,1.172,-10.658>, <-8.157,1.172,-8.157> }
		triangle { <-4.415,1.172,-10.658>, <-4.975,4,-12.01>, <0,4,-13> }
		triangle { <0,4,-13>, <0,1.172,-11.536>, <-4.415,1.172,-10.658> }
		triangle { <0,1.172,-11.536>, <0,4,-13>, <4.975,4,-12.01> }
		triangle { <4.975,4,-12.01>, <4.415,1.172,-10.658>, <0,1.172,-11.536> }
		triangle { <4.415,1.172,-10.658>, <4.975,4,-12.01>, <9.192,4,-9.192> }
		triangle { <9.192,4,-9.192>, <8.157,1.172,-8.157>, <4.415,1.172,-10.658> }
		triangle { <8.157,1.172,-8.157>, <9.192,4,-9.192>, <12.01,4,-4.975> }
		triangle { <12.01,4,-4.975>, <10.658,1.172,-4.415>, <8.157,1.172,-8.157> }
		triangle { <10.658,1.172,-4.415>, <12.01,4,-4.975>, <13,4,0> }
		triangle { <13,4,0>, <11.536,1.172,0>, <10.658,1.172,-4.415> }
		triangle { <11.536,1.172,0>, <13,4,0>, <12.01,4,4.975> }
		triangle { <12.01,4,4.975>, <10.658,1.172,4.415>, <11.536,1.172,0> }
		triangle { <10.658,1.172,4.415>, <12.01,4,4.975>, <9.192,4,9.192> }
		triangle { <9.192,4,9.192>, <8.157,1.172,8.157>, <10.658,1.172,4.415> }
		triangle { <8.157,1.172,8.157>, <9.192,4,9.192>, <4.975,4,12.01> }
		triangle { <4.975,4,12.01>, <4.415,1.172,10.658>, <8.157,1.172,8.157> }
		triangle { <4.415,1.172,10.658>, <4.975,4,12.01>, <0,4,13> }
		triangle { <0,4,13>, <0,1.172,11.536>, <4.415,1.172,10.658> }
		triangle { <0,1.172,11.536>, <0,4,13>, <-4.975,4,12.01> }
		triangle { <-4.975,4,12.01>, <-4.415,1.172,10.658>, <0,1.172,11.536> }
	}
	object { _4_dash_4cyli_dot_dat matrix <13,0,0,0,1,0,0,0,13,0,4,0> }
// Outside
	object { _4_dash_4disc_dot_dat matrix <14,0,0,0,1,0,0,0,14,0,-16,0> }
	object { _4_dash_4cyli_dot_dat matrix <14,0,0,0,18,0,0,0,14,0,-16,0> }
	object { ring4_dot_dat matrix <3.5,0,0,0,1,0,0,0,3.5,0,2,0> }
	object { ring7_dot_dat matrix <2.5,0,0,0,1,0,0,0,2.5,0,2,0> }
	object { _4_dash_4cyli_dot_dat matrix <20,0,0,0,3,0,0,0,20,0,2,0> }
	object { ring4_dot_dat matrix <3.25,0,0,0,1,0,0,0,3.25,0,5,0> }
	object { ring4_dot_dat matrix <4,0,0,0,1,0,0,0,4,0,5,0> }
// 
}
#end

#declare this_object = object {
// Untitled
// Name: minifig_tool03.ldr
// Author: MLCad
// Unofficial Model
// ROTATION CENTER 0 0 0 1 "Custom"
// ROTATION CONFIG 0 0
	object {
		_3878_dot_dat
		translate <0,1,0>
	}
// 
}


