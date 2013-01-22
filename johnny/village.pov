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
    #declare set_floor_color=white;                         // Floor color e.g. white
    #declare set_background_color= sky_color                // Background color. e.g. sky_color or black
    #declare set_scenery_file=""         // Filename of your scenery file, empty string no scenery
    #declare set_scenery_align=<0,0,0>;                     // Align scenery to Johnny's world                                                        
    #declare set_camera_nr=0;                               // 1:front, 2:side, 3:top, 4:angle, 0:custom
    #declare set_camera_ortho=1;                            // 0:normal, 1:orthogonal (no perspective)
    #declare set_camera_follow=0;                           // 0:static camera, 1:camera moves with fig
    #declare set_light_nr=1;                                // 1:two lights up front, 0:custom
    #declare set_light_ambient= rgb <0.5,0.5,0.5>;          // Ambient light
    #declare set_shadows=1;                                 // 0:no shadows, 1:shadows
    #declare set_show_captions=0;                           // 0:no captions, 1 :captions
    #declare set_captions_color=yellow;                      // Captions color
    #declare set_show_reference=0;                          // 0:normal 1:reference points
    #declare set_font_file="arial.ttf"                      // TrueType font for captions and references

// --------------------------------------------------------------------
// CUSTOM CAMERA AND LIGHT
// -------------------------------------------------------------------- 

// Use this to store a customized camera for this scene.
// Invoke this camera by setting camera_nr to 0. 
    #declare my_camera=camera {
        up <0,1,0>
        right  <1.77,0,0>             //for use with ini setting of 16:9 width to height
        location  <50.0 , 20.0 ,-35.0>
        look_at   <50.0,  20.0, 35.0>
        translate <0,0,0>
        #if (set_camera_ortho) orthographic #end
        }
      
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

