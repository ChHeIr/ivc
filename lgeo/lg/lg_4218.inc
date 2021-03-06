/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080113 Lutz Uhlman fixed sides                                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4218: Roller Door with Handle                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4218)
#else
#declare lg_angle=atan2(LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE);
#declare lg_angle2=atan2(LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE);
#declare lg_4218 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, 0>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH>
   }
   box {
    <LG_WALL_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH/2, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>
   }
   sphere {
    <0, 4*LG_BRICK_WIDTH-LG_E, 0>,
    LG_WALL_WIDTH
   }
   difference {
    union {
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
     }
     cylinder {
      <1.5*LG_WALL_WIDTH, 0, 0>,
      <-1.5*LG_WALL_WIDTH, 0, 0>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS
     }
    }
    union {
     box {
      <1.5*LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS>,
      <-1.5*LG_BRICK_WIDTH-LG_E, -LG_KNOB_RADIUS-LG_E, 0>
      rotate <lg_angle2*180/pi, 0, 0>
     }
     box {
      <1.5*LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS+LG_E, -LG_KNOB_RADIUS>,
      <-1.5*LG_BRICK_WIDTH-LG_E, -LG_KNOB_RADIUS-LG_E, 0>
      rotate <-lg_angle2*180/pi, 0, 0>
     }
    }
    translate <0, 0, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
   <0, -4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
   LG_WALL_WIDTH
  }
  union {
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH+LG_E>,
    <LG_WALL_WIDTH+LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_WIDTH>
   }
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH+LG_E>,
    <-LG_WALL_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E>
    rotate <0, lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_WIDTH>
   }
  }
 }
 cylinder {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 } 
 box {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
 } 
 difference {
  box {
   <LG_WALL_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>
  }
  union {
   #declare XX=-2.19;
   #while ( XX<2.5 )
    difference {
     union {
      box {
       <LG_WALL_WIDTH/2+LG_E, -0.69, -1.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/8, 0.69, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>
      }
      box {
       <LG_WALL_WIDTH/2+LG_E, -0.65, -1.5*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/8, 0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.5*LG_WALL_WIDTH>
      }
      cylinder {
       <LG_WALL_WIDTH/8, 0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, 0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       0.04
      }
      cylinder {
       <LG_WALL_WIDTH/8, -0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, -0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       0.04
      }
      cylinder {
       <LG_WALL_WIDTH/8, 0.65, -1.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, 0.65, -1.75*LG_WALL_WIDTH>,
       0.04
      }
      cylinder {
       <LG_WALL_WIDTH/8, -0.65, -1.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, -0.65, -1.75*LG_WALL_WIDTH>,
       0.04
      }
     }
     box {
      <LG_WALL_WIDTH/4, 0.8, 0>,
      <0, -0.8, -1>
     }
     translate <0, XX, 0>
    }
    #declare XX = XX + 1.46;
   #end
  }
 }
 cylinder {
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <1.5*LG_WALL_WIDTH, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH>,
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH>
 }
}

#declare lg_4218_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, 0>,
    <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH>
   }
   box {
    <LG_WALL_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH/2, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>
   }
   sphere {
    <0, 4*LG_BRICK_WIDTH-LG_E, 0>,
    LG_WALL_WIDTH
   }
   difference {
    merge {
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
     }
     cylinder {
      <1.5*LG_WALL_WIDTH, 0, 0>,
      <-1.5*LG_WALL_WIDTH, 0, 0>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS
     }
    }
    union {
     box {
      <1.5*LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS>,
      <-1.5*LG_BRICK_WIDTH-LG_E, -LG_KNOB_RADIUS-LG_E, 0>
      rotate <lg_angle2*180/pi, 0, 0>
     }
     box {
      <1.5*LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS+LG_E, -LG_KNOB_RADIUS>,
      <-1.5*LG_BRICK_WIDTH-LG_E, -LG_KNOB_RADIUS-LG_E, 0>
      rotate <-lg_angle2*180/pi, 0, 0>
     }
    }
    translate <0, 0, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
   <0, -4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
   LG_WALL_WIDTH
  }
  union {
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH+LG_E>,
    <LG_WALL_WIDTH+LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_WIDTH>
   }
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH+LG_E>,
    <-LG_WALL_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH-LG_E>
    rotate <0, lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_WIDTH>
   }
  }
 }
 cylinder {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 } 
 cylinder {
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 } 
 box {
  <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
  <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
 } 
 difference {
  box {
   <LG_WALL_WIDTH/2, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>
  }
  union {
   #declare XX=-2.19;
   #while ( XX<2.5 )
    difference {
     union {
      box {
       <LG_WALL_WIDTH/2+LG_E, -0.69, -1.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/8, 0.69, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>
      }
      box {
       <LG_WALL_WIDTH/2+LG_E, -0.65, -1.5*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/8, 0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.5*LG_WALL_WIDTH>
      }
      cylinder {
       <LG_WALL_WIDTH/8, 0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, 0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       0.04
      }
      cylinder {
       <LG_WALL_WIDTH/8, -0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, -0.65, -LG_BRICK_WIDTH-(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+0.75*LG_WALL_WIDTH>,
       0.04
      }
      cylinder {
       <LG_WALL_WIDTH/8, 0.65, -1.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, 0.65, -1.75*LG_WALL_WIDTH>,
       0.04
      }
      cylinder {
       <LG_WALL_WIDTH/8, -0.65, -1.75*LG_WALL_WIDTH>,
       <LG_WALL_WIDTH/2+LG_E, -0.65, -1.75*LG_WALL_WIDTH>,
       0.04
      }
     }
     box {
      <LG_WALL_WIDTH/4, 0.8, 0>,
      <0, -0.8, -1>
     }
     translate <0, XX, 0>
    }
    #declare XX = XX + 1.46;
   #end
  }
 }
 cylinder {
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <1.5*LG_WALL_WIDTH, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_WALL_WIDTH, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -2*LG_WALL_WIDTH>,
  <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle2), -3*LG_WALL_WIDTH>
 }
}

#end
