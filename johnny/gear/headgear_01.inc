
#declare QUAL = 3;  // Quality level, 0=BBox, 1=no refr, 2=normal, 3=studlogo
#declare BUMPS = 1;  // 1=on 0=off
                 
#declare BUMPNORMAL = normal { bumps 0.01 scale 20 }
#declare AMB = 0.4;
#declare DIF = 0.4;

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

#declare _4_dash_4disc_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 1 }
#else
	cylinder { <0,-0.001,0>, <0,0.001,0>, 1 }
#end

#declare _4_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open }

#declare ring3_dot_dat = #if (version >= 3.1)
	disc { <0,0,0>, <0,1,0>, 4, 3 }
#else
	difference {
		cylinder { <0,-0.001,0>, <0,0.001,0>, 4 }
		cylinder { <0,-0.002,0>, <0,0.002,0>, 3 }
	}
#end
       
#declare _1_dash_4cyli_dot_dat = cylinder { <0,0,0>, <0,1,0>, 1 open clipped_by { box { <0,-1,0>,<2,2,2> } } }


#declare _3901_dot_dat = union {
// Minifig Hair Male
// Name: 3901.DAT
// Author: Chris Dee (chris_w_dee@hotmail.com)
// LDRAW_ORG Part UPDATE 2001-01
// KEYWORDS men, man, boy, short
	object { _4_dash_4disc_dot_dat matrix <6,0,0,0,1,0,0,0,6,0,-6,0> }
	object { _4_dash_4cyli_dot_dat matrix <6,0,0,0,-6,0,0,0,6,0,0,0> }
	object { ring3_dot_dat matrix <2,0,0,0,1,0,0,0,2,0,0,0> }
	object { _4_dash_4cyli_dot_dat matrix <8,0,0,0,-6,0,0,0,8,0,0,0> }
