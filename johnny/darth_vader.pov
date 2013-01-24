// ----------------------------------------------------------------------------------------
// JOHNNY WALKER ANIMATION SETUP FILE
// ----------------------------------------------------------------------------------------
// For Johnny Walker minifig animator. (c) Eric Brok 2006. See readme.txt on how to use.
// Use multiple copies of this file to store different animation setups.

    #declare lib_dir="lib/"
    #declare gear_dir="gear/"
    #declare pics_dir="pics/"
    #declare scenery_dir="scenery/"
    #declare fonts_dir="fonts/"                             // You can change this to your local font folder

// ----------------------------------------------------------------------------------------
// INCLUDE - Do not change these
// ----------------------------------------------------------------------------------------
    #include "colors.inc"	                                // General POV color definitions
    #include "textures.inc"	                                // General POV Texture definitions
    #declare Quality=1;                                     // Quality for basic.lib
    #include concat (lib_dir,"basic.lib")                   // Basic.lib by Anton raves
    #declare sky_color=color Cyan red 0.8;                  // sky for background
    #declare legomind_yellow=color <1.0,1.0,0.5>;
    #declare flesh_tex = texture { pigment { color Flesh } finish { lego_finish } }

// ----------------------------------------------------------------------------------------
// CONTROL PANEL - Change these values for your customized walking animation              
// ----------------------------------------------------------------------------------------

// SCENE
    #declare set_floor=1;                                   // 0:no floor, 1:floor       
    #declare set_floor_color=black;                         // Floor color e.g. white
    #declare set_background_color= color <0.1,0.1,0.4> ;     // Background color. e.g. sky_color or black
    #declare set_scenery_file="" ;                           // Filename of your scenery file, empty string no scenery
    #declare set_scenery_align=<0,0,0>;                     // Align scenery to Johnny's world                                                        
    #declare set_camera_nr=1;                               // 1:front, 2:side, 3:top, 4:angle, 0:custom
    #declare set_camera_ortho=1;                            // 0:normal, 1:orthogonal (no perspective)
    #declare set_camera_follow=0;                           // 0:static camera, 1:camera moves with fig
    #declare set_light_nr=0;                                // 1:two lights up front, 0:custom
    #declare set_light_ambient= rgb <0.5,0.5,0.5>;          // Ambient light
    #declare set_shadows=1;                                 // 0:no shadows, 1:shadows
    #declare set_show_captions=0;                           // 0:no captions, 1 :captions
    #declare set_captions_color=black;                      // Captions color
    #declare set_show_reference=0;                          // 0:normal 1:reference points
    #declare set_font_file="arial.ttf";                      // TrueType font for captions and references

// --------------------------------------------------------------------
// CUSTOM CAMERA AND LIGHT
// -------------------------------------------------------------------- 

// Use this to store a customized camera for this scene.
// Invoke this camera by setting camera_nr to 0. 
    #declare my_camera=camera {
    	#if (set_camera_ortho) orthographic
        location  <0 , -4.0 , -10.0>
        look_at   <0, 4.0, 10.0>
        rotate <0,-30,0>
        translate <0,0,0>
         #end
        }
       
// Use this to store a customized light for this scene.
// Invoke this light by setting light_nr to 0. 
    #declare my_light= light_source {
        0*x
        color <2.0,0.5,0.5>  // light's color (rgb fractions)
        translate <-10 , 35.0 , -40.0>
        #if (!set_shadows) shadowless #end
        };

// -----------------------------------------------------------------------------------
// CHARACTER ANIMATION
// -----------------------------------------------------------------------------------
    #include concat (lib_dir,"johnny.inc")

// See readme.txt for a list of available gear.
// Copy the part below for each actor.

