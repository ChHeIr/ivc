/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970830 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3299: Slope Brick 33  2 x 4 Double                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3299)
#else
#declare LENGTH = 4;
#declare WIDTH = 2;
#declare lg_angle1=65.32484819;
#declare lg_angle2=90-lg_angle1;
#declare lg_3299 = 
union {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_INNER_HEIGHT>
   }
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_INNER_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT+LG_E>
   }
   difference {
    box {
     <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     <-LG_E, -0*LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
     rotate <lg_angle1, 0, 0>
     translate <0, -LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <-LG_E, WIDTH*LG_BRICK_WIDTH, 0>,
     <LENGTH*LG_BRICK_WIDTH+LG_E, (WIDTH+1)*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
    }
   }
   difference {
    box {
     <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     <-LG_E, 0*LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
     rotate <-lg_angle1, 0, 0>
     translate <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <-LG_E, 0, 0>,
     <LENGTH*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
    }
   }
  }
 }
 difference {
  union{
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0 >
   }
   object {
    lg_brick_cylinder
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0 >
   }
   object {
    lg_brick_cylinder
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0 >
   }
  }
  union {
   box {
    <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
    <0, -LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
    rotate <lg_angle1, 0, 0>
    translate <0, -LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
    <0, LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
    rotate <-lg_angle1, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
 translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 rotate <0, 0, 90>
}

#declare lg_3299_clear = 
merge {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), WIDTH/2*LG_BRICK_WIDTH, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)-(LG_BRICK_WIDTH+LG_CORNER_SPACE)/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_INNER_HEIGHT>
   }
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_INNER_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT-LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT+LG_E>
   }
   difference {
    box {
     <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     <-LG_E, -0*LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
     rotate <lg_angle1, 0, 0>
     translate <0, -LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <-LG_E, WIDTH*LG_BRICK_WIDTH, 0>,
     <LENGTH*LG_BRICK_WIDTH+LG_E, (WIDTH+1)*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
    }
   }
   difference {
    box {
     <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
     <-LG_E, 0*LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
     rotate <-lg_angle1, 0, 0>
     translate <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <-LG_E, 0, 0>,
     <LENGTH*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
    }
   }
  }
 }
 difference {
  merge{
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0 >
   }
   object {
    lg_brick_cylinder_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0 >
   }
   object {
    lg_brick_cylinder_clear
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0 >
   }
  }
  merge {
   box {
    <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
    <0, -LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
    rotate <lg_angle1, 0, 0>
    translate <0, -LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LENGTH*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_HEIGHT>,
    <0, LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT)>
    rotate <-lg_angle1, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
 translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 rotate <0, 0, 90>
}

#declare lg_3299_slope=
union {
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
  <LG_CORNER_SPACE, -(LG_WALL_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle1/180)>
  rotate <lg_angle1, 0, 0>
  translate <0, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 }
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0>,
  <LG_CORNER_SPACE, (LG_WALL_WIDTH-LG_CORNER_SPACE), (LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle1/180)>
  rotate <-lg_angle1, 0, 0>
  translate <0, LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 }
 translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 rotate <0, 0, 90>
}

#end