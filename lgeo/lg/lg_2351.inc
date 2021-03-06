/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980818 Lutz Uhlmann                                                       */
/* 20071118 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2351: Crane Arm Center                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2351)
#else
#declare lg_2351 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    box {
     <LG_E, 0.1, 0.5>,
     <0.5, -0.1, -0.5>
    }
    translate <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.16+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.16+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.16+LG_CORNER_SPACE+LG_E, -LG_WALL_WIDTH>
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.04, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH, 0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2>,
    <7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>
   }
   box {
    <8*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <7*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   #declare HOLE_X=6.5;
   #while (HOLE_X>-8)
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <HOLE_X*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_KNOB_RADIUS+0.12-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <HOLE_X*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    #declare HOLE_X=HOLE_X-1;
   #end
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <7.6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 3.5*LG_WALL_WIDTH>,
  <7.4*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -3.5*LG_WALL_WIDTH>
 }
 cylinder {
  <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 3.5*LG_WALL_WIDTH>,
  <7.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, 3.5*LG_WALL_WIDTH>,
  0.08
 }
 cylinder {
  <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, -3.5*LG_WALL_WIDTH>,
  <7.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -3.5*LG_WALL_WIDTH>,
  0.08
 }
 cylinder {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   cylinder {
    <0, 2*LG_WALL_WIDTH, 0>,
    <0, -2*LG_WALL_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <LG_E, 0.4, 0.5>,
    <0.5, -0.4, -0.5>
   }
   cylinder {
    <0, 2*LG_WALL_WIDTH+LG_E, 0>,
    <0, -2*LG_WALL_WIDTH-LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  translate <-7.5*LG_BRICK_WIDTH, 0, 0>
 }
 #declare HOLE_X=6.5;
 #while (HOLE_X>-8)
  difference {
   union {
    cylinder {
     <0, 2*LG_WALL_WIDTH, 0>,
     <0, -2*LG_WALL_WIDTH, 0>,
     LG_KNOB_RADIUS+0.12-LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     <0, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     LG_KNOB_RADIUS+0.12
    }
   }
   union {
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_E, 0>,
     <0, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <0, -2*LG_WALL_WIDTH-LG_E, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_E, 0>,
     <0, -2*LG_WALL_WIDTH-LG_E, 0>,
     LG_KNOB_RADIUS
    }
   }
   translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X=HOLE_X-1;
 #end
 box {
  <7.2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 2.5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 difference {
  box {
   <-7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH/2, 2*LG_WALL_WIDTH>,
   <7*LG_BRICK_WIDTH+LG_E, -LG_WALL_WIDTH/2, -2*LG_WALL_WIDTH>
  }
  union {
   #declare HOLE_Y=6.5;
   #while (HOLE_X>-8)
    cylinder {
     <0, -LG_WALL_WIDTH, 0>,
     <0, LG_WALL_WIDTH, 0>,
     LG_KNOB_RADIUS+LG_E
     translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE_X=HOLE_X-1;
   #end
  }
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH>
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  rotate <-90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  rotate <-90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  rotate <90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  rotate <90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>
 }
}

#declare lg_2351_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    box {
     <LG_E, 0.1, 0.5>,
     <0.5, -0.1, -0.5>
    }
    translate <-7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.16+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.16+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.04+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.16+LG_CORNER_SPACE+LG_E, -LG_WALL_WIDTH>
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.04, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0.04+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH, 0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2>,
    <7*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_BRICK_WIDTH/2>
   }
   box {
    <8*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <7*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>,
    <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   #declare HOLE_X=6.5;
   #while (HOLE_X>-8)
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <HOLE_X*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_KNOB_RADIUS+0.12-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <HOLE_X*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    #declare HOLE_X=HOLE_X-1;
   #end
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <7.6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 3.5*LG_WALL_WIDTH>,
  <7.4*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -3.5*LG_WALL_WIDTH>
 }
 cylinder {
  <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 3.5*LG_WALL_WIDTH>,
  <7.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, 3.5*LG_WALL_WIDTH>,
  0.08
 }
 cylinder {
  <7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, -3.5*LG_WALL_WIDTH>,
  <7.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -3.5*LG_WALL_WIDTH>,
  0.08
 }
 cylinder {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, 2.5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   cylinder {
    <0, 2*LG_WALL_WIDTH, 0>,
    <0, -2*LG_WALL_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <LG_E, 0.4, 0.5>,
    <0.5, -0.4, -0.5>
   }
   cylinder {
    <0, 2*LG_WALL_WIDTH+LG_E, 0>,
    <0, -2*LG_WALL_WIDTH-LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  translate <-7.5*LG_BRICK_WIDTH, 0, 0>
 }
 #declare HOLE_X=6.5;
 #while (HOLE_X>-8)
  difference {
   merge {
    cylinder {
     <0, 2*LG_WALL_WIDTH, 0>,
     <0, -2*LG_WALL_WIDTH, 0>,
     LG_KNOB_RADIUS+0.12-LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     <0, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     LG_KNOB_RADIUS+0.12
    }
   }
   union {
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_E, 0>,
     <0, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <0, -2*LG_WALL_WIDTH-LG_E, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_E, 0>,
     <0, -2*LG_WALL_WIDTH-LG_E, 0>,
     LG_KNOB_RADIUS
    }
   }
   translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X=HOLE_X-1;
 #end
 box {
  <7.2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 2.5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <7*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 difference {
  box {
   <-7.5*LG_BRICK_WIDTH, LG_WALL_WIDTH/2, 2*LG_WALL_WIDTH>,
   <7*LG_BRICK_WIDTH+LG_E, -LG_WALL_WIDTH/2, -2*LG_WALL_WIDTH>
  }
  union {
   #declare HOLE_Y=6.5;
   #while (HOLE_X>-8)
    cylinder {
     <0, -LG_WALL_WIDTH, 0>,
     <0, LG_WALL_WIDTH, 0>,
     LG_KNOB_RADIUS+LG_E
     translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE_X=HOLE_X-1;
   #end
  }
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH>
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <7.2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
  <-7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  rotate <-90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  rotate <-90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  rotate <90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, 2.5*LG_WALL_WIDTH>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  rotate <90, 0, 0>
  translate <7.5*LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH>
 }
}

#end