#if(on)
johnny(
    "Builder",
    1,              //set_talk                  0:rigid smiley, 1:talking mouth
    0,              //phase_shift               to walk out of pace to other walkers
    array [9] {     //-- BODY MOVEMENT
        -0.5,        //set_move_head      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.5,        //set_move_arm_left  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_arm_right -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0.5,        //set_move_hand_left  -2.o/+2.0 relative motion of left hamd,  e.g. 0.5
        0.2,        //set_move_hand_right -2.o/+2.0 relative motion of right hand, e.g. 0.5
        0,          //set_move_gear_left    -2.o/+2.0 relative motion of gear in left hand
        0         //set_move_gear_right   -2.o/+2.0 relative motion of gear in right hand
        1.0,        //set_move_legs      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
        },
    array [3] {     //-- GAIT
        0.1,        //set_move_sideways  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        -0.1        //set_move_attitude  -2.o-2.0 relative motion of stepping sideways,   e.g. 0.1
        0        //set_move_jump      0-6 relative motion of jumping up,   e.g. 0.5
        }
    array [8] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 20
        0,          //set_pose_torso            start pose of torso,     e.g. 10
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. -20
        -20,          //set_pose_arm_right        start pose of right arm, e.g. -20
        30,          //set_pose_hand_left        start pose of left hand,  e.g. 30
        -30,           //set_pose_hand_right       start pose of right hand, e.g. -30
        0,          //set_pose_gear_left       start pose of gear in left hand , e.g. -30
        0,          //set_pose_gear_right       start pose of gear in right hand , e.g. -30
        },           
    array [5]{       //-- DRESS
        flesh_tex, //set_head_tex,
        grey_tex, //set_hands_tex,
        blue2_tex,   //set_pants_tex,
        blue_tex,  //set_shirt_tex,
        flesh_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,
        grey2_tex
            //"shirt_print.gif"
            //"ericmosaic.gif",
            //grey2_tex,
            //grey_tex,         
            //black_tex,
            //white_tex,
        },
    array [4] {     //gear
        "headgear_11",                      //headwear/hair     filename, empty string for bald
        "",                      //neck/backwear     filename
        "",                                     //hand tool left    filename
        ""                    //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        white_tex,    //headwear/hair color              
        grey_tex,    //neck/backwear color       
        grey_tex,    //hand gear left color            
        grey_tex     //hand gear right color           
        },   
    array [5] {
        0           //set_move_fig              //0:stay at spot, 1:move along
        0,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        0,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end

#if(on)
johnny(
    "Cowboy",
    1,              //set_talk                  0:rigid smiley, 1:talking mouth
    1,              //phase_shift               to walk out of pace to other walkers
    array [9] {     //-- BODY MOVEMENT
        -0.5,        //set_move_head      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.5,        //set_move_arm_left  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_arm_right -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0.5,        //set_move_hand_left  -2.o/+2.0 relative motion of left hamd,  e.g. 0.5
        0.2,        //set_move_hand_right -2.o/+2.0 relative motion of right hand, e.g. 0.5
        0,          //set_move_gear_left    -2.o/+2.0 relative motion of gear in left hand
        0         //set_move_gear_right   -2.o/+2.0 relative motion of gear in right hand
        1.0,        //set_move_legs      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
        },
    array [3] {     //-- GAIT
        0.1,        //set_move_sideways  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        -0.1        //set_move_attitude  -2.o-2.0 relative motion of stepping sideways,   e.g. 0.1
        0        //set_move_jump      0-6 relative motion of jumping up,   e.g. 0.5
        }
    array [8] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 20
        0,          //set_pose_torso            start pose of torso,     e.g. 10
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. -20
        -20,          //set_pose_arm_right        start pose of right arm, e.g. -20
        30,          //set_pose_hand_left        start pose of left hand,  e.g. 30
        -30,           //set_pose_hand_right       start pose of right hand, e.g. -30
        0,          //set_pose_gear_left       start pose of gear in left hand , e.g. -30
        0,          //set_pose_gear_right       start pose of gear in right hand , e.g. -30
        },           
    array [5]{       //-- DRESS
        flesh_tex, //set_head_tex,
        flesh_tex, //set_hands_tex,
        blue2_tex,   //set_pants_tex,
        red_tex,  //set_shirt_tex,
        blue2_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,
        grey2_tex
            //"shirt_print.gif"
            //"ericmosaic.gif",
            //grey2_tex,
            //grey_tex,         
            //black_tex,
            //white_tex,
        },
    array [4] {     //gear
        "headgear_09",                      //headwear/hair     filename, empty string for bald
        "",                      //neck/backwear     filename
        "",                                     //hand tool left    filename
        ""                    //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        brown_tex,    //headwear/hair color              
        grey_tex,    //neck/backwear color       
        grey_tex,    //hand gear left color            
        grey_tex     //hand gear right color           
        },   
    array [5] {
        0           //set_move_fig              //0:stay at spot, 1:move along
        20,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        20,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end

#if(on)
johnny(
    "Soldier",
    1,              //set_talk                  0:rigid smiley, 1:talking mouth
    0,              //phase_shift               to walk out of pace to other walkers
    array [9] {     //-- BODY MOVEMENT
        -0.5,        //set_move_head      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.5,        //set_move_arm_left  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_arm_right -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0.5,        //set_move_hand_left  -2.o/+2.0 relative motion of left hamd,  e.g. 0.5
        0.2,        //set_move_hand_right -2.o/+2.0 relative motion of right hand, e.g. 0.5
        0,          //set_move_gear_left    -2.o/+2.0 relative motion of gear in left hand
        0         //set_move_gear_right   -2.o/+2.0 relative motion of gear in right hand
        1.0,        //set_move_legs      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
        },
    array [3] {     //-- GAIT
        0,        //set_move_sideways  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        -0.1        //set_move_attitude  -2.o-2.0 relative motion of stepping sideways,   e.g. 0.1
        0        //set_move_jump      0-6 relative motion of jumping up,   e.g. 0.5
        }
    array [8] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 20
        0,          //set_pose_torso            start pose of torso,     e.g. 10
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. -20
        -20,          //set_pose_arm_right        start pose of right arm, e.g. -20
        30,          //set_pose_hand_left        start pose of left hand,  e.g. 30
        -30,           //set_pose_hand_right       start pose of right hand, e.g. -30
        0,          //set_pose_gear_left       start pose of gear in left hand , e.g. -30
        0,          //set_pose_gear_right       start pose of gear in right hand , e.g. -30
        },           
    array [5]{       //-- DRESS
        brown_tex, //set_head_tex,
        brown_tex, //set_hands_tex,
        green_tex,   //set_pants_tex,
        green_tex,  //set_shirt_tex,
        green_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,
        grey2_tex
            //"shirt_print.gif"
            //"ericmosaic.gif",
            //grey2_tex,
            //grey_tex,         
            //black_tex,
            //white_tex,
        },
    array [4] {     //gear
        "headgear_16",                      //headwear/hair     filename, empty string for bald
        "",                      //neck/backwear     filename
        "",                                     //hand tool left    filename
        ""                    //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        green_tex,    //headwear/hair color              
        grey_tex,    //neck/backwear color       
        grey_tex,    //hand gear left color            
        grey_tex     //hand gear right color           
        },   
    array [5] {
        0           //set_move_fig              //0:stay at spot, 1:move along
        40,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        0,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end                       
                                  
#if(on)
johnny(
    "Chief",
    1,              //set_talk                  0:rigid smiley, 1:talking mouth
    2,              //phase_shift               to walk out of pace to other walkers
    array [9] {     //-- BODY MOVEMENT
        -0.5,        //set_move_head      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.5,        //set_move_arm_left  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_arm_right -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0.5,        //set_move_hand_left  -2.o/+2.0 relative motion of left hamd,  e.g. 0.5
        0.2,        //set_move_hand_right -2.o/+2.0 relative motion of right hand, e.g. 0.5
        0,          //set_move_gear_left    -2.o/+2.0 relative motion of gear in left hand
        0         //set_move_gear_right   -2.o/+2.0 relative motion of gear in right hand
        1.0,        //set_move_legs      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
        },
    array [3] {     //-- GAIT
        0.1,        //set_move_sideways  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        -0.1        //set_move_attitude  -2.o-2.0 relative motion of stepping sideways,   e.g. 0.1
        0        //set_move_jump      0-6 relative motion of jumping up,   e.g. 0.5
        }
    array [8] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 20
        0,          //set_pose_torso            start pose of torso,     e.g. 10
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. -20
        -20,          //set_pose_arm_right        start pose of right arm, e.g. -20
        30,          //set_pose_hand_left        start pose of left hand,  e.g. 30
        -30,           //set_pose_hand_right       start pose of right hand, e.g. -30
        0,          //set_pose_gear_left       start pose of gear in left hand , e.g. -30
        0,          //set_pose_gear_right       start pose of gear in right hand , e.g. -30
        },           
    array [5]{       //-- DRESS
        flesh_tex, //set_head_tex,
        flesh_tex, //set_hands_tex,
        red_tex,   //set_pants_tex,
        flesh_tex,  //set_shirt_tex,
        flesh_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,
        grey2_tex
            //"shirt_print.gif"
            //"ericmosaic.gif",
            //grey2_tex,
            //grey_tex,         
            //black_tex,
            //white_tex,
        },
    array [4] {     //gear
        "headgear_14",                      //headwear/hair     filename, empty string for bald
        "",                      //neck/backwear     filename
        "",                                     //hand tool left    filename
        ""                    //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        brown_tex,    //headwear/hair color              
        grey_tex,    //neck/backwear color       
        grey_tex,    //hand gear left color            
        grey_tex     //hand gear right color           
        },   
    array [5] {
        0           //set_move_fig              //0:stay at spot, 1:move along
        60,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        20,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end                                  
                 
#if(on)
johnny(
    "Leather",
    1,              //set_talk                  0:rigid smiley, 1:talking mouth
    0,              //phase_shift               to walk out of pace to other walkers
    array [9] {     //-- BODY MOVEMENT
        0.5,        //set_move_head      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.5,        //set_move_arm_left  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_arm_right -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0.5,        //set_move_hand_left  -2.o/+2.0 relative motion of left hamd,  e.g. 0.5
        0.2,        //set_move_hand_right -2.o/+2.0 relative motion of right hand, e.g. 0.5
        0,          //set_move_gear_left    -2.o/+2.0 relative motion of gear in left hand
        0         //set_move_gear_right   -2.o/+2.0 relative motion of gear in right hand
        1.0,        //set_move_legs      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
        },
    array [3] {     //-- GAIT
        0.1,        //set_move_sideways  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        0.5        //set_move_attitude  -2.o-2.0 relative motion of stepping sideways,   e.g. 0.1
        0        //set_move_jump      0-6 relative motion of jumping up,   e.g. 0.5
        }
    array [8] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 20
        0,          //set_pose_torso            start pose of torso,     e.g. 10
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. -20
        -20,          //set_pose_arm_right        start pose of right arm, e.g. -20
        30,          //set_pose_hand_left        start pose of left hand,  e.g. 30
        -30,           //set_pose_hand_right       start pose of right hand, e.g. -30
        0,          //set_pose_gear_left       start pose of gear in left hand , e.g. -30
        0,          //set_pose_gear_right       start pose of gear in right hand , e.g. -30
        },           
    array [5]{       //-- DRESS
        flesh_tex, //set_head_tex,
        flesh_tex, //set_hands_tex,
        black_tex,   //set_pants_tex,
        black_tex,  //set_shirt_tex,
        flesh_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,
        grey2_tex
            //"shirt_print.gif"
            //"ericmosaic.gif",
            //grey2_tex,
            //grey_tex,         
            //black_tex,
            //white_tex,
        },
    array [4] {     //gear
        "headgear_10",                      //headwear/hair     filename, empty string for bald
        "",                      //neck/backwear     filename
        "",                                     //hand tool left    filename
        ""                    //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        black_tex,    //headwear/hair color              
        grey_tex,    //neck/backwear color       
        grey_tex,    //hand gear left color            
        grey_tex     //hand gear right color           
        },   
    array [5] {
        0           //set_move_fig              //0:stay at spot, 1:move along
        80,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        0,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end                       
                          
#if(on)
johnny(
    "Police",
    1,              //set_talk                  0:rigid smiley, 1:talking mouth
    0,              //phase_shift               to walk out of pace to other walkers
    array [9] {     //-- BODY MOVEMENT
        -0.5,        //set_move_head      -2.o/+2.0 relative motion of head,      e.g. 0.5
        0,        //set_move_torso     -2.o/+2.0 relative motion of torso,     e.g. 0.1
        0.5,        //set_move_arm_left  -2.o/+2.0 relative motion of left arm,  e.g. 0.5
        0.5,        //set_move_arm_right -2.o/+2.0 relative motion of right arm, e.g. 0.5
        0.5,        //set_move_hand_left  -2.o/+2.0 relative motion of left hamd,  e.g. 0.5
        0.2,        //set_move_hand_right -2.o/+2.0 relative motion of right hand, e.g. 0.5
        0,          //set_move_gear_left    -2.o/+2.0 relative motion of gear in left hand
        0         //set_move_gear_right   -2.o/+2.0 relative motion of gear in right hand
        1.0,        //set_move_legs      -2.o/+2.0 relative motion of legs,      choose 1.0 for walks
        },
    array [3] {     //-- GAIT
        0.1,        //set_move_sideways  0.0-2.0 relative motion of toppling sideways,   e.g. 0.1
        -0.1        //set_move_attitude  -2.o-2.0 relative motion of stepping sideways,   e.g. 0.1
        0        //set_move_jump      0-6 relative motion of jumping up,   e.g. 0.5
        }
    array [8] {     //-- STARTING POSE
        0,          //set_pose_head             start pose of head,      e.g. 20
        0,          //set_pose_torso            start pose of torso,     e.g. 10
        -20,          //set_pose_arm_left         start pose of left arm,  e.g. -20
        -20,          //set_pose_arm_right        start pose of right arm, e.g. -20
        30,          //set_pose_hand_left        start pose of left hand,  e.g. 30
        -30,           //set_pose_hand_right       start pose of right hand, e.g. -30
        0,          //set_pose_gear_left       start pose of gear in left hand , e.g. -30
        0,          //set_pose_gear_right       start pose of gear in right hand , e.g. -30
        },           
    array [5]{       //-- DRESS
        brown_tex, //set_head_tex,
        white_tex, //set_hands_tex,
        black_tex,   //set_pants_tex,
        black_tex,  //set_shirt_tex,
        black_tex   //set_shirt_arms_tex,
        },                   
    "",//"ericmosaic.gif",       //set_shirt_print_file,
    array [4] {                
        grey2_tex,
        grey2_tex,
        grey2_tex,
        grey2_tex
            //"shirt_print.gif"
            //"ericmosaic.gif",
            //grey2_tex,
            //grey_tex,         
            //black_tex,
            //white_tex,
        },
    array [4] {     //gear
        "headgear_13",                      //headwear/hair     filename, empty string for bald
        "",                      //neck/backwear     filename
        "",                                     //hand tool left    filename
        ""                    //hand tool right   filename
        },                                  
    array [4]{      //gear colors
        white_tex,    //headwear/hair color              
        grey_tex,    //neck/backwear color       
        grey_tex,    //hand gear left color            
        grey_tex     //hand gear right color           
        },   
    array [5] {
        0,           //set_move_fig              //0:stay at spot, 1:move along
        100,          //set_start_x,              //fig walks on the x-z-plane (horizontal)   e.g. -50 or 0
        20,          //set_start_z
        0,          //set_start_direction       //direction in degrees from start           e.g. -20
        0}          //set_curve_direction       //curvature in degrees per half step        e.g. 5
)
#end
                                  

                                  
//use this to store a customized camera for this scene
//invoke this camera by setting camera_nr to 0 
#declare my_camera=camera {
  up    <0,1,0>
  right  <1.77,0,0>             //for use with ini setting of 16:9 width to height
  location  <50.0 , 20.0 ,-35.0>
  look_at   <50.0,  20.0, 35.0>
  translate <0,0,0>
  orthographic 
  }
 