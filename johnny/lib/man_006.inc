// Persistence of Vision RayTracer version 3.0 Scene description file
// File: MAN_006.INC
// Description: Lego no. 6515: A little pilot, for the Stunt Copter!
// Finished: 96/06/29 - 20:48
// Author: Anton Raves
//
// Version: 0008

#include "man_006.lib"

#declare head06_tex =
texture {
  material_map { gif "face_1.gif" once interpolate 4
    texture { black_tex }
    texture { black_tex }
    texture { yellow_tex }
  }
  translate <-0.5, -0.1, 0>
  scale <12, 12, 1>
}

#declare shirt06_tex =
texture {
  material_map { gif "shirt_5.gif" once interpolate 4
    texture { red_tex }
    texture { white_tex }
    texture { green_tex }
  }
  translate <-0.5, 0, 0>
  scale <15, 12.4, 1>
}
  
#declare head_06 =
union {
  difference {
    object { head texture { yellow_tex } }
    box { <-10, -1, -10> <10, 20, 0.000001> }
  }
  difference {
    object { head texture { head06_tex } }
    box { <-10, -1, -0.000001> <10, 20, 10> }
  }
}

#declare ma6_larm =
union {
  object { left_arm texture { white_tex } }
  object { hand rotate -45*x translate <2.15, -7.5, -3.5> texture { yellow_tex } }
}

#declare ma6_rarm =
union {
  object { right_arm texture { white_tex } }
  object { hand rotate -45*x translate <-2.15, -7.5, -3.5> texture { yellow_tex } }
}

#declare ma6_helmet =
union {
  object { vizor_1 texture { t_cyan_tex } translate <-1, -0.25, 0> }
  object { helmet texture { red_tex } }
}

#declare openma6_helmet =
union {
  object { vizor_1 rotate -70*z texture { t_cyan_tex } translate <-1, -0.25, 0> }
  object { helmet texture { red_tex } }
}

#declare man_006upper =
union {
  object { leg_joiner texture { green_tex } }
  merge {
    object { body translate <0, 5.05, 0> texture { white_tex } }
    object { body_paint texture { shirt06_tex } translate <0, 5.05, 0> }
  }
  object { ma6_larm rotate 10*z translate <6.15, 14.05, 0> }
  object { ma6_rarm rotate -10*z translate <-6.15, 14.05, 0> }
  object { head_06 translate <0, 17.55, 0> texture { yellow_tex } }
  object { ma6_helmet rotate -90*y translate <0, 24.05, 0> }
}

#declare man_006upper2 =
union {
  object { leg_joiner texture { green_tex } }
  merge {
    object { body translate <0, 5.05, 0> texture { white_tex } }
    object { body_paint texture { shirt06_tex } translate <0, 5.05, 0> }
  }
  object { ma6_larm rotate <70, 0, 10> translate <6.15, 14.05, 0> }
  object { ma6_rarm rotate <70, 0, -10> translate <-6.15, 14.05, 0> }
  object { head_06 translate <0, 17.55, 0> texture { yellow_tex } }
  object { ma6_helmet rotate -90*y translate <0, 24.05, 0> }
}

#declare man_006 =
union {
  object { left_leg translate <0, 11, 0> texture { green_tex } }
  object { right_leg translate <0, 11, 0> texture { green_tex } }
  object { man_006upper translate <0, 11, 0> }
  bounded_by { box { <-16, -0.25, -12> <14.5, 40.55, 16.25> } }
}

// This one is sitting.
#declare man_006s =
union {
  object { left_leg rotate 90*x translate <0, 3, 0> texture { green_tex } }
  object { right_leg rotate 90*x translate <0, 3, 0> texture { green_tex } }
  object { man_006upper translate <0, 3, 0> }
  bounded_by { box { <-16, -0.25, -12> <14.5, 32.55, 16.25> } }
}

// This one is sitting and driving. He is seated bending forward, so that he can sit in the
// small helicopter, where there is a little room.
#declare man_006d =
union {
  object { left_leg rotate 90*x translate <0, 3, 0> texture { green_tex } }
  object { right_leg rotate 90*x translate <0, 3, 0> texture { green_tex } }
  object { man_006upper2 rotate -8*x translate <0, 3, 0> }
  bounded_by { box { <-16, -0.25, -13> <14.5, 32.55, 16.25> } }
}

