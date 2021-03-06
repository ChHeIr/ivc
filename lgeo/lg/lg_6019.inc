/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/* 20071101 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6019: Plate 1 x 1 with Clip Horizontal                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6019)
#else
#declare lg_angle = acos((0.13+LG_CORNER_SPACE)/(0.16+LG_CORNER_SPACE));
#declare lg_6019 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
 }
 cylinder {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>
 }
 box {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13>
 }
 box {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE-LG_E>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13>
 }
 intersection {
  union {
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
      0.32
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
  box {
   <LG_BRICK_WIDTH, 0.2, 0.4>,
   <LG_BRICK_WIDTH/2, -0.2, -0.4>
  }
  translate <0, 0, -0.08>
 }
 intersection {
  union {
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <0, 0.2, 0.2>,
    <-0.4, -0.2, -0.2>
    rotate <0, lg_angle*180/pi, 0>
   }
   box {
    <0, 0.2, 0.2>,
    <-0.2, -0.2, -0.2>
    rotate <0, -lg_angle*180/pi, 0>
   }
  }
  translate <LG_BRICK_WIDTH, 0, -0.08>
 }
 difference {
  box {
   <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH, -0.08>,
    <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08>,
    <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, -0.08>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08>,
    <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -0.08>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E, -0.08+0.13+LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, -0.08-0.13-LG_CORNER_SPACE>
    }
    union {
     box {
      <0, 0.2, 0.2>,
      <-0.4, -0.2, -0.2>
      rotate <0, -lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -0.08>
     }
     box {
      <0, 0.2, 0.2>,
      <-0.4, -0.2, -0.2>
      rotate <0, -lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -0.08>
     }
    }
   }
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_6019_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
 }
 cylinder {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>
 }
 box {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+0.13+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08+0.13>
 }
 box {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH+(LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)*sin(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08-0.13-LG_CORNER_SPACE-LG_E>,
  <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08-0.13>
 }
 intersection {
  merge {
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
      0.32
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH, 0>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
      <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
      <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
  box {
   <LG_BRICK_WIDTH, 0.2, 0.4>,
   <LG_BRICK_WIDTH/2, -0.2, -0.4>
  }
  translate <0, 0, -0.08>
 }
 intersection {
  union {
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <0, 0.2, 0.2>,
    <-0.4, -0.2, -0.2>
    rotate <0, lg_angle*180/pi, 0>
   }
   box {
    <0, 0.2, 0.2>,
    <-0.2, -0.2, -0.2>
    rotate <0, -lg_angle*180/pi, 0>
   }
  }
  translate <LG_BRICK_WIDTH, 0, -0.08>
 }
 difference {
  box {
   <LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -0.08-2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH, -0.08>,
    <LG_BRICK_WIDTH, -LG_WALL_WIDTH, -0.08>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08>,
    <LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, -0.08>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -0.08>,
    <LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, -0.08>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E, -0.08+0.13+LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E, -0.08-0.13-LG_CORNER_SPACE>
    }
    union {
     box {
      <0, 0.2, 0.2>,
      <-0.4, -0.2, -0.2>
      rotate <0, -lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -0.08>
     }
     box {
      <0, 0.2, 0.2>,
      <-0.4, -0.2, -0.2>
      rotate <0, -lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -0.08>
     }
    }
   }
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#end
