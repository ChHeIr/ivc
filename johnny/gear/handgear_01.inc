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

#declare _8_dash_8sphe_dot_dat = sphere { <0,0,0>, 1 }

#declare _1_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open clipped_by { box { <0,-1,0>,<2,2,2> } } }

#declare _1_dash_4ring3_dot_dat = #if (version >= 3.1)
	disc {
		<0,0,0>, <0,1,0>, 4, 3
		clipped_by { box { <0,-1,0>, <5,1,5> } }
	}
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 4 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 3 }
		clipped_by { box { <0,-0.01,0>, <5,0.01,5> } }
	}
#end

#declare _1_dash_4cyls_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open
	clipped_by { plane { <-1,0,-1>,-O7071 } plane { <1,1,0>,O7071 } } }

#declare _2530_dot_dat = #if (QUAL = 0) box { <-6,-62,-12>, <6,14,8> } #else union {
// Minifig Sword Cutlass
// Name: 2530.dat
// Author: Franklin W. Cain (fwcain@yahoo.com <mailto:fwcain@yahoo.com>)
// Official LCAD Part - 2000-02 Update
// CATEGORY Minifig Accessory
// KEYWORDS minifig weapon sword cutlass pirate
// KEYWORDS machete jungle adventurers
// KEYWORDS sabre saber cavalry wild west
// CMDLINE -c8
// grip
// 
	object { _4_dash_4cyli_dot_dat matrix <4,0,0,0,-6,0,0,0,4,0,0,0> }
	object { _4_dash_4cyli_dot_dat matrix <4,0,0,0,6,0,0,0,4,0,0,0> }
	object { _2_dash_4disc_dot_dat matrix <4,0,0,0,1,0,0,0,4,0,6,0> }
// 
// pommel
// 
	object { _4_dash_4cyli_dot_dat matrix <2,0,0,0,2,0,0,0,2,0,6,0> }
	object { _8_dash_8sphe_dot_dat matrix <4,0,0,0,4,0,0,0,4,0,10,0> }
// 
// guard
// 
	mesh {
		triangle { <-4,-8,4>, <-2,-8,8>, <2,-8,8> }
		triangle { <2,-8,8>, <4,-8,4>, <-4,-8,4> }
		triangle { <-4,-6,4>, <-2,-6,8>, <2,-6,8> }
		triangle { <2,-6,8>, <4,-6,4>, <-4,-6,4> }
// 
		triangle { <-6,-8,-4>, <6,-8,-4>, <4,-8,4> }
		triangle { <4,-8,4>, <-4,-8,4>, <-6,-8,-4> }
		triangle { <-6,-6,-4>, <6,-6,-4>, <4,-6,4> }
		triangle { <4,-6,4>, <-4,-6,4>, <-6,-6,-4> }
// 
		triangle { <-2,-8,8>, <-2,-6,8>, <2,-6,8> }
		triangle { <2,-6,8>, <2,-8,8>, <-2,-8,8> }
// 
		triangle { <-4,-8,4>, <-2,-8,8>, <-2,-6,8> }
		triangle { <-2,-6,8>, <-4,-6,4>, <-4,-8,4> }
		triangle { <4,-8,4>, <2,-8,8>, <2,-6,8> }
		triangle { <2,-6,8>, <4,-6,4>, <4,-8,4> }
// 
		triangle { <-6,-8,-4>, <-4,-8,4>, <-4,-6,4> }
		triangle { <-4,-6,4>, <-6,-6,-4>, <-6,-8,-4> }
		triangle { <6,-8,-4>, <4,-8,4>, <4,-6,4> }
		triangle { <4,-6,4>, <6,-6,-4>, <6,-8,-4> }
// 
// 
// 
// 
// 
// 
// 
// 
	}
	object { _1_dash_4cyli_dot_dat matrix <0,-8,0,-6,0,0,0,0,-8,0,0,-4> }
	object { _1_dash_4cyli_dot_dat matrix <0,-8,0,6,0,0,0,0,-8,0,0,-4> }
	object { _1_dash_4cyli_dot_dat matrix <0,-6,0,-6,0,0,0,0,-6,0,0,-4> }
	object { _1_dash_4cyli_dot_dat matrix <0,-6,0,6,0,0,0,0,-6,0,0,-4> }
	object { _1_dash_4ring3_dot_dat matrix <0,-2,0,1,0,0,0,0,-2,-6,0,-4> }
	object { _1_dash_4ring3_dot_dat matrix <0,-2,0,1,0,0,0,0,-2,6,0,-4> }
