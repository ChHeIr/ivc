/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4083: Bar 1 x 4 x 2                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4083)
#else
#declare lg_4083 =
union {
 #declare CYL_X = -0.5;
 #while (CYL_X < 1)
  difference {
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS-LG_E>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
  difference {
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
  torus {
   LG_KNOB_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  #declare CYL_X = CYL_X +1;
 #end
 difference {
  cylinder {
   <0, -LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
   <0, LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
   LG_KNOB_INNER_RADIUS
  }
  union {
   #declare CYL_X = -0.5;
   #while (CYL_X < 1)
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS-LG_E>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
    #declare CYL_X = CYL_X +1;
   #end
  }
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, LG_BRICK_WIDTH, LG_E>,
      <LG_KNOB_RADIUS, 0, -2*LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 0, -2*LG_BRICK_WIDTH>
     }
    }
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
    <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   difference {
    union {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
     rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    cylinder {
     <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
     <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
     LG_CYLINDER_RADIUS
    }
    box {
     <-0.05, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
     <0.05, LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS/2>
    }
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  } 
  #declare ROT = ROT + 1;
 #end
}

#declare lg_4083_clear =
merge {
 #declare CYL_X = -0.5;
 #while (CYL_X < 1)
  difference {
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS-LG_E>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
  difference {
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS>,
    <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
  torus {
   LG_KNOB_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  #declare CYL_X = CYL_X +1;
 #end
 difference {
  cylinder {
   <0, -LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
   <0, LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
   LG_KNOB_INNER_RADIUS
  }
  merge {
   #declare CYL_X = -0.5;
   #while (CYL_X < 1)
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, -2*LG_KNOB_INNER_RADIUS-LG_E>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
    #declare CYL_X = CYL_X +1;
   #end
  }
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>
    }
    merge {
     box {
      <-LG_KNOB_RADIUS, LG_BRICK_WIDTH, LG_E>,
      <LG_KNOB_RADIUS, 0, -2*LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 0, -2*LG_BRICK_WIDTH>
     }
    }
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
    <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   difference {
    merge {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    merge {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
     rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    cylinder {
     <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
     <0, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
     LG_CYLINDER_RADIUS
    }
    box {
     <-0.05, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
     <0.05, LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS/2>
    }
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  } 
  #declare ROT = ROT + 1;
 #end
}

#end
