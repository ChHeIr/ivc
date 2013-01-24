// ----------------------------------------------------------------------------------------
// JOHNNY WALKER ANIMATION SETUP FILE
// ----------------------------------------------------------------------------------------
// For Johnny Walker minifig animator. (c) Eric Brok 2006. See readme.txt on how to use.
// Use multiple copies of this file to store different animation setups.

    #declare lib_dir="lib/";
    #declare gear_dir="gear/";
    #declare pics_dir="pics/";
    #declare scenery_dir="scenery/";
    #declare fonts_dir="fonts/";                             // You can change this to your local font folder

// ----------------------------------------------------------------------------------------
// INCLUDE - Do not change these
// ----------------------------------------------------------------------------------------
    #include "colors.inc"	                                // General POV color definitions
    #include "textures.inc"	                                // General POV Texture definitions
    #include "Candle_2.inc"
    #declare Quality=1;                                     // Quality for basic.lib
    #include concat (lib_dir,"basic.lib")                   // Basic.lib by Anton raves
    #declare sky_color=color Cyan red 0.8;                  // sky for background
    #declare legomind_yellow=color <1.0,1.0,0.5>;
    #declare flesh_tex = texture { pigment { color Flesh } finish { lego_finish } };

// ----------------------------------------------------------------------------------------
// CONTROL PANEL - Change these values for your customized walking animation              
// ----------------------------------------------------------------------------------------

// SCENE
    #declare set_floor=0;                                   // 0:no floor, 1:floor       
    #declare set_floor_color=white;                         // Floor color e.g. white
    #declare set_background_color= sky_color;                // Background color. e.g. sky_color or black
    #declare set_scenery_file="oben_scenery.inc"             // Filename of your scenery file, empty string no scenery
    #declare set_scenery_align=<0,0,0>;                     // Align scenery to Johnny's world                                                        
    #declare set_camera_nr=0;                               // 1:front, 2:side, 3:top, 4:angle, 0:custom
    #declare set_camera_ortho=0;                            // 0:normal, 1:orthogonal (no perspective)
    #declare set_camera_follow=0;                           // 0:static camera, 1:camera moves with fig
    #declare set_light_nr=0;                                // 1:two lights up front, 0:custom
    #declare set_light_ambient= rgb <0.5,0.5,0.5>;          // Ambient light
    #declare set_shadows=1;                                 // 0:no shadows, 1:shadows
    #declare set_show_captions=0;                           // 0:no captions, 1 :captions
    #declare set_captions_color=yellow;                      // Captions color
    #declare set_show_reference=0;                          // 0:normal 1:reference points
    #declare set_font_file="arial.ttf";                      // TrueType font for captions and references

// --------------------------------------------------------------------
// CUSTOM CAMERA AND LIGHT
// -------------------------------------------------------------------- 

// Use this to store a customized camera for this scene.
// Invoke this camera by setting camera_nr to 0. 
    #declare my_camera=camera {
    	        #if (set_camera_ortho) orthographic #end
        location  <20.0 , 100.0 , -120.0>
        look_at   <20.0, 0.0, 100.0>
//        rotate <10,-30,0>
        translate <0,0,0>
        angle 75
        }
//        	#declare ASPECT = 4/3;
//
//            #declare my_camera=camera {
//    	        #if (set_camera_ortho) orthographic #end
//    location < 12.706711,-136.643448,-293.257538 >
//	sky < -0.01472214945363819853,-0.96647581425085427043,0.25633524686162983963 >
//	right ASPECT * < -1,0,0 >
//	look_at < 21.2815891948857505156,-53.78968557044494502861,19.62359195162906644327 >
//	angle 80.4466
//        }
       
// Use this to store a customized light for this scene.
// Invoke this light by setting light_nr to 0. 
    #declare my_light= light_source {
        0*x
        color <1.0,1.0,1.0>  // light's color (rgb fractions)
        translate <-100, 100, -100>
        #if (!set_shadows) shadowless #end
        }

// -----------------------------------------------------------------------------------
// CHARACTER ANIMATION
// -----------------------------------------------------------------------------------
    #include concat (lib_dir,"johnny.inc")

// See readme.txt for a list of available gear.
// Copy the part below for each actor.

