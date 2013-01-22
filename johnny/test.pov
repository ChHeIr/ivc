#include "Candle_2.inc"
camera {
        location  <0.0 , -10.0 , 0.0>
        look_at   <0.0, 0.0, 00.0>
//        rotate <10,-30,0>
        translate <0,0,0>
        angle 45
        }
        
        
        
//          #declare  licht  = object  { Candle_2( 0.9,  // Shining_On, 0= off, >0 = intensity of candle light 
//                  0.5, // Flame_Shadow, // >0 = intensity ; 0 = off
//                  1.0,  // Candle_Height, relative to diameter (d=1) 
//                  1.2,  // Candle_Intensity,  
//                  0.7   // Candle_Flame_Scale
//                  5, // Fade_Distance, //  3 ~ 5    
//                  4 // Fade_Power //   2,3,4
//                 ) // -------------------------
//                 scale 5
//        rotate<0,0,0>
//        
//      }

//object{licht translate <0,0,0>}


object  { Candle_2( 0.9,  // Shining_On, 0= off, >0 = intensity of candle light 
                  0.5, // Flame_Shadow, // >0 = intensity ; 0 = off
                  1.0,  // Candle_Height, relative to diameter (d=1) 
                  1.2,  // Candle_Intensity,  
                  0.7   // Candle_Flame_Scale
                  5, // Fade_Distance, //  3 ~ 5    
                  4 // Fade_Power //   2,3,4
                 ) // -------------------------
                 scale 5
        rotate<0,0,0>
        
      }