// 
	mesh {
		triangle { <-3.061,-6,7.391>, <-4.975,4,12.01>, <-9.192,4,9.192> }
		triangle { <-9.192,4,9.192>, <-5.657,-6,5.657>, <-3.061,-6,7.391> }
		triangle { <-5.657,-6,5.657>, <-9.192,4,9.192>, <-12.01,4,4.975> }
		triangle { <-12.01,4,4.975>, <-7.391,-6,3.061>, <-5.657,-6,5.657> }
		triangle { <-7.391,-6,3.061>, <-12.01,4,4.975>, <-13,4,0> }
		triangle { <-13,4,0>, <-8,-6,0>, <-7.391,-6,3.061> }
		triangle { <-8,-6,0>, <-13,4,0>, <-12.01,4,-4.975> }
		triangle { <-12.01,4,-4.975>, <-7.391,-6,-3.061>, <-8,-6,0> }
		triangle { <-7.391,-6,-3.061>, <-12.01,4,-4.975>, <-9.192,4,-9.192> }
		triangle { <-9.192,4,-9.192>, <-5.657,-6,-5.657>, <-7.391,-6,-3.061> }
		triangle { <-5.657,-6,-5.657>, <-9.192,4,-9.192>, <-4.975,4,-12.01> }
		triangle { <-4.975,4,-12.01>, <-3.061,-6,-7.391>, <-5.657,-6,-5.657> }
		triangle { <-3.061,-6,-7.391>, <-4.975,4,-12.01>, <0,4,-13> }
		triangle { <0,4,-13>, <0,-6,-8>, <-3.061,-6,-7.391> }
		triangle { <0,-6,-8>, <0,4,-13>, <4.975,4,-12.01> }
		triangle { <4.975,4,-12.01>, <3.061,-6,-7.391>, <0,-6,-8> }
		triangle { <3.061,-6,-7.391>, <4.975,4,-12.01>, <9.192,4,-9.192> }
		triangle { <9.192,4,-9.192>, <5.657,-6,-5.657>, <3.061,-6,-7.391> }
		triangle { <5.657,-6,-5.657>, <9.192,4,-9.192>, <12.01,4,-4.975> }
		triangle { <12.01,4,-4.975>, <7.391,-6,-3.061>, <5.657,-6,-5.657> }
		triangle { <7.391,-6,-3.061>, <12.01,4,-4.975>, <13,4,0> }
		triangle { <13,4,0>, <8,-6,0>, <7.391,-6,-3.061> }
		triangle { <8,-6,0>, <13,4,0>, <12.01,4,4.975> }
		triangle { <12.01,4,4.975>, <7.391,-6,3.061>, <8,-6,0> }
		triangle { <7.391,-6,3.061>, <12.01,4,4.975>, <9.192,4,9.192> }
		triangle { <9.192,4,9.192>, <5.657,-6,5.657>, <7.391,-6,3.061> }
		triangle { <5.657,-6,5.657>, <9.192,4,9.192>, <4.975,4,12.01> }
		triangle { <4.975,4,12.01>, <3.061,-6,7.391>, <5.657,-6,5.657> }
		triangle { <3.061,-6,7.391>, <4.975,4,12.01>, <0,4,13> }
		triangle { <0,4,13>, <0,-6,8>, <3.061,-6,7.391> }
		triangle { <0,-6,8>, <0,4,13>, <-4.975,4,12.01> }
		triangle { <-4.975,4,12.01>, <-3.061,-6,7.391>, <0,-6,8> }
	}
	object { _1_dash_4cyli_dot_dat matrix <9.192,0,9.192,0,12,0,-9.192,0,9.192,0,4,0> }
	mesh {
		triangle { <-9.192,4,-9.193>, <-9.192,6,-9.193>, <-4.975,5.771,-12.01> }
		triangle { <-4.975,5.771,-12.01>, <-4.975,4,-12.01>, <-9.192,4,-9.193> }
		triangle { <-4.975,4,-12.01>, <-4.975,5.771,-12.01>, <0,5.5,-13> }
		triangle { <0,5.5,-13>, <0,4,-13>, <-4.975,4,-12.01> }
		triangle { <0,4,-13>, <0,5.5,-13>, <4.975,5,-12.01> }
		triangle { <4.975,5,-12.01>, <4.975,4,-12.01>, <0,4,-13> }
		triangle { <4.975,4,-12.01>, <4.975,5,-12.01>, <9.192,4,-9.193> }
		triangle { <9.193,4,-9.192>, <9.655,8,-8.5>, <9.655,4,-8.5> }
		triangle { <9.655,4,-8.5>, <9.655,8,-8.5>, <10.658,12,-7> }
		triangle { <10.658,12,-7>, <10.658,4,-7>, <9.655,4,-8.5> }
		triangle { <10.658,4,-7>, <10.658,12,-7>, <11.326,12,-6> }
		triangle { <11.326,12,-6>, <11.326,4,-6>, <10.658,4,-7> }
		triangle { <12.304,4,3.5>, <12.304,12,3.5>, <12.372,10.278,3.158> }
		triangle { <12.372,10.278,3.158>, <12.372,4,3.158>, <12.304,4,3.5> }
		triangle { <12.372,4,3.158>, <12.372,10.278,3.158>, <12.566,8.818,2.182> }
		triangle { <12.566,8.818,2.182>, <12.566,4,2.182>, <12.372,4,3.158> }
		triangle { <12.566,4,2.182>, <12.566,8.818,2.182>, <12.856,7.842,0.722> }
		triangle { <12.856,7.842,0.722>, <12.856,4,0.722>, <12.566,4,2.182> }
		triangle { <12.856,4,0.722>, <12.856,7.842,0.722>, <12.801,7.5,-1> }
		triangle { <12.801,7.5,-1>, <12.801,4,-1>, <12.856,4,0.722> }
		triangle { <12.801,4,-1>, <12.801,7.5,-1>, <12.459,7.842,-2.722> }
		triangle { <12.459,7.842,-2.722>, <12.459,4,-2.722>, <12.801,4,-1> }
		triangle { <12.459,4,-2.722>, <12.459,7.842,-2.722>, <12.168,8.818,-4.182> }
		triangle { <12.168,8.818,-4.182>, <12.168,4,-4.182>, <12.459,4,-2.722> }
		triangle { <12.168,4,-4.182>, <12.168,8.818,-4.182>, <11.888,10.278,-5.158> }
		triangle { <11.888,10.278,-5.158>, <11.888,4,-5.158>, <12.168,4,-4.182> }
		triangle { <11.888,4,-5.158>, <11.888,10.278,-5.158>, <11.326,12,-6> }
		triangle { <11.326,12,-6>, <11.326,4,-6>, <11.888,4,-5.158> }
		triangle { <12.304,4,3.5>, <12.304,13,3.5>, <12.01,15,4.975> }
		triangle { <12.01,15,4.975>, <12.01,4,4.975>, <12.304,4,3.5> }
		triangle { <12.01,4,4.975>, <12.01,15,4.975>, <9.989,16,8> }
		triangle { <9.989,16,8>, <9.989,4,8>, <12.01,4,4.975> }
		triangle { <9.989,4,8>, <9.989,16,8>, <9.193,16,9.192> }
		triangle { <9.193,16,9.192>, <9.193,4,9.192>, <9.989,4,8> }
		triangle { <-9.193,4,-9.192>, <-9.193,6,-9.192>, <-10.992,12,-6.5> }
		triangle { <-10.992,12,-6.5>, <-10.992,4,-6.5>, <-9.193,4,-9.192> }
		triangle { <-10.992,4,-6.5>, <-10.992,12,-6.5>, <-11.326,12,-6> }
		triangle { <-11.326,12,-6>, <-11.326,4,-6>, <-10.992,4,-6.5> }
		triangle { <-12.304,4,3.5>, <-12.304,12,3.5>, <-12.372,10.278,3.158> }
		triangle { <-12.372,10.278,3.158>, <-12.372,4,3.158>, <-12.304,4,3.5> }
		triangle { <-12.372,4,3.158>, <-12.372,10.278,3.158>, <-12.566,8.818,2.182> }
		triangle { <-12.566,8.818,2.182>, <-12.566,4,2.182>, <-12.372,4,3.158> }
		triangle { <-12.566,4,2.182>, <-12.566,8.818,2.182>, <-12.856,7.842,0.722> }
		triangle { <-12.856,7.842,0.722>, <-12.856,4,0.722>, <-12.566,4,2.182> }
		triangle { <-12.856,4,0.722>, <-12.856,7.842,0.722>, <-12.801,7.5,-1> }
		triangle { <-12.801,7.5,-1>, <-12.801,4,-1>, <-12.856,4,0.722> }
		triangle { <-12.801,4,-1>, <-12.801,7.5,-1>, <-12.459,7.842,-2.722> }
		triangle { <-12.459,7.842,-2.722>, <-12.459,4,-2.722>, <-12.801,4,-1> }
		triangle { <-12.459,4,-2.722>, <-12.459,7.842,-2.722>, <-12.168,8.818,-4.182> }
		triangle { <-12.168,8.818,-4.182>, <-12.168,4,-4.182>, <-12.459,4,-2.722> }
		triangle { <-12.168,4,-4.182>, <-12.168,8.818,-4.182>, <-11.888,10.278,-5.158> }
		triangle { <-11.888,10.278,-5.158>, <-11.888,4,-5.158>, <-12.168,4,-4.182> }
		triangle { <-11.888,4,-5.158>, <-11.888,10.278,-5.158>, <-11.326,12,-6> }
		triangle { <-11.326,12,-6>, <-11.326,4,-6>, <-11.888,4,-5.158> }
		triangle { <-12.304,4,3.5>, <-12.304,13,3.5>, <-11.994,15,5> }
		triangle { <-11.994,15,5>, <-11.994,4,5>, <-12.304,4,3.5> }
		triangle { <-11.994,4,5>, <-11.994,15,5>, <-9.989,16,8> }
		triangle { <-9.989,16,8>, <-9.989,4,8>, <-11.994,4,5> }
		triangle { <-9.989,4,8>, <-9.989,16,8>, <-9.193,16,9.192> }
		triangle { <-9.193,16,9.192>, <-9.193,4,9.192>, <-9.989,4,8> }
// 
	}
	object { _4_dash_4disc_dot_dat matrix <4,0,0,0,1,0,0,0,4,0,-8,0> }
	mesh {
		triangle { <4,-8,0>, <8.315,-7,3.444>, <3.696,-8,1.531> }
		triangle { <4,-8,0>, <8.3,-7,0>, <8.315,-7,3.444> }
		triangle { <3.696,-8,1.531>, <8.315,-7,3.444>, <6.364,-7,6.364> }
		triangle { <6.364,-7,6.364>, <2.828,-8,2.828>, <3.696,-8,1.531> }
		triangle { <2.828,-8,2.828>, <6.364,-7,6.364>, <3.444,-7,8.315> }
		triangle { <3.444,-7,8.315>, <1.531,-8,3.696>, <2.828,-8,2.828> }
		triangle { <1.531,-8,3.696>, <3.444,-7,8.315>, <0,-7,9> }
		triangle { <0,-7,9>, <0,-8,4>, <1.531,-8,3.696> }
		triangle { <0,-8,4>, <0,-7,9>, <-3.444,-7,8.315> }
		triangle { <-3.444,-7,8.315>, <-1.531,-8,3.696>, <0,-8,4> }
		triangle { <-1.531,-8,3.696>, <-3.444,-7,8.315>, <-6.364,-7,6.364> }
		triangle { <-6.364,-7,6.364>, <-2.828,-8,2.828>, <-1.531,-8,3.696> }
		triangle { <-2.828,-8,2.828>, <-6.364,-7,6.364>, <-8.315,-7,3.444> }
		triangle { <-8.315,-7,3.444>, <-3.696,-8,1.531>, <-2.828,-8,2.828> }
		triangle { <-4,-8,0>, <-8.315,-7,3.444>, <-3.696,-8,1.531> }
		triangle { <-4,-8,0>, <-8.3,-7,0>, <-8.315,-7,3.444> }
// 
		triangle { <6.364,-7,6.364>, <9.192,-4,9.192>, <4.975,-4,12.01> }
		triangle { <4.975,-4,12.01>, <3.444,-7,8.315>, <6.364,-7,6.364> }
		triangle { <3.444,-7,8.315>, <4.975,-4,12.01>, <0,-4,13> }
		triangle { <0,-4,13>, <0,-7,9>, <3.444,-7,8.315> }
		triangle { <0,-7,9>, <0,-4,13>, <-4.975,-4,12.01> }
		triangle { <-4.975,-4,12.01>, <-3.444,-7,8.315>, <0,-7,9> }
		triangle { <-3.444,-7,8.315>, <-4.975,-4,12.01>, <-9.192,-4,9.192> }
		triangle { <-9.192,-4,9.192>, <-6.364,-7,6.364>, <-3.444,-7,8.315> }
// 
		triangle { <9.192,-4,9.192>, <10.607,-2,10.607>, <5.74,-2,13.858> }
		triangle { <5.74,-2,13.858>, <4.975,-4,12.01>, <9.192,-4,9.192> }
		triangle { <4.975,-4,12.01>, <5.74,-2,13.858>, <0,-2,15> }
		triangle { <0,-2,15>, <0,-4,13>, <4.975,-4,12.01> }
		triangle { <0,-4,13>, <0,-2,15>, <-5.74,-2,13.858> }
		triangle { <-5.74,-2,13.858>, <-4.975,-4,12.01>, <0,-4,13> }
		triangle { <-4.975,-4,12.01>, <-5.74,-2,13.858>, <-10.607,-2,10.607> }
		triangle { <-10.607,-2,10.607>, <-9.192,-4,9.192>, <-4.975,-4,12.01> }
// 
		triangle { <10.607,-2,10.607>, <11.314,2,11.314>, <6.123,2,14.782> }
		triangle { <6.123,2,14.782>, <5.74,-2,13.858>, <10.607,-2,10.607> }
		triangle { <5.74,-2,13.858>, <6.123,2,14.782>, <0,2,16> }
		triangle { <0,2,16>, <0,-2,15>, <5.74,-2,13.858> }
		triangle { <0,-2,15>, <0,2,16>, <-6.123,2,14.782> }
		triangle { <-6.123,2,14.782>, <-5.74,-2,13.858>, <0,-2,15> }
		triangle { <-5.74,-2,13.858>, <-6.123,2,14.782>, <-11.314,2,11.314> }
		triangle { <-11.314,2,11.314>, <-10.607,-2,10.607>, <-5.74,-2,13.858> }
		triangle { <11.314,2,11.314>, <6.123,2,14.783>, <6.123,5,14.783> }
		triangle { <6.123,5,14.783>, <11.314,5,11.314>, <11.314,2,11.314> }
		triangle { <6.123,2,14.783>, <0,2,16>, <0,5,16> }
		triangle { <0,5,16>, <6.123,5,14.783>, <6.123,2,14.783> }
		triangle { <0,2,16>, <-6.123,2,14.783>, <-6.123,5,14.783> }
		triangle { <-6.123,5,14.783>, <0,5,16>, <0,2,16> }
		triangle { <-6.123,2,14.783>, <-11.314,2,11.314>, <-11.314,5,11.314> }
		triangle { <-11.314,5,11.314>, <-6.123,5,14.783>, <-6.123,2,14.783> }
// 
		triangle { <11.314,5,11.314>, <10.607,11,10.607>, <5.74,11,13.858> }
		triangle { <5.74,11,13.858>, <6.123,5,14.782>, <11.314,5,11.314> }
		triangle { <6.123,5,14.782>, <5.74,11,13.858>, <0,11,15> }
		triangle { <0,11,15>, <0,5,16>, <6.123,5,14.782> }
		triangle { <0,5,16>, <0,11,15>, <-5.74,11,13.858> }
		triangle { <-5.74,11,13.858>, <-6.123,5,14.782>, <0,5,16> }
		triangle { <-6.123,5,14.782>, <-5.74,11,13.858>, <-10.607,11,10.607> }
		triangle { <-10.607,11,10.607>, <-11.314,5,11.314>, <-6.123,5,14.782> }
// 
		triangle { <10.607,11,10.607>, <9.192,16,9.192>, <4.975,16,12.01> }
		triangle { <4.975,16,12.01>, <5.74,11,13.858>, <10.607,11,10.607> }
		triangle { <5.74,11,13.858>, <4.975,16,12.01>, <0,16,13> }
		triangle { <0,16,13>, <0,11,15>, <5.74,11,13.858> }
		triangle { <0,11,15>, <0,16,13>, <-4.975,16,12.01> }
		triangle { <-4.975,16,12.01>, <-5.74,11,13.858>, <0,11,15> }
		triangle { <-5.74,11,13.858>, <-4.975,16,12.01>, <-9.192,16,9.192> }
		triangle { <-9.192,16,9.192>, <-10.607,11,10.607>, <-5.74,11,13.858> }
		triangle { <5.358,0,-12.934>, <5.74,5,-13.858>, <9.899,-2,-9.899> }
		triangle { <0,5.5,-15>, <5.358,0,-12.934>, <5.74,5,-13.858> }
		triangle { <0,5.5,-15>, <0,0,-14>, <5.358,0,-12.934> }
		triangle { <0,5.5,-15>, <0,0,-14>, <-5.358,0,-12.934> }
		triangle { <0,5.5,-15>, <-5.358,0,-12.934>, <-5.74,5.771,-13.858> }
// 
		triangle { <9.899,-2,-9.899>, <8.485,-4,-8.485>, <11,-3.5,-5> }
		triangle { <9.899,-2,-9.899>, <4.592,-4,-11.087>, <8.485,-4,-8.485> }
		triangle { <5.358,0,-12.934>, <4.592,-4,-11.087>, <9.899,-2,-9.899> }
		triangle { <0,0,-14>, <0,-4,-12>, <4.592,-4,-11.087> }
		triangle { <4.592,-4,-11.087>, <5.358,0,-12.934>, <0,0,-14> }
		triangle { <0,0,-14>, <0,-4,-12>, <-4.592,-4,-11.087> }
		triangle { <-4.592,-4,-11.087>, <-5.358,0,-12.934>, <0,0,-14> }
		triangle { <-5.358,0,-12.934>, <-4.592,-4,-11.087>, <-8.485,-4,-8.485> }
		triangle { <-10.252,2,-10.252>, <-5.358,0,-12.934>, <-8.485,-4,-8.485> }
		triangle { <-10.252,2,-10.252>, <-8.485,-4,-8.485>, <-11,1,-4> }
		triangle { <-8.485,-4,-8.485>, <-11.087,-4,-4.592>, <-11,1,-4> }
		triangle { <-11.087,-4,-4.592>, <-12,-4,0>, <-11,1,-4> }
		triangle { <-12,-4,0>, <-13.5,-1,0>, <-11,1,-4> }
		triangle { <-13.5,-1,0>, <-15,4,0>, <-11,1,-4> }
// 
		triangle { <11,-3.5,-5>, <8.3,-7,0>, <11.3,-3,0> }
		triangle { <11,-3.5,-5>, <7.391,-7,-3.061>, <8.3,-7,0> }
		triangle { <8.485,-4,-8.485>, <7.391,-7,-3.061>, <11,-3.5,-5> }
		triangle { <8.485,-4,-8.485>, <5.657,-7,-5.657>, <7.391,-7,-3.061> }
		triangle { <4.592,-4,-11.087>, <3.061,-7,-7.391>, <5.657,-7,-5.657> }
		triangle { <5.657,-7,-5.657>, <8.485,-4,-8.485>, <4.592,-4,-11.087> }
		triangle { <0,-4,-12>, <0,-7,-8>, <3.061,-7,-7.391> }
		triangle { <3.061,-7,-7.391>, <4.592,-4,-11.087>, <0,-4,-12> }
		triangle { <0,-4,-12>, <0,-7,-8>, <-3.061,-7,-7.391> }
		triangle { <-3.061,-7,-7.391>, <-4.592,-4,-11.087>, <0,-4,-12> }
		triangle { <-4.592,-4,-11.087>, <-3.061,-7,-7.391>, <-5.657,-7,-5.657> }
		triangle { <-5.657,-7,-5.657>, <-8.485,-4,-8.485>, <-4.592,-4,-11.087> }
		triangle { <-8.485,-4,-8.485>, <-5.657,-7,-5.657>, <-7.391,-7,-3.061> }
		triangle { <-7.391,-7,-3.061>, <-11.087,-4,-4.592>, <-8.485,-4,-8.485> }
		triangle { <-7.391,-7,-3.061>, <-8.3,-7,0>, <-12,-4,0> }
		triangle { <-11.087,-4,-4.592>, <-7.391,-7,-3.061>, <-12,-4,0> }
// 
		triangle { <7.391,-7,-3.061>, <3.696,-8,-1.531>, <4,-8,0> }
		triangle { <7.391,-7,-3.061>, <4,-8,0>, <8.3,-7,0> }
		triangle { <5.657,-7,-5.657>, <2.828,-8,-2.828>, <3.696,-8,-1.531> }
		triangle { <3.696,-8,-1.531>, <7.391,-7,-3.061>, <5.657,-7,-5.657> }
		triangle { <3.061,-7,-7.391>, <1.531,-8,-3.696>, <2.828,-8,-2.828> }
		triangle { <2.828,-8,-2.828>, <5.657,-7,-5.657>, <3.061,-7,-7.391> }
		triangle { <0,-7,-8>, <0,-8,-4>, <1.531,-8,-3.696> }
		triangle { <1.531,-8,-3.696>, <3.061,-7,-7.391>, <0,-7,-8> }
		triangle { <0,-7,-8>, <0,-8,-4>, <-1.531,-8,-3.696> }
		triangle { <-1.531,-8,-3.696>, <-3.061,-7,-7.391>, <0,-7,-8> }
		triangle { <-3.061,-7,-7.391>, <-1.531,-8,-3.696>, <-2.828,-8,-2.828> }
		triangle { <-2.828,-8,-2.828>, <-5.657,-7,-5.657>, <-3.061,-7,-7.391> }
		triangle { <-5.657,-7,-5.657>, <-2.828,-8,-2.828>, <-3.696,-8,-1.531> }
		triangle { <-3.696,-8,-1.531>, <-7.391,-7,-3.061>, <-5.657,-7,-5.657> }
		triangle { <-7.391,-7,-3.061>, <-4,-8,0>, <-8.3,-7,0> }
		triangle { <-7.391,-7,-3.061>, <-3.696,-8,-1.531>, <-4,-8,0> }
// 
		triangle { <-10.253,6,-10.253>, <-9.192,6,-9.193>, <-4.975,5.771,-12.01> }
		triangle { <-4.975,5.771,-12.01>, <-5.74,5.771,-13.858>, <-10.253,6,-10.253> }
		triangle { <-5.74,5.771,-13.858>, <-4.975,5.771,-12.01>, <0,5.5,-13> }
		triangle { <0,5.5,-13>, <0,5.5,-15>, <-5.74,5.771,-13.858> }
		triangle { <0,5.5,-15>, <0,5.5,-13>, <4.975,5,-12.01> }
		triangle { <4.975,5,-12.01>, <5.74,5,-13.858>, <0,5.5,-15> }
		triangle { <5.74,5,-13.858>, <4.975,5,-12.01>, <9.192,4,-9.193> }
		triangle { <9.192,4,-9.193>, <9.899,4,-9.899>, <5.74,5,-13.858> }
		triangle { <9.193,4,-9.192>, <9.655,8,-8.5>, <11.655,8,-8.5> }
		triangle { <9.193,4,-9.192>, <9.899,4,-9.899>, <11.655,8,-8.5> }
		triangle { <11.655,8,-8.5>, <9.655,8,-8.5>, <10.658,12,-7> }
		triangle { <10.658,12,-7>, <12.658,12,-7>, <11.655,8,-8.5> }
		triangle { <12.658,12,-7>, <10.658,12,-7>, <11.326,12,-6> }
		triangle { <11.326,12,-6>, <13.326,12,-6>, <12.658,12,-7> }
		triangle { <14.304,12,3.5>, <12.304,12,3.5>, <12.372,10.278,3.158> }
		triangle { <12.372,10.278,3.158>, <14.372,10.278,3.158>, <14.304,12,3.5> }
		triangle { <14.372,10.278,3.158>, <12.372,10.278,3.158>, <12.566,8.818,2.182> }
		triangle { <12.566,8.818,2.182>, <14.566,8.818,2.182>, <14.372,10.278,3.158> }
		triangle { <14.566,8.818,2.182>, <12.566,8.818,2.182>, <12.856,7.842,0.722> }
		triangle { <12.856,7.842,0.722>, <14.856,7.842,0.722>, <14.566,8.818,2.182> }
		triangle { <14.856,7.842,0.72>, <12.856,7.842,0.722>, <12.801,7.5,-1> }
		triangle { <12.801,7.5,-1>, <14.801,7.5,-1>, <14.856,7.842,0.72> }
		triangle { <14.801,7.5,-1>, <12.801,7.5,-1>, <12.459,7.842,-2.722> }
		triangle { <12.459,7.842,-2.722>, <14.459,7.842,-2.722>, <14.801,7.5,-1> }
		triangle { <14.459,7.842,-2.722>, <12.459,7.842,-2.722>, <12.168,8.818,-4.182> }
		triangle { <12.168,8.818,-4.182>, <14.168,8.818,-4.182>, <14.459,7.842,-2.722> }
		triangle { <14.168,8.818,-4.182>, <12.168,8.818,-4.182>, <11.888,10.278,-5.158> }
		triangle { <11.888,10.278,-5.158>, <13.888,10.278,-5.158>, <14.168,8.818,-4.182> }
		triangle { <13.888,10.278,-5.158>, <11.888,10.278,-5.158>, <11.326,12,-6> }
		triangle { <11.326,12,-6>, <13.326,12,-6>, <13.888,10.278,-5.158> }
		triangle { <14.304,12,3.5>, <12.304,12,3.5>, <12.304,13,3.5> }
		triangle { <12.304,13,3.5>, <14.304,13,3.5>, <14.304,12,3.5> }
		triangle { <14.304,13,3.5>, <12.304,13,3.5>, <12.01,15,4.975> }
		triangle { <12.01,15,4.975>, <14.01,15,4.975>, <14.304,13,3.5> }
		triangle { <14.01,15,4.975>, <12.01,15,4.975>, <9.989,16,8> }
		triangle { <9.989,16,8>, <10.989,16,8>, <14.01,15,4.975> }
		triangle { <10.989,16,8>, <9.989,16,8>, <9.193,16,9.192> }
		triangle { <-9.193,6,-9.192>, <-10.252,6,-10.252>, <-12.992,12,-6.5> }
		triangle { <-9.193,6,-9.192>, <-10.992,12,-6.5>, <-12.992,12,-6.5> }
		triangle { <-12.992,12,-6.5>, <-10.992,12,-6.5>, <-11.326,12,-6> }
		triangle { <-11.326,12,-6>, <-13.326,12,-6>, <-12.992,12,-6.5> }
		triangle { <-14.304,12,3.5>, <-12.304,12,3.5>, <-12.372,10.278,3.158> }
		triangle { <-12.372,10.278,3.158>, <-14.372,10.278,3.158>, <-14.304,12,3.5> }
		triangle { <-14.372,10.278,3.158>, <-12.372,10.278,3.158>, <-12.566,8.818,2.182> }
		triangle { <-12.566,8.818,2.182>, <-14.566,8.818,2.182>, <-14.372,10.278,3.158> }
		triangle { <-14.566,8.818,2.182>, <-12.566,8.818,2.182>, <-12.856,7.842,0.722> }
		triangle { <-12.856,7.842,0.722>, <-14.856,7.842,0.722>, <-14.566,8.818,2.182> }
		triangle { <-14.856,7.842,0.722>, <-12.856,7.842,0.722>, <-12.801,7.5,-1> }
		triangle { <-12.801,7.5,-1>, <-14.801,7.5,-1>, <-14.856,7.842,0.722> }
		triangle { <-14.801,7.5,-1>, <-12.801,7.5,-1>, <-12.459,7.842,-2.722> }
		triangle { <-12.459,7.842,-2.722>, <-14.459,7.842,-2.722>, <-14.801,7.5,-1> }
		triangle { <-14.459,7.842,-2.722>, <-12.459,7.842,-2.722>, <-12.168,8.818,-4.182> }
		triangle { <-12.168,8.818,-4.182>, <-14.168,8.818,-4.182>, <-14.459,7.842,-2.722> }
		triangle { <-14.168,8.818,-4.182>, <-12.168,8.818,-4.182>, <-11.888,10.278,-5.158> }
		triangle { <-11.888,10.278,-5.158>, <-13.888,10.278,-5.158>, <-14.168,8.818,-4.182> }
		triangle { <-13.888,10.278,-5.158>, <-11.888,10.278,-5.158>, <-11.326,12,-6> }
		triangle { <-11.326,12,-6>, <-13.326,12,-6>, <-13.888,10.278,-5.158> }
		triangle { <-14.304,12,3.5>, <-12.304,12,3.5>, <-12.304,13,3.5> }
		triangle { <-12.304,13,3.5>, <-14.304,13,3.5>, <-14.304,12,3.5> }
		triangle { <-14.304,13,3.5>, <-12.304,13,3.5>, <-11.994,15,5> }
		triangle { <-11.994,15,5>, <-13.994,15,5>, <-14.304,13,3.5> }
		triangle { <-13.994,15,5>, <-11.994,15,5>, <-9.989,16,8> }
		triangle { <-9.989,16,8>, <-10.989,16,8>, <-13.994,15,5> }
		triangle { <-10.989,16,8>, <-9.989,16,8>, <-9.193,16,9.192> }
// 
// 
		triangle { <11.655,8,-8.5>, <12.658,12,-7>, <13.326,12,-6> }
		triangle { <11.655,8,-8.5>, <13.326,12,-6>, <13.888,10.278,-5.158> }
		triangle { <11.655,8,-8.5>, <13.888,10.278,-5.158>, <14.168,8.818,-4.182> }
		triangle { <11.655,8,-8.5>, <14.168,8.818,-4.182>, <13.7,5.4,-4.6> }
		triangle { <11.655,8,-8.5>, <12.5,2,-5>, <13.7,5.4,-4.6> }
		triangle { <13.7,5.4,-4.6>, <14.168,8.818,-4.182>, <14.459,7.842,-2.722> }
		triangle { <13.7,5.4,-4.6>, <14.459,7.842,-2.722>, <14.801,7.5,-1> }
		triangle { <13.7,5.4,-4.6>, <14.801,7.5,-1>, <15,4,0> }
		triangle { <13.7,5.4,-4.6>, <15,4,0>, <12.5,2,-5> }
		triangle { <12.5,2,-5>, <15,4,0>, <13.5,-1,0> }
		triangle { <12.5,2,-5>, <13.5,-1,0>, <11.3,-3,0> }
		triangle { <5.74,5,-13.85>, <9.899,-2,-9.899>, <9.899,4,-9.899> }
		triangle { <9.899,-2,-9.899>, <9.899,4,-9.899>, <11,0.5,-5> }
		triangle { <11,0.5,-5>, <11,-3.5,-5>, <9.899,-2,-9.899> }
		triangle { <11,0.5,-5>, <11,-3.5,-5>, <11.3,-3,0> }
		triangle { <11.655,8,-8.5>, <9.899,4,-9.899>, <11,0.5,-5> }
		triangle { <11.655,8,-8.5>, <12.5,2,-5>, <11,0.5,-5> }
		triangle { <11,0.5,-5>, <12.5,2,-5>, <11.3,-3,0> }
// 
		triangle { <-11,1,-4>, <-10.252,2,-10.252>, <-10.252,6,-10.252> }
		triangle { <-11.252,6,-9.252>, <-10.252,6,-10.252>, <-11,1,-4> }
		triangle { <-10.253,6,-10.253>, <-5.74,5.771,-13.858>, <-10.252,2,-10.252> }
		triangle { <-5.74,5.771,-13.858>, <-10.252,2,-10.252>, <-5.358,0,-12.934> }
		triangle { <-11.252,6,-9.252>, <-10.252,6,-10.252>, <-12.992,12,-6.5> }
		triangle { <-11.252,6,-9.252>, <-12.992,12,-6.5>, <-13.326,12,-6> }
		triangle { <-11.252,6,-9.252>, <-13.888,10.278,-5.158>, <-13.326,12,-6> }
		triangle { <-11.252,6,-9.252>, <-14.168,8.818,-4.182>, <-13.888,10.278,-5.158> }
		triangle { <-11.252,6,-9.252>, <-11,1,-4>, <-13,4.5,-5> }
		triangle { <-14.459,7.842,-2.722>, <-14.168,8.818,-4.182>, <-13,4.5,-5> }
		triangle { <-14.801,7.5,-1>, <-14.459,7.842,-2.722>, <-13,4.5,-5> }
		triangle { <-14.168,8.818,-4.182>, <-13,4.5,-5>, <-11.252,6,-9.252> }
		triangle { <-13,4.5,-5>, <-11,1,-4>, <-15,4,0> }
		triangle { <-13,4.5,-5>, <-15,4,0>, <-14.801,7.5,-1> }
// 
		triangle { <8.315,-7,3.444>, <11.3,-3,0>, <8.3,-7,0> }
		triangle { <10.625,-4,4.401>, <8.315,-7,3.444>, <11.3,-3,0> }
		triangle { <10.625,-4,4.401>, <11.3,-3,0>, <12.01,-2,4.975> }
		triangle { <12.01,-2,4.975>, <11.3,-3,0>, <13.5,-1,0> }
		triangle { <12.01,-2,4.975>, <13.5,-1,0>, <13.858,2,5.74> }
		triangle { <13.858,2,5.74>, <13.5,-1,0>, <15,4,0> }
		triangle { <13.858,2,5.74>, <15,4,0>, <14.782,5,6.123> }
		triangle { <14.782,5,6.123>, <15,4,0>, <14.801,7.5,-1> }
		triangle { <14.782,5,6.123>, <14.801,7.5,-1>, <14.856,7.842,0.722> }
		triangle { <14.782,5,6.123>, <14.856,7.842,0.722>, <14.566,8.818,2.182> }
		triangle { <14.782,5,6.123>, <14.566,8.818,2.182>, <14.372,10.278,3.158> }
		triangle { <14.782,5,6.123>, <14.372,10.278,3.158>, <14.32,11,5.932> }
		triangle { <14.32,11,5.932>, <14.372,10.278,3.158>, <14.304,12,3.5> }
		triangle { <14.32,11,5.932>, <14.304,12,3.5>, <14.304,13,3.5> }
		triangle { <14.32,11,5.932>, <14.304,13,3.5>, <14.01,15,4.975> }
		triangle { <10.625,-4,4.401>, <8.315,-7,3.444>, <9.192,-4,9.192> }
		triangle { <6.364,-7,6.364>, <8.315,-7,3.444>, <9.192,-4,9.192> }
		triangle { <10.625,-4,4.401>, <9.192,-4,9.192>, <12.01,-2,4.975> }
		triangle { <12.01,-2,4.975>, <9.192,-4,9.192>, <10.607,-2,10.607> }
		triangle { <12.01,-2,4.975>, <10.607,-2,10.607>, <13.858,2,5.74> }
		triangle { <13.858,2,5.74>, <10.607,-2,10.607>, <11.314,2,11.314> }
		triangle { <13.858,2,5.74>, <11.314,2,11.314>, <14.782,5,6.123> }
		triangle { <14.782,5,6.123>, <11.314,2,11.314>, <11.314,5,11.314> }
		triangle { <14.782,5,6.123>, <11.314,5,11.314>, <14.32,11,5.932> }
		triangle { <14.32,11,5.932>, <11.314,5,11.314>, <10.607,11,10.607> }
		triangle { <14.32,11,5.932>, <10.607,11,10.607>, <14.01,15,4.975> }
		triangle { <10.607,11,10.607>, <14.01,15,4.975>, <10.989,16,8> }
		triangle { <10.607,11,10.607>, <10.989,16,8>, <9.192,16,9.192> }
// 
		triangle { <-8.315,-7,3.444>, <-12,-4,0>, <-8.3,-7,0> }
		triangle { <-10.625,-4,4.401>, <-8.315,-7,3.444>, <-12,-4,0> }
		triangle { <-10.625,-4,4.401>, <-12,-4,0>, <-12.01,-2,4.975> }
		triangle { <-12.01,-2,4.975>, <-12,-4,0>, <-13.5,-1,0> }
		triangle { <-12.01,-2,4.975>, <-13.5,-1,0>, <-13.858,2,5.74> }
		triangle { <-13.858,2,5.74>, <-13.5,-1,0>, <-15,4,0> }
		triangle { <-13.858,2,5.74>, <-15,4,0>, <-14.782,5,6.123> }
		triangle { <-14.782,5,6.123>, <-15,4,0>, <-14.801,7.5,-1> }
		triangle { <-14.782,5,6.123>, <-14.801,7.5,-1>, <-14.856,7.842,0.722> }
		triangle { <-14.782,5,6.123>, <-14.856,7.842,0.722>, <-14.566,8.818,2.182> }
		triangle { <-14.782,5,6.123>, <-14.566,8.818,2.182>, <-14.372,10.278,3.158> }
		triangle { <-14.782,5,6.123>, <-14.372,10.278,3.158>, <-14.32,11,5.932> }
		triangle { <-14.32,11,5.932>, <-14.372,10.278,3.158>, <-14.304,12,3.5> }
		triangle { <-14.32,11,5.932>, <-14.304,12,3.5>, <-14.304,13,3.5> }
		triangle { <-14.32,11,5.932>, <-14.304,13,3.5>, <-14.01,15,4.975> }
		triangle { <-10.625,-4,4.401>, <-8.315,-7,3.444>, <-9.192,-4,9.192> }
		triangle { <-6.364,-7,6.364>, <-8.315,-7,3.444>, <-9.192,-4,9.192> }
		triangle { <-10.625,-4,4.401>, <-9.192,-4,9.192>, <-12.01,-2,4.975> }
		triangle { <-12.01,-2,4.975>, <-9.192,-4,9.192>, <-10.607,-2,10.607> }
		triangle { <-12.01,-2,4.975>, <-10.607,-2,10.607>, <-13.858,2,5.74> }
		triangle { <-13.858,2,5.74>, <-10.607,-2,10.607>, <-11.314,2,11.314> }
		triangle { <-13.858,2,5.74>, <-11.314,2,11.314>, <-14.782,5,6.123> }
		triangle { <-14.782,5,6.123>, <-11.314,2,11.314>, <-11.314,5,11.314> }
		triangle { <-14.782,5,6.123>, <-11.314,5,11.314>, <-14.32,11,5.932> }
		triangle { <-14.32,11,5.932>, <-11.314,5,11.314>, <-10.607,11,10.607> }
		triangle { <-14.32,11,5.932>, <-10.607,11,10.607>, <-14.01,15,4.975> }
		triangle { <-10.607,11,10.607>, <-14.01,15,4.975>, <-10.989,16,8> }
		triangle { <-10.607,11,10.607>, <-10.989,16,8>, <-9.192,16,9.192> }
// 
	}
}


#declare this_object = object {
// Untitled
// Name: minifig_tool03.ldr
// Author: MLCad
// Unofficial Model
// ROTATION CENTER 0 0 0 1 "Custom"
// ROTATION CONFIG 0 0
	object {
		_3901_dot_dat
	}
// 
}