//#if(on)                 //Toggle on/off to show/hide an actor
//johnny(
//    "Kumpane",    // caption (name) of the actor
//     	0, //face Expression 0 = indiana
//    0,                  // set_talk             0:rigid smiley, 1:talking mouth
//    0,                  // phase_shift          to walk out of pace to other walkers
//    
//    array [9] {         // -- BODY MOVEMENT
//        -0.5,            // move head            -2.o/+2.0 relative motion of head,              e.g. 0.5
//        0,              // move torso           -2.o/+2.0 relative motion of torso,             e.g. 0.1
//        1,            // move arm left        -2.o/+2.0 relative motion of left arm,          e.g. 0.5
//        0.5,            // move arm right       -2.o/+2.0 relative motion of right arm,         e.g. 0.5
//        0,              // move hand left       -2.o/+2.0 relative motion of left hamd,         e.g. 0.5
//        0,              // move hand right      -2.o/+2.0 relative motion of right hand,        e.g. 0.5
//        0,              // move gear left       -2.o/+2.0 relative motion of gear in left hand
//        0,              // move gear right      -2.o/+2.0 relative motion of gear in right hand
//        1.0,            // move legs            -2.o/+2.0 relative motion of legs, leave 1.0 for walks
//        },
//    array [3] {         // -- GAIT
//        0.1,              // move sideways        0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
//        -0.1               // move attitude        -2.o-2.0 relative motion of stepping sideways,  e.g. 0.1
//        0               // move jump            0-6 relative motion of jumping up,              e.g. 0.5
//        }
//    array [8] {         // -- BODY POSE         as offset to movement
//        0,              // pose head            start pose of head,      e.g. 20
//        0,              // pose torso           start pose of torso,     e.g. 10
//        0,              // pose arm left        start pose of left arm,  e.g. -20
//        0,              // pose arm right       start pose of right arm, e.g. -20
//        0,              // pose hand left       start pose of left hand,  e.g. 30
//        180,              // pose hand right      start pose of right hand, e.g. -30
//        0,              // pose gear left       start pose of gear in left hand , e.g. -30
//        20,              // pose gear right      start pose of gear in right hand , e.g. -30
//        },           
//    array [5]{          // -- DRESS
//        flesh_tex,     // head texture,       e.g. yellow_tex, flesh_tex, brown_tex
//        flesh_tex,     // hands texture,
//        grey2_tex,       // pants texture,
//        brown_tex,        // shirt texture,
//        brown_tex         // shirt arms texture,
//        },                   
//    "",  // shirtprint file, empty string for no print
//    array [4] {                
//        black_tex,      // textures to match with ordered colors in gif file pallet
//        black_tex,
//        black_tex,
//        red_tex
//        },
//    array [4] {         // -- GEAR
//        "headgear_17",  // headwear/hair        filename, empty string for bald
//        "neckgear_02",             // neck/backwear        filename, e.g. neckgear_01
//        "",  // hand tool left       filename, e.g. handgear_01
//        "handgear_05r"   // hand tool right      filename, e.g. handgear_01
//        },                                  
//    array [4]{          
//        grey2_tex,       // headwear/hair color              
//        white_tex,       // neck/backwear color       
//        brown_tex,       // hand gear left color            
//        brown_tex        // hand gear right color           
//        },   
//    array [5] {         // -- PATH
//        1               // move_fig              0:stay at spot, 1:move along
//        10,              // start x,              fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
//        30,              // start z
//        0,              // start direction       direction in degrees from start           e.g. -20
//        0}              // curve direction       curvature in degrees per half step        e.g. 5
//)
//#end


