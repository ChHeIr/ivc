/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971118 Lutz Uhlmann                                                       */
/* 20071124 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2430: Hinge Plate 1 x 4 Top                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2430)
#else
#declare lg_angle=atan2(LG_CORNER_SPACE, LG_CYLINDER_RADIUS+LG_CORNER_SPACE);
#declare lg_2430 =
union {
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  <-(LG_CYLINDER_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_CYLINDER_RADIUS+2*LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  union {
   cone {
    <0, 0, -LG_PLATE_HEIGHT+0.05>, LG_KNOB_INNER_RADIUS+0.025
    <0, 0, -LG_PLATE_HEIGHT>, LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT/2+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
  box {
   <0.03, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
   <-0.03, -LG_BRICK_WIDTH/2, -0.5*LG_PLATE_HEIGHT>
   rotate <0, 0, 45>
  }
 }
 difference {
  box {
   <0, 0, -LG_PLATE_HEIGHT/2>,
   <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
  }
  union {
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT/2+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_CYLINDER_RADIUS+LG_CORNER_SPACE
   }
   box {
    <-LG_WALL_WIDTH, -LG_WALL_WIDTH, 0>,
    <-3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
    <0, 0, -LG_PLATE_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, 0>,
    <0, 0, -LG_PLATE_HEIGHT>
    rotate <0, 0, -lg_angle*180/pi>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, -3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_WALL_WIDTH, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 difference {
  torus {
   LG_CYLINDER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_WALL_WIDTH, -LG_WALL_WIDTH, 0>,
    <-3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
    <3*LG_WALL_WIDTH, 0, -LG_PLATE_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, 0>,
    <0, 3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
    rotate <0, 0, -lg_angle*180/pi>
   }
  }
 }
 object {
  lg_plate_column
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_CORNER_SPACE, -LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_CYLINDER_RADIUS-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0, -LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_KNOB_RADIUS, 0, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>
 }
 box {
  <-LG_KNOB_RADIUS, LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2>,
  <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0, -LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>
 }
 box {
  <-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT/2>,
  <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE+LG_E>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  box {
   <-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CYLINDER_RADIUS
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -LG_PLATE_HEIGHT/2>,
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE
 }
}

#declare lg_2430_clear =
merge {
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  <-(LG_CYLINDER_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_CYLINDER_RADIUS+2*LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_CORNER_SPACE, -(LG_CYLINDER_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  merge {
   cone {
    <0, 0, -LG_PLATE_HEIGHT+0.05>, LG_KNOB_INNER_RADIUS+0.025
    <0, 0, -LG_PLATE_HEIGHT>, LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT/2+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
  box {
   <0.03, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
   <-0.03, -LG_BRICK_WIDTH/2, -0.5*LG_PLATE_HEIGHT>
   rotate <0, 0, 45>
  }
 }
 difference {
  box {
   <0, 0, -LG_PLATE_HEIGHT/2>,
   <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
  }
  union {
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT/2+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_CYLINDER_RADIUS+LG_CORNER_SPACE
   }
   box {
    <-LG_WALL_WIDTH, -LG_WALL_WIDTH, 0>,
    <-3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
    <0, 0, -LG_PLATE_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, 0>,
    <0, 0, -LG_PLATE_HEIGHT>
    rotate <0, 0, -lg_angle*180/pi>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, -3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_WALL_WIDTH, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 difference {
  torus {
   LG_CYLINDER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_WALL_WIDTH, -LG_WALL_WIDTH, 0>,
    <-3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
    <3*LG_WALL_WIDTH, 0, -LG_PLATE_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <3*LG_WALL_WIDTH, -3*LG_WALL_WIDTH, 0>,
    <0, 3*LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
    rotate <0, 0, -lg_angle*180/pi>
   }
  }
 }
 object {
  lg_plate_column_clear
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_CORNER_SPACE, -LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_CYLINDER_RADIUS-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0, -LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_KNOB_RADIUS, 0, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>
 }
 box {
  <-LG_KNOB_RADIUS, LG_CORNER_SPACE, -LG_PLATE_HEIGHT/2>,
  <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0, -LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>
 }
 box {
  <-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT/2>,
  <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE+LG_E>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  box {
   <-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -LG_PLATE_HEIGHT/2+LG_CORNER_SPACE>,
  LG_CYLINDER_RADIUS
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -LG_PLATE_HEIGHT/2>,
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE
 }
}

#end