// 
// 
	object { _1_dash_4cyli_dot_dat matrix <0,8,0,-4,0,0,0,0,-8,0,0,-4> }
	object { _1_dash_4cyli_dot_dat matrix <0,8,0,4,0,0,0,0,-8,0,0,-4> }
	object { _1_dash_4cyli_dot_dat matrix <0,6,0,-4,0,0,0,0,-6,0,0,-4> }
	object { _1_dash_4cyli_dot_dat matrix <0,6,0,4,0,0,0,0,-6,0,0,-4> }
	object { _1_dash_4cyls_dot_dat matrix <0,8,0,-2,0,0,0,0,-8,-4,0,-4> }
	object { _1_dash_4cyls_dot_dat matrix <0,8,0,2,0,0,0,0,-8,4,0,-4> }
	object { _1_dash_4cyls_dot_dat matrix <0,6,0,-2,0,0,0,0,-6,-4,0,-4> }
	object { _1_dash_4cyls_dot_dat matrix <0,6,0,2,0,0,0,0,-6,4,0,-4> }
// 
	mesh {
		triangle { <-4,6,-4>, <-4,8,-4>, <-4.152,5.543,-6.296> }
		triangle { <-4,8,-4>, <-4.152,5.543,-6.296>, <-4.152,7.391,-7.062> }
		triangle { <-4.152,5.543,-6.296>, <-4.152,7.391,-7.062>, <-4.586,4.243,-8.243> }
		triangle { <-4.152,7.391,-7.062>, <-4.586,4.243,-8.243>, <-4.586,5.657,-9.657> }
		triangle { <-4.586,4.243,-8.243>, <-4.586,5.657,-9.657>, <-5.235,2.296,-9.543> }
		triangle { <-4.586,5.657,-9.657>, <-5.235,2.296,-9.543>, <-5.235,3.062,-11.391> }
		triangle { <-5.235,2.296,-9.543>, <-5.235,3.062,-11.391>, <-6,0,-10> }
		triangle { <-5.235,3.062,-11.391>, <-6,0,-10>, <-6,0,-12> }
// 
		triangle { <4,6,-4>, <4,8,-4>, <4.152,5.543,-6.296> }
		triangle { <4,8,-4>, <4.152,5.543,-6.296>, <4.152,7.391,-7.062> }
		triangle { <4.152,5.543,-6.296>, <4.152,7.391,-7.062>, <4.586,4.243,-8.243> }
		triangle { <4.152,7.391,-7.062>, <4.586,4.243,-8.243>, <4.586,5.657,-9.657> }
		triangle { <4.586,4.243,-8.243>, <4.586,5.657,-9.657>, <5.235,2.296,-9.543> }
		triangle { <4.586,5.657,-9.657>, <5.235,2.296,-9.543>, <5.235,3.062,-11.391> }
		triangle { <5.235,2.296,-9.543>, <5.235,3.062,-11.391>, <6,0,-10> }
		triangle { <5.235,3.062,-11.391>, <6,0,-10>, <6,0,-12> }
// 
// 
		triangle { <-4,8,-4>, <-4,8,0>, <4,8,0> }
		triangle { <4,8,0>, <4,8,-4>, <-4,8,-4> }
// 
		triangle { <-4,6,-4>, <-4,6,0>, <4,6,0> }
		triangle { <4,6,0>, <4,6,-4>, <-4,6,-4> }
// 
		triangle { <-4,8,-4>, <-4,6,-4>, <-4,6,0> }
		triangle { <-4,6,0>, <-4,8,0>, <-4,8,-4> }
		triangle { <4,8,-4>, <4,6,-4>, <4,6,0> }
		triangle { <4,6,0>, <4,8,0>, <4,8,-4> }
// 
		triangle { <-4,8,0>, <-4,6,0>, <4,6,0> }
		triangle { <4,6,0>, <4,8,0>, <-4,8,0> }
// 
// 
// 
// 
// blade
// 
		triangle { <-2,-8,0>, <-2,-8,4>, <-2,-40,4> }
		triangle { <-2,-40,4>, <-2,-40,0>, <-2,-8,0> }
		triangle { <2,-8,0>, <2,-8,4>, <2,-40,4> }
		triangle { <2,-40,4>, <2,-40,0>, <2,-8,0> }
// 
		triangle { <-2,-8,0>, <0,-8,-4>, <0,-40,-4> }
		triangle { <0,-40,-4>, <-2,-40,0>, <-2,-8,0> }
		triangle { <2,-8,0>, <0,-8,-4>, <0,-40,-4> }
		triangle { <0,-40,-4>, <2,-40,0>, <2,-8,0> }
// 
		triangle { <-2,-8,4>, <-2,-40,4>, <2,-40,4> }
		triangle { <2,-40,4>, <2,-8,4>, <-2,-8,4> }
// 
// 
		triangle { <-2,-40,0>, <0,-40,-4>, <-2,-44.06,0.147> }
		triangle { <0,-40,-4>, <-2,-44.06,0.147>, <0,-44.06,-3.765> }
		triangle { <-2,-44.06,0.147>, <0,-44.06,-3.765>, <-2,-48.052,0.582> }
		triangle { <0,-44.06,-3.765>, <-2,-48.052,0.582>, <0,-48.052,-3.069> }
		triangle { <-2,-48.052,0.582>, <0,-48.052,-3.069>, <-2,-51.907,1.299> }
		triangle { <0,-48.052,-3.069>, <-2,-51.907,1.299>, <0,-51.907,-1.921> }
		triangle { <-2,-51.907,1.299>, <0,-51.907,-1.921>, <-2,-55.556,2.288> }
		triangle { <0,-51.907,-1.921>, <-2,-55.556,2.288>, <0,-55.556,-0.34> }
		triangle { <-2,-55.556,2.288>, <0,-55.556,-0.34>, <-2,-58.942,3.527> }
		triangle { <0,-55.556,-0.34>, <-2,-58.942,3.527>, <0,-58.942,1.643> }
		triangle { <-2,-58.942,3.527>, <0,-58.942,1.643>, <-2,-62,5> }
		triangle { <0,-58.942,1.643>, <-2,-62,5>, <0,-62,4> }
// 
		triangle { <2,-40,0>, <0,-40,-4>, <2,-44.06,0.147> }
		triangle { <0,-40,-4>, <2,-44.06,0.147>, <0,-44.06,-3.765> }
		triangle { <2,-44.06,0.147>, <0,-44.06,-3.765>, <2,-48.052,0.582> }
		triangle { <0,-44.06,-3.765>, <2,-48.052,0.582>, <0,-48.052,-3.069> }
		triangle { <2,-48.052,0.582>, <0,-48.052,-3.069>, <2,-51.907,1.299> }
		triangle { <0,-48.052,-3.069>, <2,-51.907,1.299>, <0,-51.907,-1.921> }
		triangle { <2,-51.907,1.299>, <0,-51.907,-1.921>, <2,-55.556,2.288> }
		triangle { <0,-51.907,-1.921>, <2,-55.556,2.288>, <0,-55.556,-0.34> }
		triangle { <2,-55.556,2.288>, <0,-55.556,-0.34>, <2,-58.942,3.527> }
		triangle { <0,-55.556,-0.34>, <2,-58.942,3.527>, <0,-58.942,1.643> }
		triangle { <2,-58.942,3.527>, <0,-58.942,1.643>, <2,-62,5> }
		triangle { <0,-58.942,1.643>, <2,-62,5>, <0,-62,4> }
// 
		triangle { <-2,-40,0>, <-2,-40,4>, <-2,-43.876,4.059> }
		triangle { <-2,-43.876,4.059>, <-2,-44.06,0.147>, <-2,-40,0> }
		triangle { <-2,-44.06,0.147>, <-2,-43.876,4.059>, <-2,-47.686,4.233> }
		triangle { <-2,-47.686,4.233>, <-2,-48.052,0.582>, <-2,-44.06,0.147> }
		triangle { <-2,-48.052,0.582>, <-2,-47.686,4.233>, <-2,-51.366,4.52> }
		triangle { <-2,-51.366,4.52>, <-2,-51.907,1.299>, <-2,-48.052,0.582> }
		triangle { <-2,-51.907,1.299>, <-2,-51.366,4.52>, <-2,-54.849,4.915> }
		triangle { <-2,-54.849,4.915>, <-2,-55.556,2.288>, <-2,-51.907,1.299> }
		triangle { <-2,-55.556,2.288>, <-2,-54.849,4.915>, <-2,-58.081,5.411> }
		triangle { <-2,-58.081,5.411>, <-2,-58.942,3.527>, <-2,-55.556,2.288> }
		triangle { <-2,-58.942,3.527>, <-2,-58.081,5.411>, <-2,-61,6> }
		triangle { <-2,-61,6>, <-2,-62,5>, <-2,-58.942,3.527> }
// 
		triangle { <2,-40,0>, <2,-40,4>, <2,-43.876,4.059> }
		triangle { <2,-43.876,4.059>, <2,-44.06,0.147>, <2,-40,0> }
		triangle { <2,-44.06,0.147>, <2,-43.876,4.059>, <2,-47.686,4.233> }
		triangle { <2,-47.686,4.233>, <2,-48.052,0.582>, <2,-44.06,0.147> }
		triangle { <2,-48.052,0.582>, <2,-47.686,4.233>, <2,-51.366,4.52> }
		triangle { <2,-51.366,4.52>, <2,-51.907,1.299>, <2,-48.052,0.582> }
		triangle { <2,-51.907,1.299>, <2,-51.366,4.52>, <2,-54.849,4.915> }
		triangle { <2,-54.849,4.915>, <2,-55.556,2.288>, <2,-51.907,1.299> }
		triangle { <2,-55.556,2.288>, <2,-54.849,4.915>, <2,-58.081,5.411> }
		triangle { <2,-58.081,5.411>, <2,-58.942,3.527>, <2,-55.556,2.288> }
		triangle { <2,-58.942,3.527>, <2,-58.081,5.411>, <2,-61,6> }
		triangle { <2,-61,6>, <2,-62,5>, <2,-58.942,3.527> }
// 
		triangle { <-2,-40,4>, <-2,-43.876,4.059>, <2,-43.876,4.059> }
		triangle { <2,-43.876,4.059>, <2,-40,4>, <-2,-40,4> }
		triangle { <-2,-43.876,4.059>, <-2,-47.686,4.233>, <2,-47.686,4.233> }
		triangle { <2,-47.686,4.233>, <2,-43.876,4.059>, <-2,-43.876,4.059> }
		triangle { <-2,-47.686,4.233>, <-2,-51.366,4.52>, <2,-51.366,4.52> }
		triangle { <2,-51.366,4.52>, <2,-47.686,4.233>, <-2,-47.686,4.233> }
		triangle { <-2,-51.366,4.52>, <-2,-54.849,4.915>, <2,-54.849,4.915> }
		triangle { <2,-54.849,4.915>, <2,-51.366,4.52>, <-2,-51.366,4.52> }
		triangle { <-2,-54.849,4.915>, <-2,-58.081,5.411>, <2,-58.081,5.411> }
		triangle { <2,-58.081,5.411>, <2,-54.849,4.915>, <-2,-54.849,4.915> }
		triangle { <-2,-58.081,5.411>, <-2,-61,6>, <2,-61,6> }
		triangle { <2,-61,6>, <2,-58.081,5.411>, <-2,-58.081,5.411> }
// 
// 
		triangle { <0,-62,4>, <-2,-62,5>, <2,-62,5> }
// 
		triangle { <-2,-62,5>, <2,-62,5>, <2,-61,6> }
		triangle { <2,-61,6>, <-2,-61,6>, <-2,-62,5> }
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
	}
}
#end

#declare this_object = object {_2530_dot_dat}