#if(on)                 //Toggle on/off to show/hide an actor
  johnny(
    "indi",    // caption (name) of the actor
 	1, //face Expression 0 = standard 1 = indiana
    1,                  // set_talk             0:rigid smiley, 1:talking mouth
    0,                  // phase_shift          to walk out of pace to other walkers
    
    array [9] {         // -- BODY MOVEMENT
        -1.0,            // move head            -2.o/+2.0 relative motion of head,              e.g. 0.5
        0,              // move torso           -2.o/+2.0 relative motion of torso,             e.g. 0.1
        0,            // move arm left        -2.o/+2.0 relative motion of left arm,          e.g. 0.5
        2,            // move arm right       -2.o/+2.0 relative motion of right arm,         e.g. 0.5
        0,              // move hand left       -2.o/+2.0 relative motion of left hamd,         e.g. 0.5
        0,              // move hand right      -2.o/+2.0 relative motion of right hand,        e.g. 0.5
        0,              // move gear left       -2.o/+2.0 relative motion of gear in left hand
        0,              // move gear right      -2.o/+2.0 relative motion of gear in right hand
        1.0,            // move legs            -2.o/+2.0 relative motion of legs, leave 1.0 for walks
        },
    array [3] {         // -- GAIT
        0,              // move sideways        0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        0.1               // move attitude        -2.o-2.0 relative motion of stepping sideways,  e.g. 0.1
        0               // move jump            0-6 relative motion of jumping up,              e.g. 0.5
        }
    array [8] {         // -- BODY POSE         as offset to movement
        -30,              // pose head            start pose of head,      e.g. 20
        0,              // pose torso           start pose of torso,     e.g. 10
        0,              // pose arm left        start pose of left arm,  e.g. -20
        0,              // pose arm right       start pose of right arm, e.g. -20
        0,              // pose hand left       start pose of left hand,  e.g. 30
        180,              // pose hand right      start pose of right hand, e.g. -30
        0,              // pose gear left       start pose of gear in left hand , e.g. -30
        20,              // pose gear right      start pose of gear in right hand , e.g. -30
        },           
    array [5]{          // -- DRESS
        flesh_tex,     // head texture,       e.g. yellow_tex, flesh_tex, brown_tex
        flesh_tex,     // hands texture,
        grey2_tex,       // pants texture,
        brown_tex,        // shirt texture,
        brown_tex         // shirt arms texture,
        },                   
    "shirt_print_3.gif",  // shirtprint file, empty string for no print
    array [4] {                
        black_tex,      // textures to match with ordered colors in gif file pallet
        black_tex,
        black_tex,
        red_tex
        },
    array [4] {         // -- GEAR
        "fedora",  // headwear/hair        filename, empty string for bald
        "neckgear_09",             // neck/backwear        filename, e.g. neckgear_01
        "",  // hand tool left       filename, e.g. handgear_01
        "handgear_15"   // hand tool right      filename, e.g. handgear_01
        },                                  
    array [4]{          
        brown_tex,       // headwear/hair color              
        brown_tex,       // neck/backwear color       
        brown_tex,       // hand gear left color            
        brown_tex        // hand gear right color           
        },   
    array [5] {         // -- PATH
        0               // move_fig              0:stay at spot, 1:move along
        10,              // start x,              fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        20,              // start z
	 -180,              // start direction       direction in degrees from start           e.g. -20
        0}              // curve direction       curvature in degrees per half step        e.g. 5
        3
)
      
//      object{kerze scale<100,100,100> }
    
                 text {
    ttf "SFFedora.ttf" "Bricking Jones" 3, 0
    texture{
     pigment{
     	
     	gradient <0,1,0>
color_map {[0.0 Yellow] // White
           [0.5 Orange] // red wine
           [1.0 Red] // White
          } // end of color_map
     	
     	}
     finish{ambient 0.15
            diffuse 0.85}
   }
      translate<-2,7,3>
      rotate<0,0,2>
      scale<12,12,12>
      }
      
      
      #declare  lichtlinks  = object  { Candle_2( 0.9,  // Shining_On, 0= off, >0 = intensity of candle light 
                  0, // Flame_Shadow, // >0 = intensity ; 0 = off
                  1.0,  // Candle_Height, relative to diameter (d=1) 
                  1.2,  // Candle_Intensity,  
                  0.7   // Candle_Flame_Scale
                  5, // Fade_Distance, //  3 ~ 5    
                  4 // Fade_Power //   2,3,4
                 ) // -------------------------
                 scale 7
        rotate 0
        
      }
                                     
                                     #declare  lichtrechts  = object  { Candle_2( 0.9,  // Shining_On, 0= off, >0 = intensity of candle light 
                  0, // Flame_Shadow, // >0 = intensity ; 0 = off
                  1.0,  // Candle_Height, relative to diameter (d=1) 
                  1.2,  // Candle_Intensity,  
                  0.7   // Candle_Flame_Scale
                  5, // Fade_Distance, //  3 ~ 5    
                  4 // Fade_Power //   2,3,4
                 ) // -------------------------
                 scale 7
        rotate 0
        
      }

object{lichtlinks translate <-20,55,110>}
object{lichtrechts translate <60,55,110>}


#end