#if(on)                 //Toggle on/off to show/hide an actor
johnny(
    "Darth Vader",    // caption (name) of the actor
    0,                  // set_talk             0:rigid smiley, 1:talking mouth
    0,                  // phase_shift          to walk out of pace to other walkers
    
    array [9] {         // -- BODY MOVEMENT
        0.2,           // move head            -2.o/+2.0 relative motion of head,              e.g. 0.5
        0,              // move torso           -2.o/+2.0 relative motion of torso,             e.g. 0.1
        0.5,            // move arm left        -2.o/+2.0 relative motion of left arm,          e.g. 0.5
        0.5,            // move arm right       -2.o/+2.0 relative motion of right arm,         e.g. 0.5
        0,              // move hand left       -2.o/+2.0 relative motion of left hamd,         e.g. 0.5
        0.5,              // move hand right      -2.o/+2.0 relative motion of right hand,        e.g. 0.5
        0,              // move gear left       -2.o/+2.0 relative motion of gear in left hand
        0,              // move gear right      -2.o/+2.0 relative motion of gear in right hand
        1.0,            // move legs            -2.o/+2.0 relative motion of legs, leave 1.0 for walks
        },
    array [3] {         // -- GAIT
        0.1,            // move sideways        0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        -0.1             // move attitude        -2.0-2.0 relative motion of stepping sideways,  e.g. 0.1
        0               // move jump            0-6 relative motion of jumping up,              e.g. 0.5
        }
    array [8] {         // -- BODY POSE         as offset to movement
        0,              // pose head            start pose of head,      e.g. 20
        0,              // pose torso           start pose of torso,     e.g. 10
        0,              // pose arm left        start pose of left arm,  e.g. -20
        0,              // pose arm right       start pose of right arm, e.g. -20
        0,              // pose hand left       start pose of left hand,  e.g. 30
        0,              // pose hand right      start pose of right hand, e.g. -30
        0,              // pose gear left       start pose of gear in left hand , e.g. -30
        0,              // pose gear right      start pose of gear in right hand , e.g. -30
        },           
    array [5]{          // -- DRESS
        black_tex,      // head texture,       e.g. yellow_tex, flesh_tex, brown_tex
        black_tex,      // hands texture,
        black_tex,      // pants texture,
        black_tex,      // shirt texture,
        black_tex       // shirt arms texture,
        },                   
    "",  // shirtprint file, empty string for no print
    array [4] {                
        black_tex,      // textures to match with ordered colors in gif file pallet
        black_tex,
        black_tex,
        red_tex
        },
    array [4] {         // -- GEAR
        "headgear_07",  // headwear/hair        filename, empty string for bald
        "neckgear_05",             // neck/backwear        filename, e.g. neckgear_01
        "",             // hand tool left       filename, e.g. handgear_01
        "handgear_15"   // hand tool right      filename, e.g. handgear_01
        },                                  
    array [4]{          
        black_tex,      // headwear/hair color              
        black_tex,      // neck/backwear color       
        black_tex,      // hand gear left color            
        black_tex       // hand gear right color           
        },   
    array [5] {         // -- PATH
        0               // move_fig              0:stay at spot, 1:move along
        0,              // start x,              fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        0,              // start z
        0,              // start direction       direction in degrees from start           e.g. -20
        0}              // curve direction       curvature in degrees per half step        e.g. 5
)
#end















#if(off)
johnny(
    "Darth Vader",
    1,              //set_talk                  0:smiley, 1:talking mouth
    0,              //phase_shift               to walk out of pace
    array [7] {     //-- BODY MOVEMENT
        0.5,        //set_move_head_factor      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso_factor     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.4,        //set_move_arm_left_factor  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.2,        //set_move_arm_right_factor -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0,        //set_move_hand_left_factor  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_hand_right_factor -2.o/+2.0 relative motion of right arm, e.g. 0.5
        1.0},        //set_move_legs_factor      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
    array [2] {     //-- GAIT ATTITUDE
        0.1,        //set_move_sideways_factor  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        0.4}        //set_move_attitude_factor  0.0-2.0 relative motion of stepping sideways,   e.g. 0.1
    array [6] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 0.5
        0,          //set_pose_torso            start pose of torso,     e.g. 0.1
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. 0.5
        0,          //set_pose_arm_right        relative motion of right arm, e.g. 0.5
        0,          //set_pose_hand_left        relative motion of left arm,  e.g. 0.5
        0           //set_pose_hand_right       relative motion of right arm, e.g. 0.5
        },           //-- DRESS
    array [5]{
        black_tex, //set_head_tex,
        black_tex, //set_hands_tex,
        black_tex,   //set_pants_tex,
        black_tex,  //set_shirt_tex,
        black_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,s  grey2_tex
s.inc,                      //headwear/hair     filename, empty string for bald
        neckgear_05.inc,                      //neck/backwear     filename
                                           //hand tool left    filename
        handgear_17.inc                   //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        black_tex,    //headwear/hair color              
        black_tex,    //neck/backwear color       
        black_tex,    //hand gear left color            
        black_tex     //hand gear right color           
        },   
    array [5] {
        0,           //set_move_fig              //0:stay at spot, 1:move along
        0,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        5,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end

//use this to store a customized camera for this scene
//invoke this camera by setting camera_nr to 0 
#declare my_camera=camera {
  location  <20.0 , 100.0 , -120.0>
  look_at   <20.0, 0.0, 100.0>
  rotate <0,-30,0>
  translate <0,0,0>
  #if (false) orthographic #end
  //#if (set_camera_follow) translate <set_start_x,0,posz> #end
  };